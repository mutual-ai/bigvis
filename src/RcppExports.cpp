// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/bigvis.h"
#include <Rcpp.h>

using namespace Rcpp;

// condense_count
List condense_count(const List& x, const NumericVector& z, const NumericVector& weight, bool drop);
RcppExport SEXP bigvis_condense_count(SEXP xSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< bool >::type drop(dropSEXP);
    __result = Rcpp::wrap(condense_count(x, z, weight, drop));
    return __result;
END_RCPP
}
// condense_sum
List condense_sum(const List& x, const NumericVector& z, const NumericVector& weight, bool drop);
RcppExport SEXP bigvis_condense_sum(SEXP xSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< bool >::type drop(dropSEXP);
    __result = Rcpp::wrap(condense_sum(x, z, weight, drop));
    return __result;
END_RCPP
}
// condense_mean
List condense_mean(const List& x, const NumericVector& z, const NumericVector& weight, bool drop);
RcppExport SEXP bigvis_condense_mean(SEXP xSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< bool >::type drop(dropSEXP);
    __result = Rcpp::wrap(condense_mean(x, z, weight, drop));
    return __result;
END_RCPP
}
// condense_sd
List condense_sd(const List& x, const NumericVector& z, const NumericVector& weight, bool drop);
RcppExport SEXP bigvis_condense_sd(SEXP xSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< bool >::type drop(dropSEXP);
    __result = Rcpp::wrap(condense_sd(x, z, weight, drop));
    return __result;
END_RCPP
}
// condense_median
List condense_median(const List& x, const NumericVector& z, const NumericVector& weight, bool drop);
RcppExport SEXP bigvis_condense_median(SEXP xSEXP, SEXP zSEXP, SEXP weightSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const List& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< bool >::type drop(dropSEXP);
    __result = Rcpp::wrap(condense_median(x, z, weight, drop));
    return __result;
END_RCPP
}
// double_diff_sum
std::vector<int> double_diff_sum(IntegerVector bin, IntegerVector count);
RcppExport SEXP bigvis_double_diff_sum(SEXP binSEXP, SEXP countSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type bin(binSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type count(countSEXP);
    __result = Rcpp::wrap(double_diff_sum(bin, count));
    return __result;
END_RCPP
}
// frange
NumericVector frange(const NumericVector& x, const bool finite);
RcppExport SEXP bigvis_frange(SEXP xSEXP, SEXP finiteSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const bool >::type finite(finiteSEXP);
    __result = Rcpp::wrap(frange(x, finite));
    return __result;
END_RCPP
}
// group_fixed
IntegerVector group_fixed(const NumericVector& x, double width, double origin);
RcppExport SEXP bigvis_group_fixed(SEXP xSEXP, SEXP widthSEXP, SEXP originSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type origin(originSEXP);
    __result = Rcpp::wrap(group_fixed(x, width, origin));
    return __result;
END_RCPP
}
// group_rect
IntegerVector group_rect(const NumericVector& x, const NumericVector& y, double x_width, double y_width, double x_origin, double y_origin);
RcppExport SEXP bigvis_group_rect(SEXP xSEXP, SEXP ySEXP, SEXP x_widthSEXP, SEXP y_widthSEXP, SEXP x_originSEXP, SEXP y_originSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type x_width(x_widthSEXP);
    Rcpp::traits::input_parameter< double >::type y_width(y_widthSEXP);
    Rcpp::traits::input_parameter< double >::type x_origin(x_originSEXP);
    Rcpp::traits::input_parameter< double >::type y_origin(y_originSEXP);
    __result = Rcpp::wrap(group_rect(x, y, x_width, y_width, x_origin, y_origin));
    return __result;
END_RCPP
}
// group_hex
IntegerVector group_hex(const NumericVector& x, const NumericVector& y, double x_width, double y_width, double x_origin, double y_origin, double x_max);
RcppExport SEXP bigvis_group_hex(SEXP xSEXP, SEXP ySEXP, SEXP x_widthSEXP, SEXP y_widthSEXP, SEXP x_originSEXP, SEXP y_originSEXP, SEXP x_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type x_width(x_widthSEXP);
    Rcpp::traits::input_parameter< double >::type y_width(y_widthSEXP);
    Rcpp::traits::input_parameter< double >::type x_origin(x_originSEXP);
    Rcpp::traits::input_parameter< double >::type y_origin(y_originSEXP);
    Rcpp::traits::input_parameter< double >::type x_max(x_maxSEXP);
    __result = Rcpp::wrap(group_hex(x, y, x_width, y_width, x_origin, y_origin, x_max));
    return __result;
END_RCPP
}
// lowerBound
IntegerVector lowerBound(const NumericVector& x, const NumericVector& breaks);
RcppExport SEXP bigvis_lowerBound(SEXP xSEXP, SEXP breaksSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type breaks(breaksSEXP);
    __result = Rcpp::wrap(lowerBound(x, breaks));
    return __result;
END_RCPP
}
// smooth_nd_1
NumericVector smooth_nd_1(const NumericMatrix& grid_in, const NumericVector& z_in, const NumericVector& w_in_, const NumericMatrix& grid_out, const int var, const double h, const std::string type);
RcppExport SEXP bigvis_smooth_nd_1(SEXP grid_inSEXP, SEXP z_inSEXP, SEXP w_in_SEXP, SEXP grid_outSEXP, SEXP varSEXP, SEXP hSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type grid_in(grid_inSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type z_in(z_inSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type w_in_(w_in_SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type grid_out(grid_outSEXP);
    Rcpp::traits::input_parameter< const int >::type var(varSEXP);
    Rcpp::traits::input_parameter< const double >::type h(hSEXP);
    Rcpp::traits::input_parameter< const std::string >::type type(typeSEXP);
    __result = Rcpp::wrap(smooth_nd_1(grid_in, z_in, w_in_, grid_out, var, h, type));
    return __result;
END_RCPP
}
// smooth_nd
NumericVector smooth_nd(const NumericMatrix& grid_in, const NumericVector& z_in, const NumericVector& w_in_, const NumericMatrix& grid_out, const NumericVector h);
RcppExport SEXP bigvis_smooth_nd(SEXP grid_inSEXP, SEXP z_inSEXP, SEXP w_in_SEXP, SEXP grid_outSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type grid_in(grid_inSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type z_in(z_inSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type w_in_(w_in_SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type grid_out(grid_outSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type h(hSEXP);
    __result = Rcpp::wrap(smooth_nd(grid_in, z_in, w_in_, grid_out, h));
    return __result;
END_RCPP
}
// bisquare
double bisquare(double u, double b);
RcppExport SEXP bigvis_bisquare(SEXP uSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< double >::type u(uSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    __result = Rcpp::wrap(bisquare(u, b));
    return __result;
END_RCPP
}
// regress
NumericVector regress(const std::vector<double>& x, const std::vector<double>& y, const std::vector<double>& w);
RcppExport SEXP bigvis_regress(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type w(wSEXP);
    __result = Rcpp::wrap(regress(x, y, w));
    return __result;
END_RCPP
}
// median
double median(const std::vector<double>& x);
RcppExport SEXP bigvis_median(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP);
    __result = Rcpp::wrap(median(x));
    return __result;
END_RCPP
}
// regress_robust
NumericVector regress_robust(const std::vector<double>& x, const std::vector<double>& y, const std::vector<double>& w, int iterations);
RcppExport SEXP bigvis_regress_robust(SEXP xSEXP, SEXP ySEXP, SEXP wSEXP, SEXP iterationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type w(wSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    __result = Rcpp::wrap(regress_robust(x, y, w, iterations));
    return __result;
END_RCPP
}
// compute_moments
NumericVector compute_moments(const NumericVector& x);
RcppExport SEXP bigvis_compute_moments(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    __result = Rcpp::wrap(compute_moments(x));
    return __result;
END_RCPP
}
// compute_sum
NumericVector compute_sum(const NumericVector& x);
RcppExport SEXP bigvis_compute_sum(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    __result = Rcpp::wrap(compute_sum(x));
    return __result;
END_RCPP
}
// compute_median
NumericVector compute_median(const NumericVector& x);
RcppExport SEXP bigvis_compute_median(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    __result = Rcpp::wrap(compute_median(x));
    return __result;
END_RCPP
}
