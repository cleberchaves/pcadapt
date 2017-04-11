// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// median_row_i
double median_row_i(const arma::mat& x, int i);
RcppExport SEXP pcadapt_median_row_i(SEXP xSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(median_row_i(x, i));
    return rcpp_result_gen;
END_RCPP
}
// median_per_pop
NumericVector median_per_pop(const arma::mat& x, const arma::vec& lab, const arma::vec& pop, int i);
RcppExport SEXP pcadapt_median_per_pop(SEXP xSEXP, SEXP labSEXP, SEXP popSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lab(labSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pop(popSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(median_per_pop(x, lab, pop, i));
    return rcpp_result_gen;
END_RCPP
}
// check_row
int check_row(const arma::mat& x, int i);
RcppExport SEXP pcadapt_check_row(SEXP xSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(check_row(x, i));
    return rcpp_result_gen;
END_RCPP
}
// impute_geno
Rcpp::List impute_geno(const arma::mat& x);
RcppExport SEXP pcadapt_impute_geno(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(impute_geno(x));
    return rcpp_result_gen;
END_RCPP
}
// impute_geno_pop
Rcpp::List impute_geno_pop(const arma::mat& x, const arma::vec& lab, const arma::vec& pop);
RcppExport SEXP pcadapt_impute_geno_pop(SEXP xSEXP, SEXP labSEXP, SEXP popSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lab(labSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type pop(popSEXP);
    rcpp_result_gen = Rcpp::wrap(impute_geno_pop(x, lab, pop));
    return rcpp_result_gen;
END_RCPP
}
// get_axis
arma::vec get_axis(arma::mat& uglob, const arma::vec& lab, const int pop1, const int pop2);
RcppExport SEXP pcadapt_get_axis(SEXP uglobSEXP, SEXP labSEXP, SEXP pop1SEXP, SEXP pop2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type uglob(uglobSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lab(labSEXP);
    Rcpp::traits::input_parameter< const int >::type pop1(pop1SEXP);
    Rcpp::traits::input_parameter< const int >::type pop2(pop2SEXP);
    rcpp_result_gen = Rcpp::wrap(get_axis(uglob, lab, pop1, pop2));
    return rcpp_result_gen;
END_RCPP
}
// cmpt_directional_stat
double cmpt_directional_stat(arma::mat& usc, arma::mat& uglob, const arma::vec& lab, const int adm, arma::vec& ax);
RcppExport SEXP pcadapt_cmpt_directional_stat(SEXP uscSEXP, SEXP uglobSEXP, SEXP labSEXP, SEXP admSEXP, SEXP axSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type usc(uscSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type uglob(uglobSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lab(labSEXP);
    Rcpp::traits::input_parameter< const int >::type adm(admSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type ax(axSEXP);
    rcpp_result_gen = Rcpp::wrap(cmpt_directional_stat(usc, uglob, lab, adm, ax));
    return rcpp_result_gen;
END_RCPP
}
// cmpt_new_win
arma::vec cmpt_new_win(int i, const arma::vec& map, const double window_size);
RcppExport SEXP pcadapt_cmpt_new_win(SEXP iSEXP, SEXP mapSEXP, SEXP window_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type map(mapSEXP);
    Rcpp::traits::input_parameter< const double >::type window_size(window_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(cmpt_new_win(i, map, window_size));
    return rcpp_result_gen;
END_RCPP
}
// cmpt_all_stat
arma::vec cmpt_all_stat(const arma::mat& geno, const arma::mat& V, const arma::vec& sigma, const int window_size, const int direction, const arma::vec lab, const int ancstrl1, const int ancstrl2, const int adm, const arma::vec axis, const arma::vec map);
RcppExport SEXP pcadapt_cmpt_all_stat(SEXP genoSEXP, SEXP VSEXP, SEXP sigmaSEXP, SEXP window_sizeSEXP, SEXP directionSEXP, SEXP labSEXP, SEXP ancstrl1SEXP, SEXP ancstrl2SEXP, SEXP admSEXP, SEXP axisSEXP, SEXP mapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const int >::type window_size(window_sizeSEXP);
    Rcpp::traits::input_parameter< const int >::type direction(directionSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type lab(labSEXP);
    Rcpp::traits::input_parameter< const int >::type ancstrl1(ancstrl1SEXP);
    Rcpp::traits::input_parameter< const int >::type ancstrl2(ancstrl2SEXP);
    Rcpp::traits::input_parameter< const int >::type adm(admSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type axis(axisSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type map(mapSEXP);
    rcpp_result_gen = Rcpp::wrap(cmpt_all_stat(geno, V, sigma, window_size, direction, lab, ancstrl1, ancstrl2, adm, axis, map));
    return rcpp_result_gen;
END_RCPP
}
// cmpt_global_pca
arma::mat cmpt_global_pca(const arma::mat& geno, const arma::mat& V, const arma::vec& sigma);
RcppExport SEXP pcadapt_cmpt_global_pca(SEXP genoSEXP, SEXP VSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(cmpt_global_pca(geno, V, sigma));
    return rcpp_result_gen;
END_RCPP
}
// cmpt_local_pca
arma::mat cmpt_local_pca(const arma::mat& geno, const arma::mat& V, const arma::vec& sigma, const int beg, const int end);
RcppExport SEXP pcadapt_cmpt_local_pca(SEXP genoSEXP, SEXP VSEXP, SEXP sigmaSEXP, SEXP begSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const int >::type beg(begSEXP);
    Rcpp::traits::input_parameter< const int >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(cmpt_local_pca(geno, V, sigma, beg, end));
    return rcpp_result_gen;
END_RCPP
}
// updt_local_scores
void updt_local_scores(arma::mat& u, const arma::mat& geno, const arma::mat& V, const arma::vec& sigma, const int beg, const int end);
RcppExport SEXP pcadapt_updt_local_scores(SEXP uSEXP, SEXP genoSEXP, SEXP VSEXP, SEXP sigmaSEXP, SEXP begSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const int >::type beg(begSEXP);
    Rcpp::traits::input_parameter< const int >::type end(endSEXP);
    updt_local_scores(u, geno, V, sigma, beg, end);
    return R_NilValue;
END_RCPP
}
// updt_local_scores_2
void updt_local_scores_2(arma::mat& u, const arma::mat& geno, const arma::mat& V, const arma::vec& sigma, const int beg_old, const int end_old, const int beg_new, const int end_new);
RcppExport SEXP pcadapt_updt_local_scores_2(SEXP uSEXP, SEXP genoSEXP, SEXP VSEXP, SEXP sigmaSEXP, SEXP beg_oldSEXP, SEXP end_oldSEXP, SEXP beg_newSEXP, SEXP end_newSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type geno(genoSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< const int >::type beg_old(beg_oldSEXP);
    Rcpp::traits::input_parameter< const int >::type end_old(end_oldSEXP);
    Rcpp::traits::input_parameter< const int >::type beg_new(beg_newSEXP);
    Rcpp::traits::input_parameter< const int >::type end_new(end_newSEXP);
    updt_local_scores_2(u, geno, V, sigma, beg_old, end_old, beg_new, end_new);
    return R_NilValue;
END_RCPP
}
// colMedian_cpp
NumericVector colMedian_cpp(arma::mat& x);
RcppExport SEXP pcadapt_colMedian_cpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(colMedian_cpp(x));
    return rcpp_result_gen;
END_RCPP
}
// Erho_cpp
double Erho_cpp(double b);
RcppExport SEXP pcadapt_Erho_cpp(SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(Erho_cpp(b));
    return rcpp_result_gen;
END_RCPP
}
// Es2_cpp
double Es2_cpp(double c);
RcppExport SEXP pcadapt_Es2_cpp(SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(Es2_cpp(c));
    return rcpp_result_gen;
END_RCPP
}
// scaleTau2_matrix
Rcpp::List scaleTau2_matrix(arma::mat& x);
RcppExport SEXP pcadapt_scaleTau2_matrix(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(scaleTau2_matrix(x));
    return rcpp_result_gen;
END_RCPP
}
// scaleTau2_vector
NumericVector scaleTau2_vector(arma::vec& x);
RcppExport SEXP pcadapt_scaleTau2_vector(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(scaleTau2_vector(x));
    return rcpp_result_gen;
END_RCPP
}
// covGK_cpp
double covGK_cpp(arma::vec x, arma::vec y);
RcppExport SEXP pcadapt_covGK_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(covGK_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}
// ogk_step
Rcpp::List ogk_step(arma::mat& x);
RcppExport SEXP pcadapt_ogk_step(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(ogk_step(x));
    return rcpp_result_gen;
END_RCPP
}
// getDistance_cpp
arma::vec getDistance_cpp(arma::mat& x, arma::rowvec center, arma::mat cov);
RcppExport SEXP pcadapt_getDistance_cpp(SEXP xSEXP, SEXP centerSEXP, SEXP covSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type center(centerSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type cov(covSEXP);
    rcpp_result_gen = Rcpp::wrap(getDistance_cpp(x, center, cov));
    return rcpp_result_gen;
END_RCPP
}
// covRob_cpp
Rcpp::List covRob_cpp(arma::mat& x);
RcppExport SEXP pcadapt_covRob_cpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(covRob_cpp(x));
    return rcpp_result_gen;
END_RCPP
}
// print_convert
void print_convert(std::string input, std::string output, int M, int N, int pool);
RcppExport SEXP pcadapt_print_convert(SEXP inputSEXP, SEXP outputSEXP, SEXP MSEXP, SEXP NSEXP, SEXP poolSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type input(inputSEXP);
    Rcpp::traits::input_parameter< std::string >::type output(outputSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type pool(poolSEXP);
    print_convert(input, output, M, N, pool);
    return R_NilValue;
END_RCPP
}
// ped2pcadapt
int ped2pcadapt(std::string input, std::string output);
RcppExport SEXP pcadapt_ped2pcadapt(SEXP inputSEXP, SEXP outputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type input(inputSEXP);
    Rcpp::traits::input_parameter< std::string >::type output(outputSEXP);
    rcpp_result_gen = Rcpp::wrap(ped2pcadapt(input, output));
    return rcpp_result_gen;
END_RCPP
}
// lfmm2pcadapt
int lfmm2pcadapt(std::string input, std::string output);
RcppExport SEXP pcadapt_lfmm2pcadapt(SEXP inputSEXP, SEXP outputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type input(inputSEXP);
    Rcpp::traits::input_parameter< std::string >::type output(outputSEXP);
    rcpp_result_gen = Rcpp::wrap(lfmm2pcadapt(input, output));
    return rcpp_result_gen;
END_RCPP
}
// sample_geno_matrix
NumericMatrix sample_geno_matrix(NumericMatrix freq, double ploidy, IntegerVector sample_size);
RcppExport SEXP pcadapt_sample_geno_matrix(SEXP freqSEXP, SEXP ploidySEXP, SEXP sample_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type freq(freqSEXP);
    Rcpp::traits::input_parameter< double >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sample_size(sample_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_geno_matrix(freq, ploidy, sample_size));
    return rcpp_result_gen;
END_RCPP
}
// fJ_cpp
arma::mat fJ_cpp(int n);
RcppExport SEXP pcadapt_fJ_cpp(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(fJ_cpp(n));
    return rcpp_result_gen;
END_RCPP
}
// fcnt_cpp
arma::mat fcnt_cpp(arma::mat& a);
RcppExport SEXP pcadapt_fcnt_cpp(SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(fcnt_cpp(a));
    return rcpp_result_gen;
END_RCPP
}
// pca_rotation
arma::mat pca_rotation(arma::mat& a, arma::mat& b);
RcppExport SEXP pcadapt_pca_rotation(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type a(aSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(pca_rotation(a, b));
    return rcpp_result_gen;
END_RCPP
}
// cmpt_centroids
Rcpp::List cmpt_centroids(arma::mat u, const arma::vec lab, const int pop1, const int pop2);
RcppExport SEXP pcadapt_cmpt_centroids(SEXP uSEXP, SEXP labSEXP, SEXP pop1SEXP, SEXP pop2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type u(uSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type lab(labSEXP);
    Rcpp::traits::input_parameter< const int >::type pop1(pop1SEXP);
    Rcpp::traits::input_parameter< const int >::type pop2(pop2SEXP);
    rcpp_result_gen = Rcpp::wrap(cmpt_centroids(u, lab, pop1, pop2));
    return rcpp_result_gen;
END_RCPP
}
// cmpt_transformation
void cmpt_transformation(arma::mat& uloc, arma::mat& uglob, const arma::vec& lab, const int ancstrl1, const int ancstrl2, arma::vec& s, arma::vec& dloc, arma::vec& dglob, arma::mat& R);
RcppExport SEXP pcadapt_cmpt_transformation(SEXP ulocSEXP, SEXP uglobSEXP, SEXP labSEXP, SEXP ancstrl1SEXP, SEXP ancstrl2SEXP, SEXP sSEXP, SEXP dlocSEXP, SEXP dglobSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type uloc(ulocSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type uglob(uglobSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type lab(labSEXP);
    Rcpp::traits::input_parameter< const int >::type ancstrl1(ancstrl1SEXP);
    Rcpp::traits::input_parameter< const int >::type ancstrl2(ancstrl2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type s(sSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type dloc(dlocSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type dglob(dglobSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type R(RSEXP);
    cmpt_transformation(uloc, uglob, lab, ancstrl1, ancstrl2, s, dloc, dglob, R);
    return R_NilValue;
END_RCPP
}
// rescale_local_pca
arma::mat rescale_local_pca(arma::mat& u, arma::vec& s, arma::vec& dep_loc, arma::vec& dep_glob, arma::mat& R);
RcppExport SEXP pcadapt_rescale_local_pca(SEXP uSEXP, SEXP sSEXP, SEXP dep_locSEXP, SEXP dep_globSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type u(uSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type s(sSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type dep_loc(dep_locSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type dep_glob(dep_globSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(rescale_local_pca(u, s, dep_loc, dep_glob, R));
    return rcpp_result_gen;
END_RCPP
}
// get_size_cpp
NumericVector get_size_cpp(std::string filename);
RcppExport SEXP pcadapt_get_size_cpp(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(get_size_cpp(filename));
    return rcpp_result_gen;
END_RCPP
}
// get_nb_ind
int get_nb_ind(const arma::vec& lab, const int anc);
RcppExport SEXP pcadapt_get_nb_ind(SEXP labSEXP, SEXP ancSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type lab(labSEXP);
    Rcpp::traits::input_parameter< const int >::type anc(ancSEXP);
    rcpp_result_gen = Rcpp::wrap(get_nb_ind(lab, anc));
    return rcpp_result_gen;
END_RCPP
}
// cmpt_minor_af
NumericVector cmpt_minor_af(arma::mat& xmatrix, int ploidy);
RcppExport SEXP pcadapt_cmpt_minor_af(SEXP xmatrixSEXP, SEXP ploidySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type xmatrix(xmatrixSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    rcpp_result_gen = Rcpp::wrap(cmpt_minor_af(xmatrix, ploidy));
    return rcpp_result_gen;
END_RCPP
}
// scale_geno
arma::mat scale_geno(arma::mat& xmatrix, int ploidy, arma::vec maf, arma::vec keep_or_not);
RcppExport SEXP pcadapt_scale_geno(SEXP xmatrixSEXP, SEXP ploidySEXP, SEXP mafSEXP, SEXP keep_or_notSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type xmatrix(xmatrixSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type maf(mafSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type keep_or_not(keep_or_notSEXP);
    rcpp_result_gen = Rcpp::wrap(scale_geno(xmatrix, ploidy, maf, keep_or_not));
    return rcpp_result_gen;
END_RCPP
}
// cmpt_cov_cpp
Rcpp::List cmpt_cov_cpp(std::string filename, arma::mat& xmatrix, double min_maf, int ploidy, int type);
RcppExport SEXP pcadapt_cmpt_cov_cpp(SEXP filenameSEXP, SEXP xmatrixSEXP, SEXP min_mafSEXP, SEXP ploidySEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type xmatrix(xmatrixSEXP);
    Rcpp::traits::input_parameter< double >::type min_maf(min_mafSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(cmpt_cov_cpp(filename, xmatrix, min_maf, ploidy, type));
    return rcpp_result_gen;
END_RCPP
}
// cmpt_loadings
arma::mat cmpt_loadings(std::string filename, arma::mat& xmatrix, arma::mat& scores, int nIND, int nSNP, int K, int ploidy, double min_maf, arma::vec& sigma, int type);
RcppExport SEXP pcadapt_cmpt_loadings(SEXP filenameSEXP, SEXP xmatrixSEXP, SEXP scoresSEXP, SEXP nINDSEXP, SEXP nSNPSEXP, SEXP KSEXP, SEXP ploidySEXP, SEXP min_mafSEXP, SEXP sigmaSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type xmatrix(xmatrixSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< int >::type nIND(nINDSEXP);
    Rcpp::traits::input_parameter< int >::type nSNP(nSNPSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< double >::type min_maf(min_mafSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(cmpt_loadings(filename, xmatrix, scores, nIND, nSNP, K, ploidy, min_maf, sigma, type));
    return rcpp_result_gen;
END_RCPP
}
// lrfunc_cpp
Rcpp::List lrfunc_cpp(std::string filename, arma::mat& xmatrix, arma::mat& scores, int nIND, int nSNP, int K, int ploidy, double min_maf, arma::vec& sigma, int type);
RcppExport SEXP pcadapt_lrfunc_cpp(SEXP filenameSEXP, SEXP xmatrixSEXP, SEXP scoresSEXP, SEXP nINDSEXP, SEXP nSNPSEXP, SEXP KSEXP, SEXP ploidySEXP, SEXP min_mafSEXP, SEXP sigmaSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type xmatrix(xmatrixSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< int >::type nIND(nINDSEXP);
    Rcpp::traits::input_parameter< int >::type nSNP(nSNPSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< double >::type min_maf(min_mafSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(lrfunc_cpp(filename, xmatrix, scores, nIND, nSNP, K, ploidy, min_maf, sigma, type));
    return rcpp_result_gen;
END_RCPP
}
// sample_geno_file
NumericVector sample_geno_file(std::string input, std::string output, double ploidy, IntegerVector sample_size);
RcppExport SEXP pcadapt_sample_geno_file(SEXP inputSEXP, SEXP outputSEXP, SEXP ploidySEXP, SEXP sample_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type input(inputSEXP);
    Rcpp::traits::input_parameter< std::string >::type output(outputSEXP);
    Rcpp::traits::input_parameter< double >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sample_size(sample_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_geno_file(input, output, ploidy, sample_size));
    return rcpp_result_gen;
END_RCPP
}
// get_geno_char
CharacterVector get_geno_char(CharacterVector allele_sep);
RcppExport SEXP pcadapt_get_geno_char(SEXP allele_sepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type allele_sep(allele_sepSEXP);
    rcpp_result_gen = Rcpp::wrap(get_geno_char(allele_sep));
    return rcpp_result_gen;
END_RCPP
}
// get_geno_int
IntegerVector get_geno_int(CharacterVector allele_sep);
RcppExport SEXP pcadapt_get_geno_int(SEXP allele_sepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type allele_sep(allele_sepSEXP);
    rcpp_result_gen = Rcpp::wrap(get_geno_int(allele_sep));
    return rcpp_result_gen;
END_RCPP
}
// check_line_na
int check_line_na(CharacterVector string_geno_row, CharacterVector geno_char);
RcppExport SEXP pcadapt_check_line_na(SEXP string_geno_rowSEXP, SEXP geno_charSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type string_geno_row(string_geno_rowSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type geno_char(geno_charSEXP);
    rcpp_result_gen = Rcpp::wrap(check_line_na(string_geno_row, geno_char));
    return rcpp_result_gen;
END_RCPP
}
// vcf_convert
int vcf_convert(CharacterMatrix string_geno, std::string output, CharacterVector allele_sep);
RcppExport SEXP pcadapt_vcf_convert(SEXP string_genoSEXP, SEXP outputSEXP, SEXP allele_sepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterMatrix >::type string_geno(string_genoSEXP);
    Rcpp::traits::input_parameter< std::string >::type output(outputSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type allele_sep(allele_sepSEXP);
    rcpp_result_gen = Rcpp::wrap(vcf_convert(string_geno, output, allele_sep));
    return rcpp_result_gen;
END_RCPP
}
// get_rank
arma::vec get_rank(const arma::vec& v_temp);
RcppExport SEXP pcadapt_get_rank(SEXP v_tempSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type v_temp(v_tempSEXP);
    rcpp_result_gen = Rcpp::wrap(get_rank(v_temp));
    return rcpp_result_gen;
END_RCPP
}
// cmpt_wilcoxon_stat
double cmpt_wilcoxon_stat(arma::mat& usc, arma::mat& uglob, int direction, arma::vec& lab, int adm, int axis);
RcppExport SEXP pcadapt_cmpt_wilcoxon_stat(SEXP uscSEXP, SEXP uglobSEXP, SEXP directionSEXP, SEXP labSEXP, SEXP admSEXP, SEXP axisSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type usc(uscSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type uglob(uglobSEXP);
    Rcpp::traits::input_parameter< int >::type direction(directionSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type lab(labSEXP);
    Rcpp::traits::input_parameter< int >::type adm(admSEXP);
    Rcpp::traits::input_parameter< int >::type axis(axisSEXP);
    rcpp_result_gen = Rcpp::wrap(cmpt_wilcoxon_stat(usc, uglob, direction, lab, adm, axis));
    return rcpp_result_gen;
END_RCPP
}
