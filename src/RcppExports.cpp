// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// parse_sparse_csv_impl
List parse_sparse_csv_impl(SEXP fname);
RcppExport SEXP _smallcount_parse_sparse_csv_impl(SEXP fnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type fname(fnameSEXP);
    rcpp_result_gen = Rcpp::wrap(parse_sparse_csv_impl(fname));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_smallcount_parse_sparse_csv_impl", (DL_FUNC) &_smallcount_parse_sparse_csv_impl, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_smallcount(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
