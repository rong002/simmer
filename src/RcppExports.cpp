// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// Simulator__new
SEXP Simulator__new(std::string name, bool verbose);
RcppExport SEXP simmer_Simulator__new(SEXP nameSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Simulator__new(name, verbose));
    return rcpp_result_gen;
END_RCPP
}
// reset_
void reset_(SEXP sim_);
RcppExport SEXP simmer_reset_(SEXP sim_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    reset_(sim_);
    return R_NilValue;
END_RCPP
}
// now_
double now_(SEXP sim_);
RcppExport SEXP simmer_now_(SEXP sim_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    rcpp_result_gen = Rcpp::wrap(now_(sim_));
    return rcpp_result_gen;
END_RCPP
}
// peek_
List peek_(SEXP sim_, int steps);
RcppExport SEXP simmer_peek_(SEXP sim_SEXP, SEXP stepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< int >::type steps(stepsSEXP);
    rcpp_result_gen = Rcpp::wrap(peek_(sim_, steps));
    return rcpp_result_gen;
END_RCPP
}
// step_
void step_(SEXP sim_);
RcppExport SEXP simmer_step_(SEXP sim_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    step_(sim_);
    return R_NilValue;
END_RCPP
}
// run_
void run_(SEXP sim_, double until);
RcppExport SEXP simmer_run_(SEXP sim_SEXP, SEXP untilSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< double >::type until(untilSEXP);
    run_(sim_, until);
    return R_NilValue;
END_RCPP
}
// add_generator_
bool add_generator_(SEXP sim_, std::string name_prefix, SEXP first_activity_, Function dist, int mon, int priority, int preemptible, bool restart);
RcppExport SEXP simmer_add_generator_(SEXP sim_SEXP, SEXP name_prefixSEXP, SEXP first_activity_SEXP, SEXP distSEXP, SEXP monSEXP, SEXP prioritySEXP, SEXP preemptibleSEXP, SEXP restartSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< std::string >::type name_prefix(name_prefixSEXP);
    Rcpp::traits::input_parameter< SEXP >::type first_activity_(first_activity_SEXP);
    Rcpp::traits::input_parameter< Function >::type dist(distSEXP);
    Rcpp::traits::input_parameter< int >::type mon(monSEXP);
    Rcpp::traits::input_parameter< int >::type priority(prioritySEXP);
    Rcpp::traits::input_parameter< int >::type preemptible(preemptibleSEXP);
    Rcpp::traits::input_parameter< bool >::type restart(restartSEXP);
    rcpp_result_gen = Rcpp::wrap(add_generator_(sim_, name_prefix, first_activity_, dist, mon, priority, preemptible, restart));
    return rcpp_result_gen;
END_RCPP
}
// add_resource_
bool add_resource_(SEXP sim_, std::string name, int capacity, int queue_size, bool mon, bool preemptive, std::string preempt_order, bool keep_queue);
RcppExport SEXP simmer_add_resource_(SEXP sim_SEXP, SEXP nameSEXP, SEXP capacitySEXP, SEXP queue_sizeSEXP, SEXP monSEXP, SEXP preemptiveSEXP, SEXP preempt_orderSEXP, SEXP keep_queueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< int >::type capacity(capacitySEXP);
    Rcpp::traits::input_parameter< int >::type queue_size(queue_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type mon(monSEXP);
    Rcpp::traits::input_parameter< bool >::type preemptive(preemptiveSEXP);
    Rcpp::traits::input_parameter< std::string >::type preempt_order(preempt_orderSEXP);
    Rcpp::traits::input_parameter< bool >::type keep_queue(keep_queueSEXP);
    rcpp_result_gen = Rcpp::wrap(add_resource_(sim_, name, capacity, queue_size, mon, preemptive, preempt_order, keep_queue));
    return rcpp_result_gen;
END_RCPP
}
// add_resource_manager_
bool add_resource_manager_(SEXP sim_, std::string name, std::string param, std::vector<double> intervals, std::vector<int> values, int period);
RcppExport SEXP simmer_add_resource_manager_(SEXP sim_SEXP, SEXP nameSEXP, SEXP paramSEXP, SEXP intervalsSEXP, SEXP valuesSEXP, SEXP periodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< std::string >::type param(paramSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type intervals(intervalsSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< int >::type period(periodSEXP);
    rcpp_result_gen = Rcpp::wrap(add_resource_manager_(sim_, name, param, intervals, values, period));
    return rcpp_result_gen;
END_RCPP
}
// get_mon_arrivals_
List get_mon_arrivals_(SEXP sim_, bool per_resource, bool ongoing);
RcppExport SEXP simmer_get_mon_arrivals_(SEXP sim_SEXP, SEXP per_resourceSEXP, SEXP ongoingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< bool >::type per_resource(per_resourceSEXP);
    Rcpp::traits::input_parameter< bool >::type ongoing(ongoingSEXP);
    rcpp_result_gen = Rcpp::wrap(get_mon_arrivals_(sim_, per_resource, ongoing));
    return rcpp_result_gen;
END_RCPP
}
// get_mon_attributes_
List get_mon_attributes_(SEXP sim_);
RcppExport SEXP simmer_get_mon_attributes_(SEXP sim_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    rcpp_result_gen = Rcpp::wrap(get_mon_attributes_(sim_));
    return rcpp_result_gen;
END_RCPP
}
// get_mon_resource_
List get_mon_resource_(SEXP sim_);
RcppExport SEXP simmer_get_mon_resource_(SEXP sim_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    rcpp_result_gen = Rcpp::wrap(get_mon_resource_(sim_));
    return rcpp_result_gen;
END_RCPP
}
// get_mon_resource_counts_
List get_mon_resource_counts_(SEXP sim_);
RcppExport SEXP simmer_get_mon_resource_counts_(SEXP sim_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    rcpp_result_gen = Rcpp::wrap(get_mon_resource_counts_(sim_));
    return rcpp_result_gen;
END_RCPP
}
// get_mon_resource_limits_
List get_mon_resource_limits_(SEXP sim_);
RcppExport SEXP simmer_get_mon_resource_limits_(SEXP sim_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    rcpp_result_gen = Rcpp::wrap(get_mon_resource_limits_(sim_));
    return rcpp_result_gen;
END_RCPP
}
// get_n_generated_
int get_n_generated_(SEXP sim_, std::string name);
RcppExport SEXP simmer_get_n_generated_(SEXP sim_SEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(get_n_generated_(sim_, name));
    return rcpp_result_gen;
END_RCPP
}
// get_capacity_
int get_capacity_(SEXP sim_, std::string name);
RcppExport SEXP simmer_get_capacity_(SEXP sim_SEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(get_capacity_(sim_, name));
    return rcpp_result_gen;
END_RCPP
}
// get_queue_size_
int get_queue_size_(SEXP sim_, std::string name);
RcppExport SEXP simmer_get_queue_size_(SEXP sim_SEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(get_queue_size_(sim_, name));
    return rcpp_result_gen;
END_RCPP
}
// get_server_count_
int get_server_count_(SEXP sim_, std::string name);
RcppExport SEXP simmer_get_server_count_(SEXP sim_SEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(get_server_count_(sim_, name));
    return rcpp_result_gen;
END_RCPP
}
// get_queue_count_
int get_queue_count_(SEXP sim_, std::string name);
RcppExport SEXP simmer_get_queue_count_(SEXP sim_SEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type sim_(sim_SEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(get_queue_count_(sim_, name));
    return rcpp_result_gen;
END_RCPP
}
// Seize__new
SEXP Seize__new(bool verbose, std::string resource, int amount, std::vector<bool> cont, std::vector<Environment> trj, unsigned short mask);
RcppExport SEXP simmer_Seize__new(SEXP verboseSEXP, SEXP resourceSEXP, SEXP amountSEXP, SEXP contSEXP, SEXP trjSEXP, SEXP maskSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::string >::type resource(resourceSEXP);
    Rcpp::traits::input_parameter< int >::type amount(amountSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type cont(contSEXP);
    Rcpp::traits::input_parameter< std::vector<Environment> >::type trj(trjSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type mask(maskSEXP);
    rcpp_result_gen = Rcpp::wrap(Seize__new(verbose, resource, amount, cont, trj, mask));
    return rcpp_result_gen;
END_RCPP
}
// Seize__new_func
SEXP Seize__new_func(bool verbose, std::string resource, Function amount, bool provide_attrs, std::vector<bool> cont, std::vector<Environment> trj, unsigned short mask);
RcppExport SEXP simmer_Seize__new_func(SEXP verboseSEXP, SEXP resourceSEXP, SEXP amountSEXP, SEXP provide_attrsSEXP, SEXP contSEXP, SEXP trjSEXP, SEXP maskSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::string >::type resource(resourceSEXP);
    Rcpp::traits::input_parameter< Function >::type amount(amountSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type cont(contSEXP);
    Rcpp::traits::input_parameter< std::vector<Environment> >::type trj(trjSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type mask(maskSEXP);
    rcpp_result_gen = Rcpp::wrap(Seize__new_func(verbose, resource, amount, provide_attrs, cont, trj, mask));
    return rcpp_result_gen;
END_RCPP
}
// SeizeSelected__new
SEXP SeizeSelected__new(bool verbose, int id, int amount, std::vector<bool> cont, std::vector<Environment> trj, unsigned short mask);
RcppExport SEXP simmer_SeizeSelected__new(SEXP verboseSEXP, SEXP idSEXP, SEXP amountSEXP, SEXP contSEXP, SEXP trjSEXP, SEXP maskSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< int >::type amount(amountSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type cont(contSEXP);
    Rcpp::traits::input_parameter< std::vector<Environment> >::type trj(trjSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type mask(maskSEXP);
    rcpp_result_gen = Rcpp::wrap(SeizeSelected__new(verbose, id, amount, cont, trj, mask));
    return rcpp_result_gen;
END_RCPP
}
// SeizeSelected__new_func
SEXP SeizeSelected__new_func(bool verbose, int id, Function amount, bool provide_attrs, std::vector<bool> cont, std::vector<Environment> trj, unsigned short mask);
RcppExport SEXP simmer_SeizeSelected__new_func(SEXP verboseSEXP, SEXP idSEXP, SEXP amountSEXP, SEXP provide_attrsSEXP, SEXP contSEXP, SEXP trjSEXP, SEXP maskSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< Function >::type amount(amountSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type cont(contSEXP);
    Rcpp::traits::input_parameter< std::vector<Environment> >::type trj(trjSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type mask(maskSEXP);
    rcpp_result_gen = Rcpp::wrap(SeizeSelected__new_func(verbose, id, amount, provide_attrs, cont, trj, mask));
    return rcpp_result_gen;
END_RCPP
}
// Release__new
SEXP Release__new(bool verbose, std::string resource, int amount);
RcppExport SEXP simmer_Release__new(SEXP verboseSEXP, SEXP resourceSEXP, SEXP amountSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::string >::type resource(resourceSEXP);
    Rcpp::traits::input_parameter< int >::type amount(amountSEXP);
    rcpp_result_gen = Rcpp::wrap(Release__new(verbose, resource, amount));
    return rcpp_result_gen;
END_RCPP
}
// Release__new_func
SEXP Release__new_func(bool verbose, std::string resource, Function amount, bool provide_attrs);
RcppExport SEXP simmer_Release__new_func(SEXP verboseSEXP, SEXP resourceSEXP, SEXP amountSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::string >::type resource(resourceSEXP);
    Rcpp::traits::input_parameter< Function >::type amount(amountSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    rcpp_result_gen = Rcpp::wrap(Release__new_func(verbose, resource, amount, provide_attrs));
    return rcpp_result_gen;
END_RCPP
}
// ReleaseSelected__new
SEXP ReleaseSelected__new(bool verbose, int id, int amount);
RcppExport SEXP simmer_ReleaseSelected__new(SEXP verboseSEXP, SEXP idSEXP, SEXP amountSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< int >::type amount(amountSEXP);
    rcpp_result_gen = Rcpp::wrap(ReleaseSelected__new(verbose, id, amount));
    return rcpp_result_gen;
END_RCPP
}
// ReleaseSelected__new_func
SEXP ReleaseSelected__new_func(bool verbose, int id, Function amount, bool provide_attrs);
RcppExport SEXP simmer_ReleaseSelected__new_func(SEXP verboseSEXP, SEXP idSEXP, SEXP amountSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< Function >::type amount(amountSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    rcpp_result_gen = Rcpp::wrap(ReleaseSelected__new_func(verbose, id, amount, provide_attrs));
    return rcpp_result_gen;
END_RCPP
}
// SetCapacity__new
SEXP SetCapacity__new(bool verbose, std::string resource, double value);
RcppExport SEXP simmer_SetCapacity__new(SEXP verboseSEXP, SEXP resourceSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::string >::type resource(resourceSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(SetCapacity__new(verbose, resource, value));
    return rcpp_result_gen;
END_RCPP
}
// SetCapacity__new_func
SEXP SetCapacity__new_func(bool verbose, std::string resource, Function value, bool provide_attrs);
RcppExport SEXP simmer_SetCapacity__new_func(SEXP verboseSEXP, SEXP resourceSEXP, SEXP valueSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::string >::type resource(resourceSEXP);
    Rcpp::traits::input_parameter< Function >::type value(valueSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    rcpp_result_gen = Rcpp::wrap(SetCapacity__new_func(verbose, resource, value, provide_attrs));
    return rcpp_result_gen;
END_RCPP
}
// SetCapacitySelected__new
SEXP SetCapacitySelected__new(bool verbose, int id, double value);
RcppExport SEXP simmer_SetCapacitySelected__new(SEXP verboseSEXP, SEXP idSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(SetCapacitySelected__new(verbose, id, value));
    return rcpp_result_gen;
END_RCPP
}
// SetCapacitySelected__new_func
SEXP SetCapacitySelected__new_func(bool verbose, int id, Function value, bool provide_attrs);
RcppExport SEXP simmer_SetCapacitySelected__new_func(SEXP verboseSEXP, SEXP idSEXP, SEXP valueSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< Function >::type value(valueSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    rcpp_result_gen = Rcpp::wrap(SetCapacitySelected__new_func(verbose, id, value, provide_attrs));
    return rcpp_result_gen;
END_RCPP
}
// SetQueue__new
SEXP SetQueue__new(bool verbose, std::string resource, double value);
RcppExport SEXP simmer_SetQueue__new(SEXP verboseSEXP, SEXP resourceSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::string >::type resource(resourceSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(SetQueue__new(verbose, resource, value));
    return rcpp_result_gen;
END_RCPP
}
// SetQueue__new_func
SEXP SetQueue__new_func(bool verbose, std::string resource, Function value, bool provide_attrs);
RcppExport SEXP simmer_SetQueue__new_func(SEXP verboseSEXP, SEXP resourceSEXP, SEXP valueSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::string >::type resource(resourceSEXP);
    Rcpp::traits::input_parameter< Function >::type value(valueSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    rcpp_result_gen = Rcpp::wrap(SetQueue__new_func(verbose, resource, value, provide_attrs));
    return rcpp_result_gen;
END_RCPP
}
// SetQueueSelected__new
SEXP SetQueueSelected__new(bool verbose, int id, double value);
RcppExport SEXP simmer_SetQueueSelected__new(SEXP verboseSEXP, SEXP idSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(SetQueueSelected__new(verbose, id, value));
    return rcpp_result_gen;
END_RCPP
}
// SetQueueSelected__new_func
SEXP SetQueueSelected__new_func(bool verbose, int id, Function value, bool provide_attrs);
RcppExport SEXP simmer_SetQueueSelected__new_func(SEXP verboseSEXP, SEXP idSEXP, SEXP valueSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< Function >::type value(valueSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    rcpp_result_gen = Rcpp::wrap(SetQueueSelected__new_func(verbose, id, value, provide_attrs));
    return rcpp_result_gen;
END_RCPP
}
// Select__new
SEXP Select__new(bool verbose, std::vector<std::string> resources, std::string policy, int id);
RcppExport SEXP simmer_Select__new(SEXP verboseSEXP, SEXP resourcesSEXP, SEXP policySEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type resources(resourcesSEXP);
    Rcpp::traits::input_parameter< std::string >::type policy(policySEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(Select__new(verbose, resources, policy, id));
    return rcpp_result_gen;
END_RCPP
}
// Select__new_func
SEXP Select__new_func(bool verbose, Function resources, bool provide_attrs, int id);
RcppExport SEXP simmer_Select__new_func(SEXP verboseSEXP, SEXP resourcesSEXP, SEXP provide_attrsSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Function >::type resources(resourcesSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(Select__new_func(verbose, resources, provide_attrs, id));
    return rcpp_result_gen;
END_RCPP
}
// SetAttribute__new
SEXP SetAttribute__new(bool verbose, std::string key, double value);
RcppExport SEXP simmer_SetAttribute__new(SEXP verboseSEXP, SEXP keySEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::string >::type key(keySEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(SetAttribute__new(verbose, key, value));
    return rcpp_result_gen;
END_RCPP
}
// SetAttribute__new_func
SEXP SetAttribute__new_func(bool verbose, std::string key, Function value, bool provide_attrs);
RcppExport SEXP simmer_SetAttribute__new_func(SEXP verboseSEXP, SEXP keySEXP, SEXP valueSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::string >::type key(keySEXP);
    Rcpp::traits::input_parameter< Function >::type value(valueSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    rcpp_result_gen = Rcpp::wrap(SetAttribute__new_func(verbose, key, value, provide_attrs));
    return rcpp_result_gen;
END_RCPP
}
// SetPrior__new
SEXP SetPrior__new(bool verbose, std::vector<int> values);
RcppExport SEXP simmer_SetPrior__new(SEXP verboseSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type values(valuesSEXP);
    rcpp_result_gen = Rcpp::wrap(SetPrior__new(verbose, values));
    return rcpp_result_gen;
END_RCPP
}
// SetPrior__new_func
SEXP SetPrior__new_func(bool verbose, Function values, bool provide_attrs);
RcppExport SEXP simmer_SetPrior__new_func(SEXP verboseSEXP, SEXP valuesSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Function >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    rcpp_result_gen = Rcpp::wrap(SetPrior__new_func(verbose, values, provide_attrs));
    return rcpp_result_gen;
END_RCPP
}
// Timeout__new
SEXP Timeout__new(bool verbose, double delay);
RcppExport SEXP simmer_Timeout__new(SEXP verboseSEXP, SEXP delaySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< double >::type delay(delaySEXP);
    rcpp_result_gen = Rcpp::wrap(Timeout__new(verbose, delay));
    return rcpp_result_gen;
END_RCPP
}
// Timeout__new_func
SEXP Timeout__new_func(bool verbose, Function task, bool provide_attrs);
RcppExport SEXP simmer_Timeout__new_func(SEXP verboseSEXP, SEXP taskSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Function >::type task(taskSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    rcpp_result_gen = Rcpp::wrap(Timeout__new_func(verbose, task, provide_attrs));
    return rcpp_result_gen;
END_RCPP
}
// Branch__new
SEXP Branch__new(bool verbose, Function option, bool provide_attrs, std::vector<bool> cont, std::vector<Environment> trj);
RcppExport SEXP simmer_Branch__new(SEXP verboseSEXP, SEXP optionSEXP, SEXP provide_attrsSEXP, SEXP contSEXP, SEXP trjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Function >::type option(optionSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    Rcpp::traits::input_parameter< std::vector<bool> >::type cont(contSEXP);
    Rcpp::traits::input_parameter< std::vector<Environment> >::type trj(trjSEXP);
    rcpp_result_gen = Rcpp::wrap(Branch__new(verbose, option, provide_attrs, cont, trj));
    return rcpp_result_gen;
END_RCPP
}
// Rollback__new
SEXP Rollback__new(bool verbose, int amount, int times);
RcppExport SEXP simmer_Rollback__new(SEXP verboseSEXP, SEXP amountSEXP, SEXP timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type amount(amountSEXP);
    Rcpp::traits::input_parameter< int >::type times(timesSEXP);
    rcpp_result_gen = Rcpp::wrap(Rollback__new(verbose, amount, times));
    return rcpp_result_gen;
END_RCPP
}
// Rollback__new_func
SEXP Rollback__new_func(bool verbose, int amount, Function check, bool provide_attrs);
RcppExport SEXP simmer_Rollback__new_func(SEXP verboseSEXP, SEXP amountSEXP, SEXP checkSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type amount(amountSEXP);
    Rcpp::traits::input_parameter< Function >::type check(checkSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    rcpp_result_gen = Rcpp::wrap(Rollback__new_func(verbose, amount, check, provide_attrs));
    return rcpp_result_gen;
END_RCPP
}
// Leave__new
SEXP Leave__new(bool verbose, double prob);
RcppExport SEXP simmer_Leave__new(SEXP verboseSEXP, SEXP probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< double >::type prob(probSEXP);
    rcpp_result_gen = Rcpp::wrap(Leave__new(verbose, prob));
    return rcpp_result_gen;
END_RCPP
}
// Leave__new_func
SEXP Leave__new_func(bool verbose, Function prob, bool provide_attrs);
RcppExport SEXP simmer_Leave__new_func(SEXP verboseSEXP, SEXP probSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Function >::type prob(probSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    rcpp_result_gen = Rcpp::wrap(Leave__new_func(verbose, prob, provide_attrs));
    return rcpp_result_gen;
END_RCPP
}
// RenegeIn__new
SEXP RenegeIn__new(bool verbose, double t, std::vector<Environment> trj);
RcppExport SEXP simmer_RenegeIn__new(SEXP verboseSEXP, SEXP tSEXP, SEXP trjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< std::vector<Environment> >::type trj(trjSEXP);
    rcpp_result_gen = Rcpp::wrap(RenegeIn__new(verbose, t, trj));
    return rcpp_result_gen;
END_RCPP
}
// RenegeIn__new_func
SEXP RenegeIn__new_func(bool verbose, Function t, bool provide_attrs, std::vector<Environment> trj);
RcppExport SEXP simmer_RenegeIn__new_func(SEXP verboseSEXP, SEXP tSEXP, SEXP provide_attrsSEXP, SEXP trjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Function >::type t(tSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    Rcpp::traits::input_parameter< std::vector<Environment> >::type trj(trjSEXP);
    rcpp_result_gen = Rcpp::wrap(RenegeIn__new_func(verbose, t, provide_attrs, trj));
    return rcpp_result_gen;
END_RCPP
}
// RenegeAbort__new
SEXP RenegeAbort__new(bool verbose);
RcppExport SEXP simmer_RenegeAbort__new(SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(RenegeAbort__new(verbose));
    return rcpp_result_gen;
END_RCPP
}
// Clone__new
SEXP Clone__new(bool verbose, int n, std::vector<Environment> trj);
RcppExport SEXP simmer_Clone__new(SEXP verboseSEXP, SEXP nSEXP, SEXP trjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::vector<Environment> >::type trj(trjSEXP);
    rcpp_result_gen = Rcpp::wrap(Clone__new(verbose, n, trj));
    return rcpp_result_gen;
END_RCPP
}
// Clone__new_func
SEXP Clone__new_func(bool verbose, Function n, bool provide_attrs, std::vector<Environment> trj);
RcppExport SEXP simmer_Clone__new_func(SEXP verboseSEXP, SEXP nSEXP, SEXP provide_attrsSEXP, SEXP trjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< Function >::type n(nSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    Rcpp::traits::input_parameter< std::vector<Environment> >::type trj(trjSEXP);
    rcpp_result_gen = Rcpp::wrap(Clone__new_func(verbose, n, provide_attrs, trj));
    return rcpp_result_gen;
END_RCPP
}
// Synchronize__new
SEXP Synchronize__new(bool verbose, bool wait, bool terminate);
RcppExport SEXP simmer_Synchronize__new(SEXP verboseSEXP, SEXP waitSEXP, SEXP terminateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type wait(waitSEXP);
    Rcpp::traits::input_parameter< bool >::type terminate(terminateSEXP);
    rcpp_result_gen = Rcpp::wrap(Synchronize__new(verbose, wait, terminate));
    return rcpp_result_gen;
END_RCPP
}
// Batch__new
SEXP Batch__new(bool verbose, int n, double timeout, bool permanent, std::string name);
RcppExport SEXP simmer_Batch__new(SEXP verboseSEXP, SEXP nSEXP, SEXP timeoutSEXP, SEXP permanentSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type timeout(timeoutSEXP);
    Rcpp::traits::input_parameter< bool >::type permanent(permanentSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(Batch__new(verbose, n, timeout, permanent, name));
    return rcpp_result_gen;
END_RCPP
}
// Batch__new_func
SEXP Batch__new_func(bool verbose, int n, double timeout, bool permanent, std::string name, Function rule, bool provide_attrs);
RcppExport SEXP simmer_Batch__new_func(SEXP verboseSEXP, SEXP nSEXP, SEXP timeoutSEXP, SEXP permanentSEXP, SEXP nameSEXP, SEXP ruleSEXP, SEXP provide_attrsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type timeout(timeoutSEXP);
    Rcpp::traits::input_parameter< bool >::type permanent(permanentSEXP);
    Rcpp::traits::input_parameter< std::string >::type name(nameSEXP);
    Rcpp::traits::input_parameter< Function >::type rule(ruleSEXP);
    Rcpp::traits::input_parameter< bool >::type provide_attrs(provide_attrsSEXP);
    rcpp_result_gen = Rcpp::wrap(Batch__new_func(verbose, n, timeout, permanent, name, rule, provide_attrs));
    return rcpp_result_gen;
END_RCPP
}
// Separate__new
SEXP Separate__new(bool verbose);
RcppExport SEXP simmer_Separate__new(SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Separate__new(verbose));
    return rcpp_result_gen;
END_RCPP
}
// activity_get_n_
int activity_get_n_(SEXP activity_);
RcppExport SEXP simmer_activity_get_n_(SEXP activity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type activity_(activity_SEXP);
    rcpp_result_gen = Rcpp::wrap(activity_get_n_(activity_));
    return rcpp_result_gen;
END_RCPP
}
// activity_print_
void activity_print_(SEXP activity_, int indent);
RcppExport SEXP simmer_activity_print_(SEXP activity_SEXP, SEXP indentSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type activity_(activity_SEXP);
    Rcpp::traits::input_parameter< int >::type indent(indentSEXP);
    activity_print_(activity_, indent);
    return R_NilValue;
END_RCPP
}
// activity_get_next_
SEXP activity_get_next_(SEXP activity_);
RcppExport SEXP simmer_activity_get_next_(SEXP activity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type activity_(activity_SEXP);
    rcpp_result_gen = Rcpp::wrap(activity_get_next_(activity_));
    return rcpp_result_gen;
END_RCPP
}
// activity_get_prev_
SEXP activity_get_prev_(SEXP activity_);
RcppExport SEXP simmer_activity_get_prev_(SEXP activity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type activity_(activity_SEXP);
    rcpp_result_gen = Rcpp::wrap(activity_get_prev_(activity_));
    return rcpp_result_gen;
END_RCPP
}
// activity_chain_
void activity_chain_(SEXP first_, SEXP second_);
RcppExport SEXP simmer_activity_chain_(SEXP first_SEXP, SEXP second_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type first_(first_SEXP);
    Rcpp::traits::input_parameter< SEXP >::type second_(second_SEXP);
    activity_chain_(first_, second_);
    return R_NilValue;
END_RCPP
}
// activity_clone_
SEXP activity_clone_(SEXP activity_);
RcppExport SEXP simmer_activity_clone_(SEXP activity_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type activity_(activity_SEXP);
    rcpp_result_gen = Rcpp::wrap(activity_clone_(activity_));
    return rcpp_result_gen;
END_RCPP
}
