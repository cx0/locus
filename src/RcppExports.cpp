// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "locus_types.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// coreBatch
void coreBatch(const MapMat X, const MapMat Y, MapArr2D gam_vb, const MapArr1D log_om_vb, const MapArr1D log_1_min_om_vb, const double log_sig2_inv_vb, const MapArr1D log_tau_vb, MapMat m1_beta, MapMat mat_x_m1, MapArr2D mu_beta_vb, const MapArr1D sig2_beta_vb, const MapArr1D tau_vb);
RcppExport SEXP locus_coreBatch(SEXP XSEXP, SEXP YSEXP, SEXP gam_vbSEXP, SEXP log_om_vbSEXP, SEXP log_1_min_om_vbSEXP, SEXP log_sig2_inv_vbSEXP, SEXP log_tau_vbSEXP, SEXP m1_betaSEXP, SEXP mat_x_m1SEXP, SEXP mu_beta_vbSEXP, SEXP sig2_beta_vbSEXP, SEXP tau_vbSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapMat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type gam_vb(gam_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_om_vb(log_om_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_1_min_om_vb(log_1_min_om_vbSEXP);
    Rcpp::traits::input_parameter< const double >::type log_sig2_inv_vb(log_sig2_inv_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_tau_vb(log_tau_vbSEXP);
    Rcpp::traits::input_parameter< MapMat >::type m1_beta(m1_betaSEXP);
    Rcpp::traits::input_parameter< MapMat >::type mat_x_m1(mat_x_m1SEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mu_beta_vb(mu_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type sig2_beta_vb(sig2_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type tau_vb(tau_vbSEXP);
    coreBatch(X, Y, gam_vb, log_om_vb, log_1_min_om_vb, log_sig2_inv_vb, log_tau_vb, m1_beta, mat_x_m1, mu_beta_vb, sig2_beta_vb, tau_vb);
    return R_NilValue;
END_RCPP
}
// coreZBatch
void coreZBatch(const MapMat X, const MapMat Y, MapArr2D gam_vb, const MapArr1D log_om_vb, const MapArr1D log_1_min_om_vb, const double log_sig2_inv_vb, const MapArr1D log_tau_vb, MapMat m1_beta, MapMat mat_x_m1, MapMat mat_z_mu, MapArr2D mu_beta_vb, const MapArr1D sig2_beta_vb, const MapArr1D tau_vb);
RcppExport SEXP locus_coreZBatch(SEXP XSEXP, SEXP YSEXP, SEXP gam_vbSEXP, SEXP log_om_vbSEXP, SEXP log_1_min_om_vbSEXP, SEXP log_sig2_inv_vbSEXP, SEXP log_tau_vbSEXP, SEXP m1_betaSEXP, SEXP mat_x_m1SEXP, SEXP mat_z_muSEXP, SEXP mu_beta_vbSEXP, SEXP sig2_beta_vbSEXP, SEXP tau_vbSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapMat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type gam_vb(gam_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_om_vb(log_om_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_1_min_om_vb(log_1_min_om_vbSEXP);
    Rcpp::traits::input_parameter< const double >::type log_sig2_inv_vb(log_sig2_inv_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_tau_vb(log_tau_vbSEXP);
    Rcpp::traits::input_parameter< MapMat >::type m1_beta(m1_betaSEXP);
    Rcpp::traits::input_parameter< MapMat >::type mat_x_m1(mat_x_m1SEXP);
    Rcpp::traits::input_parameter< MapMat >::type mat_z_mu(mat_z_muSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mu_beta_vb(mu_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type sig2_beta_vb(sig2_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type tau_vb(tau_vbSEXP);
    coreZBatch(X, Y, gam_vb, log_om_vb, log_1_min_om_vb, log_sig2_inv_vb, log_tau_vb, m1_beta, mat_x_m1, mat_z_mu, mu_beta_vb, sig2_beta_vb, tau_vb);
    return R_NilValue;
END_RCPP
}
// coreProbitBatch
void coreProbitBatch(const MapMat X, const MapMat W, MapArr2D gam_vb, const MapArr1D log_om_vb, const MapArr1D log_1_min_om_vb, const double log_sig2_inv_vb, MapMat m1_beta, MapMat mat_x_m1, MapMat mat_z_mu, MapArr2D mu_beta_vb, const double sig2_beta_vb);
RcppExport SEXP locus_coreProbitBatch(SEXP XSEXP, SEXP WSEXP, SEXP gam_vbSEXP, SEXP log_om_vbSEXP, SEXP log_1_min_om_vbSEXP, SEXP log_sig2_inv_vbSEXP, SEXP m1_betaSEXP, SEXP mat_x_m1SEXP, SEXP mat_z_muSEXP, SEXP mu_beta_vbSEXP, SEXP sig2_beta_vbSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapMat >::type W(WSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type gam_vb(gam_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_om_vb(log_om_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_1_min_om_vb(log_1_min_om_vbSEXP);
    Rcpp::traits::input_parameter< const double >::type log_sig2_inv_vb(log_sig2_inv_vbSEXP);
    Rcpp::traits::input_parameter< MapMat >::type m1_beta(m1_betaSEXP);
    Rcpp::traits::input_parameter< MapMat >::type mat_x_m1(mat_x_m1SEXP);
    Rcpp::traits::input_parameter< MapMat >::type mat_z_mu(mat_z_muSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mu_beta_vb(mu_beta_vbSEXP);
    Rcpp::traits::input_parameter< const double >::type sig2_beta_vb(sig2_beta_vbSEXP);
    coreProbitBatch(X, W, gam_vb, log_om_vb, log_1_min_om_vb, log_sig2_inv_vb, m1_beta, mat_x_m1, mat_z_mu, mu_beta_vb, sig2_beta_vb);
    return R_NilValue;
END_RCPP
}
// coreInfoLoop
void coreInfoLoop(const MapMat X, const MapMat Y, MapArr2D gam_vb, const MapArr2D log_Phi_mat_v_mu, const MapArr2D log_1_min_Phi_mat_v_mu, const double log_sig2_inv_vb, const MapArr1D log_tau_vb, MapMat m1_beta, MapMat mat_x_m1, MapArr2D mu_beta_vb, const MapArr1D sig2_beta_vb, const MapArr1D tau_vb, const MapArr1D shuffled_ind);
RcppExport SEXP locus_coreInfoLoop(SEXP XSEXP, SEXP YSEXP, SEXP gam_vbSEXP, SEXP log_Phi_mat_v_muSEXP, SEXP log_1_min_Phi_mat_v_muSEXP, SEXP log_sig2_inv_vbSEXP, SEXP log_tau_vbSEXP, SEXP m1_betaSEXP, SEXP mat_x_m1SEXP, SEXP mu_beta_vbSEXP, SEXP sig2_beta_vbSEXP, SEXP tau_vbSEXP, SEXP shuffled_indSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapMat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type gam_vb(gam_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr2D >::type log_Phi_mat_v_mu(log_Phi_mat_v_muSEXP);
    Rcpp::traits::input_parameter< const MapArr2D >::type log_1_min_Phi_mat_v_mu(log_1_min_Phi_mat_v_muSEXP);
    Rcpp::traits::input_parameter< const double >::type log_sig2_inv_vb(log_sig2_inv_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_tau_vb(log_tau_vbSEXP);
    Rcpp::traits::input_parameter< MapMat >::type m1_beta(m1_betaSEXP);
    Rcpp::traits::input_parameter< MapMat >::type mat_x_m1(mat_x_m1SEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mu_beta_vb(mu_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type sig2_beta_vb(sig2_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type tau_vb(tau_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type shuffled_ind(shuffled_indSEXP);
    coreInfoLoop(X, Y, gam_vb, log_Phi_mat_v_mu, log_1_min_Phi_mat_v_mu, log_sig2_inv_vb, log_tau_vb, m1_beta, mat_x_m1, mu_beta_vb, sig2_beta_vb, tau_vb, shuffled_ind);
    return R_NilValue;
END_RCPP
}
// coreZInfoLoop
void coreZInfoLoop(const MapMat X, const MapMat Y, MapArr2D gam_vb, const MapArr2D log_Phi_mat_v_mu, const MapArr2D log_1_min_Phi_mat_v_mu, const double log_sig2_inv_vb, const MapArr1D log_tau_vb, MapMat m1_beta, MapMat mat_x_m1, const MapMat mat_z_mu, MapArr2D mu_beta_vb, const MapArr1D sig2_beta_vb, const MapArr1D tau_vb, const MapArr1D shuffled_ind);
RcppExport SEXP locus_coreZInfoLoop(SEXP XSEXP, SEXP YSEXP, SEXP gam_vbSEXP, SEXP log_Phi_mat_v_muSEXP, SEXP log_1_min_Phi_mat_v_muSEXP, SEXP log_sig2_inv_vbSEXP, SEXP log_tau_vbSEXP, SEXP m1_betaSEXP, SEXP mat_x_m1SEXP, SEXP mat_z_muSEXP, SEXP mu_beta_vbSEXP, SEXP sig2_beta_vbSEXP, SEXP tau_vbSEXP, SEXP shuffled_indSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapMat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type gam_vb(gam_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr2D >::type log_Phi_mat_v_mu(log_Phi_mat_v_muSEXP);
    Rcpp::traits::input_parameter< const MapArr2D >::type log_1_min_Phi_mat_v_mu(log_1_min_Phi_mat_v_muSEXP);
    Rcpp::traits::input_parameter< const double >::type log_sig2_inv_vb(log_sig2_inv_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_tau_vb(log_tau_vbSEXP);
    Rcpp::traits::input_parameter< MapMat >::type m1_beta(m1_betaSEXP);
    Rcpp::traits::input_parameter< MapMat >::type mat_x_m1(mat_x_m1SEXP);
    Rcpp::traits::input_parameter< const MapMat >::type mat_z_mu(mat_z_muSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mu_beta_vb(mu_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type sig2_beta_vb(sig2_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type tau_vb(tau_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type shuffled_ind(shuffled_indSEXP);
    coreZInfoLoop(X, Y, gam_vb, log_Phi_mat_v_mu, log_1_min_Phi_mat_v_mu, log_sig2_inv_vb, log_tau_vb, m1_beta, mat_x_m1, mat_z_mu, mu_beta_vb, sig2_beta_vb, tau_vb, shuffled_ind);
    return R_NilValue;
END_RCPP
}
// coreLogitInfoLoop
void coreLogitInfoLoop(const MapMat X, const MapArr2D Y, MapArr2D gam_vb, const MapArr2D log_Phi_mat_v_mu, const MapArr2D log_1_min_Phi_mat_v_mu, const double log_sig2_inv_vb, MapMat m1_beta, MapArr2D mat_x_m1, MapArr2D mat_z_mu, MapArr2D mu_beta_vb, const MapArr2D psi_vb, const MapArr2D sig2_beta_vb, const MapArr1D shuffled_ind);
RcppExport SEXP locus_coreLogitInfoLoop(SEXP XSEXP, SEXP YSEXP, SEXP gam_vbSEXP, SEXP log_Phi_mat_v_muSEXP, SEXP log_1_min_Phi_mat_v_muSEXP, SEXP log_sig2_inv_vbSEXP, SEXP m1_betaSEXP, SEXP mat_x_m1SEXP, SEXP mat_z_muSEXP, SEXP mu_beta_vbSEXP, SEXP psi_vbSEXP, SEXP sig2_beta_vbSEXP, SEXP shuffled_indSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapArr2D >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type gam_vb(gam_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr2D >::type log_Phi_mat_v_mu(log_Phi_mat_v_muSEXP);
    Rcpp::traits::input_parameter< const MapArr2D >::type log_1_min_Phi_mat_v_mu(log_1_min_Phi_mat_v_muSEXP);
    Rcpp::traits::input_parameter< const double >::type log_sig2_inv_vb(log_sig2_inv_vbSEXP);
    Rcpp::traits::input_parameter< MapMat >::type m1_beta(m1_betaSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mat_x_m1(mat_x_m1SEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mat_z_mu(mat_z_muSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mu_beta_vb(mu_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr2D >::type psi_vb(psi_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr2D >::type sig2_beta_vb(sig2_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type shuffled_ind(shuffled_indSEXP);
    coreLogitInfoLoop(X, Y, gam_vb, log_Phi_mat_v_mu, log_1_min_Phi_mat_v_mu, log_sig2_inv_vb, m1_beta, mat_x_m1, mat_z_mu, mu_beta_vb, psi_vb, sig2_beta_vb, shuffled_ind);
    return R_NilValue;
END_RCPP
}
// coreProbitInfoLoop
void coreProbitInfoLoop(const MapMat X, const MapMat Wy, MapArr2D gam_vb, const MapArr2D log_Phi_mat_v_mu, const MapArr2D log_1_min_Phi_mat_v_mu, const double log_sig2_inv_vb, MapMat m1_beta, MapMat mat_x_m1, MapMat mat_z_mu, MapArr2D mu_beta_vb, const double sig2_beta_vb, const MapArr1D shuffled_ind);
RcppExport SEXP locus_coreProbitInfoLoop(SEXP XSEXP, SEXP WySEXP, SEXP gam_vbSEXP, SEXP log_Phi_mat_v_muSEXP, SEXP log_1_min_Phi_mat_v_muSEXP, SEXP log_sig2_inv_vbSEXP, SEXP m1_betaSEXP, SEXP mat_x_m1SEXP, SEXP mat_z_muSEXP, SEXP mu_beta_vbSEXP, SEXP sig2_beta_vbSEXP, SEXP shuffled_indSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapMat >::type Wy(WySEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type gam_vb(gam_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr2D >::type log_Phi_mat_v_mu(log_Phi_mat_v_muSEXP);
    Rcpp::traits::input_parameter< const MapArr2D >::type log_1_min_Phi_mat_v_mu(log_1_min_Phi_mat_v_muSEXP);
    Rcpp::traits::input_parameter< const double >::type log_sig2_inv_vb(log_sig2_inv_vbSEXP);
    Rcpp::traits::input_parameter< MapMat >::type m1_beta(m1_betaSEXP);
    Rcpp::traits::input_parameter< MapMat >::type mat_x_m1(mat_x_m1SEXP);
    Rcpp::traits::input_parameter< MapMat >::type mat_z_mu(mat_z_muSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mu_beta_vb(mu_beta_vbSEXP);
    Rcpp::traits::input_parameter< const double >::type sig2_beta_vb(sig2_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type shuffled_ind(shuffled_indSEXP);
    coreProbitInfoLoop(X, Wy, gam_vb, log_Phi_mat_v_mu, log_1_min_Phi_mat_v_mu, log_sig2_inv_vb, m1_beta, mat_x_m1, mat_z_mu, mu_beta_vb, sig2_beta_vb, shuffled_ind);
    return R_NilValue;
END_RCPP
}
// coreLoop
void coreLoop(const MapMat X, const MapMat Y, MapArr2D gam_vb, const MapArr1D log_om_vb, const MapArr1D log_1_min_om_vb, const double log_sig2_inv_vb, const MapArr1D log_tau_vb, MapMat m1_beta, MapMat mat_x_m1, MapArr2D mu_beta_vb, const MapArr1D sig2_beta_vb, const MapArr1D tau_vb, const MapArr1D shuffled_ind);
RcppExport SEXP locus_coreLoop(SEXP XSEXP, SEXP YSEXP, SEXP gam_vbSEXP, SEXP log_om_vbSEXP, SEXP log_1_min_om_vbSEXP, SEXP log_sig2_inv_vbSEXP, SEXP log_tau_vbSEXP, SEXP m1_betaSEXP, SEXP mat_x_m1SEXP, SEXP mu_beta_vbSEXP, SEXP sig2_beta_vbSEXP, SEXP tau_vbSEXP, SEXP shuffled_indSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapMat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type gam_vb(gam_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_om_vb(log_om_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_1_min_om_vb(log_1_min_om_vbSEXP);
    Rcpp::traits::input_parameter< const double >::type log_sig2_inv_vb(log_sig2_inv_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_tau_vb(log_tau_vbSEXP);
    Rcpp::traits::input_parameter< MapMat >::type m1_beta(m1_betaSEXP);
    Rcpp::traits::input_parameter< MapMat >::type mat_x_m1(mat_x_m1SEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mu_beta_vb(mu_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type sig2_beta_vb(sig2_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type tau_vb(tau_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type shuffled_ind(shuffled_indSEXP);
    coreLoop(X, Y, gam_vb, log_om_vb, log_1_min_om_vb, log_sig2_inv_vb, log_tau_vb, m1_beta, mat_x_m1, mu_beta_vb, sig2_beta_vb, tau_vb, shuffled_ind);
    return R_NilValue;
END_RCPP
}
// coreZLoop
void coreZLoop(const MapMat X, const MapMat Y, MapArr2D gam_vb, const MapArr1D log_om_vb, const MapArr1D log_1_min_om_vb, const double log_sig2_inv_vb, const MapArr1D log_tau_vb, MapMat m1_beta, MapMat mat_x_m1, MapMat mat_z_mu, MapArr2D mu_beta_vb, const MapArr1D sig2_beta_vb, const MapArr1D tau_vb, const MapArr1D shuffled_ind);
RcppExport SEXP locus_coreZLoop(SEXP XSEXP, SEXP YSEXP, SEXP gam_vbSEXP, SEXP log_om_vbSEXP, SEXP log_1_min_om_vbSEXP, SEXP log_sig2_inv_vbSEXP, SEXP log_tau_vbSEXP, SEXP m1_betaSEXP, SEXP mat_x_m1SEXP, SEXP mat_z_muSEXP, SEXP mu_beta_vbSEXP, SEXP sig2_beta_vbSEXP, SEXP tau_vbSEXP, SEXP shuffled_indSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapMat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type gam_vb(gam_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_om_vb(log_om_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_1_min_om_vb(log_1_min_om_vbSEXP);
    Rcpp::traits::input_parameter< const double >::type log_sig2_inv_vb(log_sig2_inv_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_tau_vb(log_tau_vbSEXP);
    Rcpp::traits::input_parameter< MapMat >::type m1_beta(m1_betaSEXP);
    Rcpp::traits::input_parameter< MapMat >::type mat_x_m1(mat_x_m1SEXP);
    Rcpp::traits::input_parameter< MapMat >::type mat_z_mu(mat_z_muSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mu_beta_vb(mu_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type sig2_beta_vb(sig2_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type tau_vb(tau_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type shuffled_ind(shuffled_indSEXP);
    coreZLoop(X, Y, gam_vb, log_om_vb, log_1_min_om_vb, log_sig2_inv_vb, log_tau_vb, m1_beta, mat_x_m1, mat_z_mu, mu_beta_vb, sig2_beta_vb, tau_vb, shuffled_ind);
    return R_NilValue;
END_RCPP
}
// coreLogitLoop
void coreLogitLoop(const MapMat X, const MapArr2D Y, MapArr2D gam_vb, const MapArr1D log_om_vb, const MapArr1D log_1_min_om_vb, const double log_sig2_inv_vb, MapMat m1_beta, MapArr2D mat_x_m1, MapArr2D mat_z_mu, MapArr2D mu_beta_vb, const MapArr2D psi_vb, const MapArr2D sig2_beta_vb, const MapArr1D shuffled_ind);
RcppExport SEXP locus_coreLogitLoop(SEXP XSEXP, SEXP YSEXP, SEXP gam_vbSEXP, SEXP log_om_vbSEXP, SEXP log_1_min_om_vbSEXP, SEXP log_sig2_inv_vbSEXP, SEXP m1_betaSEXP, SEXP mat_x_m1SEXP, SEXP mat_z_muSEXP, SEXP mu_beta_vbSEXP, SEXP psi_vbSEXP, SEXP sig2_beta_vbSEXP, SEXP shuffled_indSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapArr2D >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type gam_vb(gam_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_om_vb(log_om_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_1_min_om_vb(log_1_min_om_vbSEXP);
    Rcpp::traits::input_parameter< const double >::type log_sig2_inv_vb(log_sig2_inv_vbSEXP);
    Rcpp::traits::input_parameter< MapMat >::type m1_beta(m1_betaSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mat_x_m1(mat_x_m1SEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mat_z_mu(mat_z_muSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mu_beta_vb(mu_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr2D >::type psi_vb(psi_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr2D >::type sig2_beta_vb(sig2_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type shuffled_ind(shuffled_indSEXP);
    coreLogitLoop(X, Y, gam_vb, log_om_vb, log_1_min_om_vb, log_sig2_inv_vb, m1_beta, mat_x_m1, mat_z_mu, mu_beta_vb, psi_vb, sig2_beta_vb, shuffled_ind);
    return R_NilValue;
END_RCPP
}
// coreProbitLoop
void coreProbitLoop(const MapMat X, const MapMat W, MapArr2D gam_vb, const MapArr1D log_om_vb, const MapArr1D log_1_min_om_vb, const double log_sig2_inv_vb, MapMat m1_beta, MapMat mat_x_m1, MapMat mat_z_mu, MapArr2D mu_beta_vb, const double sig2_beta_vb, const MapArr1D shuffled_ind);
RcppExport SEXP locus_coreProbitLoop(SEXP XSEXP, SEXP WSEXP, SEXP gam_vbSEXP, SEXP log_om_vbSEXP, SEXP log_1_min_om_vbSEXP, SEXP log_sig2_inv_vbSEXP, SEXP m1_betaSEXP, SEXP mat_x_m1SEXP, SEXP mat_z_muSEXP, SEXP mu_beta_vbSEXP, SEXP sig2_beta_vbSEXP, SEXP shuffled_indSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapMat >::type W(WSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type gam_vb(gam_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_om_vb(log_om_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_1_min_om_vb(log_1_min_om_vbSEXP);
    Rcpp::traits::input_parameter< const double >::type log_sig2_inv_vb(log_sig2_inv_vbSEXP);
    Rcpp::traits::input_parameter< MapMat >::type m1_beta(m1_betaSEXP);
    Rcpp::traits::input_parameter< MapMat >::type mat_x_m1(mat_x_m1SEXP);
    Rcpp::traits::input_parameter< MapMat >::type mat_z_mu(mat_z_muSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mu_beta_vb(mu_beta_vbSEXP);
    Rcpp::traits::input_parameter< const double >::type sig2_beta_vb(sig2_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type shuffled_ind(shuffled_indSEXP);
    coreProbitLoop(X, W, gam_vb, log_om_vb, log_1_min_om_vb, log_sig2_inv_vb, m1_beta, mat_x_m1, mat_z_mu, mu_beta_vb, sig2_beta_vb, shuffled_ind);
    return R_NilValue;
END_RCPP
}
// coreStructLoop
void coreStructLoop(const MapMat X, const MapMat Y, MapArr2D gam_vb, const MapArr1D log_Phi_mu_theta_vb, const MapArr1D log_1_min_Phi_mu_theta_vb, const double log_sig2_inv_vb, const MapArr1D log_tau_vb, MapMat m1_beta, MapMat mat_x_m1, MapArr2D mu_beta_vb, const MapArr1D sig2_beta_vb, const MapArr1D tau_vb, const MapArr1D shuffled_ind);
RcppExport SEXP locus_coreStructLoop(SEXP XSEXP, SEXP YSEXP, SEXP gam_vbSEXP, SEXP log_Phi_mu_theta_vbSEXP, SEXP log_1_min_Phi_mu_theta_vbSEXP, SEXP log_sig2_inv_vbSEXP, SEXP log_tau_vbSEXP, SEXP m1_betaSEXP, SEXP mat_x_m1SEXP, SEXP mu_beta_vbSEXP, SEXP sig2_beta_vbSEXP, SEXP tau_vbSEXP, SEXP shuffled_indSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const MapMat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const MapMat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type gam_vb(gam_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_Phi_mu_theta_vb(log_Phi_mu_theta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_1_min_Phi_mu_theta_vb(log_1_min_Phi_mu_theta_vbSEXP);
    Rcpp::traits::input_parameter< const double >::type log_sig2_inv_vb(log_sig2_inv_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type log_tau_vb(log_tau_vbSEXP);
    Rcpp::traits::input_parameter< MapMat >::type m1_beta(m1_betaSEXP);
    Rcpp::traits::input_parameter< MapMat >::type mat_x_m1(mat_x_m1SEXP);
    Rcpp::traits::input_parameter< MapArr2D >::type mu_beta_vb(mu_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type sig2_beta_vb(sig2_beta_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type tau_vb(tau_vbSEXP);
    Rcpp::traits::input_parameter< const MapArr1D >::type shuffled_ind(shuffled_indSEXP);
    coreStructLoop(X, Y, gam_vb, log_Phi_mu_theta_vb, log_1_min_Phi_mu_theta_vb, log_sig2_inv_vb, log_tau_vb, m1_beta, mat_x_m1, mu_beta_vb, sig2_beta_vb, tau_vb, shuffled_ind);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"locus_coreBatch", (DL_FUNC) &locus_coreBatch, 12},
    {"locus_coreZBatch", (DL_FUNC) &locus_coreZBatch, 13},
    {"locus_coreProbitBatch", (DL_FUNC) &locus_coreProbitBatch, 11},
    {"locus_coreInfoLoop", (DL_FUNC) &locus_coreInfoLoop, 13},
    {"locus_coreZInfoLoop", (DL_FUNC) &locus_coreZInfoLoop, 14},
    {"locus_coreLogitInfoLoop", (DL_FUNC) &locus_coreLogitInfoLoop, 13},
    {"locus_coreProbitInfoLoop", (DL_FUNC) &locus_coreProbitInfoLoop, 12},
    {"locus_coreLoop", (DL_FUNC) &locus_coreLoop, 13},
    {"locus_coreZLoop", (DL_FUNC) &locus_coreZLoop, 14},
    {"locus_coreLogitLoop", (DL_FUNC) &locus_coreLogitLoop, 13},
    {"locus_coreProbitLoop", (DL_FUNC) &locus_coreProbitLoop, 12},
    {"locus_coreStructLoop", (DL_FUNC) &locus_coreStructLoop, 13},
    {NULL, NULL, 0}
};

RcppExport void R_init_locus(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
