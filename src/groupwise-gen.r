# Generate template specialisations for groupwise - these are the functions
# that are called from R.

groups <- list(
  Breaks = c(breaks = "NumericVector&"),
  Fixed = c(width = "double", origin = "double")
)
stats <- c("Sum", "Mean", "Median", "Sd")

combs <- expand.grid(group = names(groups), stat = stats)

cpp_fun <- function(stat, group) {
  name <- paste("compute", tolower(stat), tolower(group), sep = "_")

  g_vars <- groups[[group]]
  g_args <- paste(g_vars, names(g_vars), collapse = ", ")
  s_args <- paste("const NumericVector&", c("x", "y", "weight"), collapse = ", ")
  args <- paste(s_args, ", ", g_args, sep = "")

  template <- paste("<Group", group, ", ", "Stat", stat, ">", sep = "")
  body <- paste("return groupwise", template, "(y, weight, ",
    "Group", group, "(x, ", paste(names(g_vars), collapse = ", "), "));",
    sep = "")

  paste("// [[Rcpp::export]]\n",
    "NumericVector ", name, "(", args, ") {\n",
    "  ", body, "\n}\n\n", sep = "")
}


groupwise <- readLines("groupwise.cpp")
split <- which(grepl("// -{40,}", groupwise))[1]
original <- groupwise[1:split]

writeLines(original, "groupwise.cpp")

cat("// Autogenerated by groupwise-gen.r\n", file = "groupwise.cpp", append = TRUE)
funs <- mapply(cpp_fun, combs$stat, combs$group)
cat(funs, file = "groupwise.cpp", append = TRUE, sep = "")
