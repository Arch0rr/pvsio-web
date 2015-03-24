/* Include files */

#include "blascompat32.h"
#include "experiment1_model_new_sfun.h"
#include "c6_experiment1_model_new.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "experiment1_model_new_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c6_event_event1                (0)
#define c6_event_event2                (2)
#define c6_event_event3                (3)
#define c6_event_pstim                 (4)
#define c6_event_endpstim              (5)
#define CALL_EVENT                     (-1)
#define c6_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c6_IN_resting                  ((uint8_T)2U)
#define c6_IN_stimulated               ((uint8_T)3U)
#define c6_IN_plateau                  ((uint8_T)1U)
#define c6_IN_upstroke                 ((uint8_T)4U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance);
static void initialize_params_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance);
static void enable_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance);
static void disable_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance);
static void c6_update_debugger_state_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance);
static void set_sim_state_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance, const mxArray *c6_st);
static void c6_set_sim_state_side_effects_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance);
static void finalize_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance);
static void sf_c6_experiment1_model_new(SFc6_experiment1_model_newInstanceStruct
  *chartInstance);
static void c6_chartstep_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance);
static void initSimStructsc6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber);
static const mxArray *c6_sf_marshallOut(void *chartInstanceVoid, void *c6_inData);
static int8_T c6_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_b_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static uint32_T c6_b_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_b_resetEventCounter, const char_T
  *c6_identifier);
static uint32_T c6_c_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_c_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static int32_T c6_d_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_d_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static uint8_T c6_e_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_b_tp_resting, const char_T *c6_identifier);
static uint8_T c6_f_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static const mxArray *c6_e_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData);
static real_T c6_g_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_q, const char_T *c6_identifier);
static real_T c6_h_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static void c6_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData);
static boolean_T c6_i_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct *
  chartInstance, const mxArray *c6_reset, const char_T *c6_identifier);
static boolean_T c6_j_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct *
  chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId);
static const mxArray *c6_k_emlrt_marshallIn
  (SFc6_experiment1_model_newInstanceStruct *chartInstance, const mxArray
   *c6_b_setSimStateSideEffectsInfo, const char_T *c6_identifier);
static const mxArray *c6_l_emlrt_marshallIn
  (SFc6_experiment1_model_newInstanceStruct *chartInstance, const mxArray *c6_u,
   const emlrtMsgIdentifier *c6_parentId);
static void init_dsm_address_info(SFc6_experiment1_model_newInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance)
{
  real_T *c6_q;
  real_T *c6_vreset;
  real_T *c6_vno;
  boolean_T *c6_reset;
  c6_reset = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c6_vno = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c6_vreset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c6_q = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c6_doSetSimStateSideEffects = 0U;
  chartInstance->c6_setSimStateSideEffectsInfo = NULL;
  chartInstance->c6_tp_plateau = 0U;
  chartInstance->c6_tp_resting = 0U;
  chartInstance->c6_tp_stimulated = 0U;
  chartInstance->c6_tp_upstroke = 0U;
  chartInstance->c6_is_active_c6_experiment1_model_new = 0U;
  chartInstance->c6_is_c6_experiment1_model_new = 0U;
  chartInstance->c6_vn = 0.0;
  if (!(cdrGetOutputPortReusable(chartInstance->S, 1) != 0)) {
    *c6_q = 1.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 2) != 0)) {
    *c6_vreset = 0.0;
  }

  if (!(cdrGetOutputPortReusable(chartInstance->S, 3) != 0)) {
    *c6_vno = 0.0;
  }

  chartInstance->c6_resetEventCounter = 0U;
  *c6_reset = FALSE;
}

static void initialize_params_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance)
{
}

static void enable_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c6_update_debugger_state_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance)
{
  uint32_T c6_prevAniVal;
  c6_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if (chartInstance->c6_is_active_c6_experiment1_model_new == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_c6_experiment1_model_new == c6_IN_resting) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_c6_experiment1_model_new == c6_IN_stimulated) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_c6_experiment1_model_new == c6_IN_plateau) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
  }

  if (chartInstance->c6_is_c6_experiment1_model_new == c6_IN_upstroke) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
  }

  sf_debug_set_animation(c6_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance)
{
  const mxArray *c6_st;
  const mxArray *c6_y = NULL;
  real_T c6_hoistedGlobal;
  real_T c6_u;
  const mxArray *c6_b_y = NULL;
  real_T c6_b_hoistedGlobal;
  real_T c6_b_u;
  const mxArray *c6_c_y = NULL;
  real_T c6_c_hoistedGlobal;
  real_T c6_c_u;
  const mxArray *c6_d_y = NULL;
  real_T c6_d_hoistedGlobal;
  real_T c6_d_u;
  const mxArray *c6_e_y = NULL;
  boolean_T c6_e_hoistedGlobal;
  boolean_T c6_e_u;
  const mxArray *c6_f_y = NULL;
  uint32_T c6_f_hoistedGlobal;
  uint32_T c6_f_u;
  const mxArray *c6_g_y = NULL;
  uint8_T c6_g_hoistedGlobal;
  uint8_T c6_g_u;
  const mxArray *c6_h_y = NULL;
  uint8_T c6_h_hoistedGlobal;
  uint8_T c6_h_u;
  const mxArray *c6_i_y = NULL;
  real_T *c6_q;
  real_T *c6_vno;
  real_T *c6_vreset;
  boolean_T *c6_reset;
  c6_reset = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c6_vno = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c6_vreset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c6_q = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c6_st = NULL;
  c6_st = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_createcellarray(8), FALSE);
  c6_hoistedGlobal = *c6_q;
  c6_u = c6_hoistedGlobal;
  c6_b_y = NULL;
  sf_mex_assign(&c6_b_y, sf_mex_create("y", &c6_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c6_y, 0, c6_b_y);
  c6_b_hoistedGlobal = *c6_vno;
  c6_b_u = c6_b_hoistedGlobal;
  c6_c_y = NULL;
  sf_mex_assign(&c6_c_y, sf_mex_create("y", &c6_b_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c6_y, 1, c6_c_y);
  c6_c_hoistedGlobal = *c6_vreset;
  c6_c_u = c6_c_hoistedGlobal;
  c6_d_y = NULL;
  sf_mex_assign(&c6_d_y, sf_mex_create("y", &c6_c_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c6_y, 2, c6_d_y);
  c6_d_hoistedGlobal = chartInstance->c6_vn;
  c6_d_u = c6_d_hoistedGlobal;
  c6_e_y = NULL;
  sf_mex_assign(&c6_e_y, sf_mex_create("y", &c6_d_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c6_y, 3, c6_e_y);
  c6_e_hoistedGlobal = *c6_reset;
  c6_e_u = c6_e_hoistedGlobal;
  c6_f_y = NULL;
  sf_mex_assign(&c6_f_y, sf_mex_create("y", &c6_e_u, 11, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c6_y, 4, c6_f_y);
  c6_f_hoistedGlobal = chartInstance->c6_resetEventCounter;
  c6_f_u = c6_f_hoistedGlobal;
  c6_g_y = NULL;
  sf_mex_assign(&c6_g_y, sf_mex_create("y", &c6_f_u, 7, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c6_y, 5, c6_g_y);
  c6_g_hoistedGlobal = chartInstance->c6_is_active_c6_experiment1_model_new;
  c6_g_u = c6_g_hoistedGlobal;
  c6_h_y = NULL;
  sf_mex_assign(&c6_h_y, sf_mex_create("y", &c6_g_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c6_y, 6, c6_h_y);
  c6_h_hoistedGlobal = chartInstance->c6_is_c6_experiment1_model_new;
  c6_h_u = c6_h_hoistedGlobal;
  c6_i_y = NULL;
  sf_mex_assign(&c6_i_y, sf_mex_create("y", &c6_h_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c6_y, 7, c6_i_y);
  sf_mex_assign(&c6_st, c6_y, FALSE);
  return c6_st;
}

static void set_sim_state_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance, const mxArray *c6_st)
{
  const mxArray *c6_u;
  real_T *c6_q;
  real_T *c6_vno;
  real_T *c6_vreset;
  boolean_T *c6_reset;
  c6_reset = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c6_vno = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c6_vreset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c6_q = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c6_u = sf_mex_dup(c6_st);
  *c6_q = c6_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 0)),
    "q");
  *c6_vno = c6_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c6_u,
    1)), "vno");
  *c6_vreset = c6_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c6_u, 2)), "vreset");
  chartInstance->c6_vn = c6_g_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c6_u, 3)), "vn");
  *c6_reset = c6_i_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c6_u, 4)), "reset");
  chartInstance->c6_resetEventCounter = c6_b_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c6_u, 5)), "resetEventCounter");
  chartInstance->c6_is_active_c6_experiment1_model_new = c6_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 6)),
     "is_active_c6_experiment1_model_new");
  chartInstance->c6_is_c6_experiment1_model_new = c6_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c6_u, 7)),
     "is_c6_experiment1_model_new");
  sf_mex_assign(&chartInstance->c6_setSimStateSideEffectsInfo,
                c6_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c6_u, 8)), "setSimStateSideEffectsInfo"), TRUE);
  sf_mex_destroy(&c6_u);
  chartInstance->c6_doSetSimStateSideEffects = 1U;
  c6_update_debugger_state_c6_experiment1_model_new(chartInstance);
  sf_mex_destroy(&c6_st);
}

static void c6_set_sim_state_side_effects_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance)
{
  if (chartInstance->c6_doSetSimStateSideEffects != 0) {
    if (chartInstance->c6_is_c6_experiment1_model_new == c6_IN_plateau) {
      chartInstance->c6_tp_plateau = 1U;
    } else {
      chartInstance->c6_tp_plateau = 0U;
    }

    if (chartInstance->c6_is_c6_experiment1_model_new == c6_IN_resting) {
      chartInstance->c6_tp_resting = 1U;
    } else {
      chartInstance->c6_tp_resting = 0U;
    }

    if (chartInstance->c6_is_c6_experiment1_model_new == c6_IN_stimulated) {
      chartInstance->c6_tp_stimulated = 1U;
    } else {
      chartInstance->c6_tp_stimulated = 0U;
    }

    if (chartInstance->c6_is_c6_experiment1_model_new == c6_IN_upstroke) {
      chartInstance->c6_tp_upstroke = 1U;
    } else {
      chartInstance->c6_tp_upstroke = 0U;
    }

    chartInstance->c6_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c6_setSimStateSideEffectsInfo);
}

static void sf_c6_experiment1_model_new(SFc6_experiment1_model_newInstanceStruct
  *chartInstance)
{
  int32_T c6_inputEventFiredFlag;
  real_T *c6_q;
  real_T *c6_vreset;
  real_T *c6_v;
  real_T *c6_vno;
  int8_T *c6_event1;
  int8_T *c6_event2;
  int8_T *c6_event3;
  int8_T *c6_pstim;
  int8_T *c6_endpstim;
  boolean_T *c6_reset;
  c6_reset = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 4);
  c6_endpstim = (int8_T *)*(ssGetInputPortSignalPtrs(chartInstance->S, 1) + 4);
  c6_pstim = (int8_T *)*(ssGetInputPortSignalPtrs(chartInstance->S, 1) + 3);
  c6_event3 = (int8_T *)*(ssGetInputPortSignalPtrs(chartInstance->S, 1) + 2);
  c6_event2 = (int8_T *)*(ssGetInputPortSignalPtrs(chartInstance->S, 1) + 1);
  c6_event1 = (int8_T *)*(ssGetInputPortSignalPtrs(chartInstance->S, 1) + 0);
  c6_vno = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c6_v = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c6_vreset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c6_q = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c6_set_sim_state_side_effects_c6_experiment1_model_new(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 3U, chartInstance->c6_sfEvent);
  _SFD_DATA_RANGE_CHECK_MIN_MAX(*c6_q, 0U, 1.0, 4.0);
  _SFD_DATA_RANGE_CHECK(*c6_vreset, 1U);
  _SFD_DATA_RANGE_CHECK(*c6_v, 2U);
  _SFD_DATA_RANGE_CHECK(chartInstance->c6_vn, 3U);
  _SFD_DATA_RANGE_CHECK(*c6_vno, 4U);
  c6_inputEventFiredFlag = 0;
  if (*c6_event1 != 0) {
    c6_inputEventFiredFlag = 1;
    chartInstance->c6_sfEvent = c6_event_event1;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG, c6_event_event1,
                 chartInstance->c6_sfEvent);
    c6_chartstep_c6_experiment1_model_new(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG, c6_event_event1,
                 chartInstance->c6_sfEvent);
  }

  if (*c6_event2 != 0) {
    c6_inputEventFiredFlag = 1;
    chartInstance->c6_sfEvent = c6_event_event2;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG, c6_event_event2,
                 chartInstance->c6_sfEvent);
    c6_chartstep_c6_experiment1_model_new(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG, c6_event_event2,
                 chartInstance->c6_sfEvent);
  }

  if (*c6_event3 != 0) {
    c6_inputEventFiredFlag = 1;
    chartInstance->c6_sfEvent = c6_event_event3;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG, c6_event_event3,
                 chartInstance->c6_sfEvent);
    c6_chartstep_c6_experiment1_model_new(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG, c6_event_event3,
                 chartInstance->c6_sfEvent);
  }

  if (*c6_pstim == 1) {
    c6_inputEventFiredFlag = 1;
    chartInstance->c6_sfEvent = c6_event_pstim;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG, c6_event_pstim,
                 chartInstance->c6_sfEvent);
    c6_chartstep_c6_experiment1_model_new(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG, c6_event_pstim,
                 chartInstance->c6_sfEvent);
  }

  if (*c6_endpstim == -1) {
    c6_inputEventFiredFlag = 1;
    chartInstance->c6_sfEvent = c6_event_endpstim;
    _SFD_CE_CALL(EVENT_BEFORE_BROADCAST_TAG, c6_event_endpstim,
                 chartInstance->c6_sfEvent);
    c6_chartstep_c6_experiment1_model_new(chartInstance);
    _SFD_CE_CALL(EVENT_AFTER_BROADCAST_TAG, c6_event_endpstim,
                 chartInstance->c6_sfEvent);
  }

  if (c6_inputEventFiredFlag != 0) {
    if (chartInstance->c6_resetEventCounter > 0U) {
      *c6_reset = !*c6_reset;
      chartInstance->c6_resetEventCounter--;
    }
  }

  sf_debug_check_for_state_inconsistency(_experiment1_model_newMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void c6_chartstep_c6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance)
{
  boolean_T c6_out;
  boolean_T c6_b_out;
  boolean_T c6_c_out;
  boolean_T c6_d_out;
  boolean_T c6_e_out;
  boolean_T c6_f_out;
  boolean_T c6_g_out;
  boolean_T c6_h_out;
  real_T *c6_v;
  real_T *c6_vreset;
  real_T *c6_q;
  real_T *c6_vno;
  c6_vno = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c6_v = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c6_vreset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c6_q = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 3U, chartInstance->c6_sfEvent);
  if (chartInstance->c6_is_active_c6_experiment1_model_new == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 3U, chartInstance->c6_sfEvent);
    chartInstance->c6_is_active_c6_experiment1_model_new = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c6_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U, chartInstance->c6_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
    chartInstance->c6_is_c6_experiment1_model_new = c6_IN_resting;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
    chartInstance->c6_tp_resting = 1U;
    *c6_q = 1.0;
    _SFD_DATA_RANGE_CHECK_MIN_MAX(*c6_q, 0U, 1.0, 4.0);
  } else {
    switch (chartInstance->c6_is_c6_experiment1_model_new) {
     case c6_IN_plateau:
      CV_CHART_EVAL(3, 0, 1);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U,
                   chartInstance->c6_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                   chartInstance->c6_sfEvent);
      c6_out = (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0,
                  chartInstance->c6_sfEvent == c6_event_event1 != 0U,
                  chartInstance->c6_sfEvent)) != 0);
      if (c6_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_plateau = 0U;
        chartInstance->c6_is_c6_experiment1_model_new = c6_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
        *c6_vreset = *c6_v;
        _SFD_DATA_RANGE_CHECK(*c6_vreset, 1U);
        chartInstance->c6_resetEventCounter++;
        chartInstance->c6_is_c6_experiment1_model_new = c6_IN_resting;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_resting = 1U;
        *c6_q = 1.0;
        _SFD_DATA_RANGE_CHECK_MIN_MAX(*c6_q, 0U, 1.0, 4.0);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c6_sfEvent);
      break;

     case c6_IN_resting:
      CV_CHART_EVAL(3, 0, 2);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 1U,
                   chartInstance->c6_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 4U,
                   chartInstance->c6_sfEvent);
      c6_b_out = (CV_TRANSITION_EVAL(4U, (int32_T)_SFD_CCP_CALL(4U, 0,
        chartInstance->c6_sfEvent == c6_event_pstim != 0U,
        chartInstance->c6_sfEvent)) != 0);
      if (c6_b_out) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 4;
          sf_debug_transition_conflict_check_begin();
          c6_c_out = (chartInstance->c6_sfEvent == c6_event_event2);
          if (c6_c_out) {
            transitionList[numTransitions] = 6;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 4U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_resting = 0U;
        chartInstance->c6_is_c6_experiment1_model_new = c6_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
        *c6_vreset = *c6_v;
        _SFD_DATA_RANGE_CHECK(*c6_vreset, 1U);
        chartInstance->c6_vn = *c6_v;
        _SFD_DATA_RANGE_CHECK(chartInstance->c6_vn, 3U);
        chartInstance->c6_resetEventCounter++;
        chartInstance->c6_is_c6_experiment1_model_new = c6_IN_stimulated;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_stimulated = 1U;
        *c6_q = 2.0;
        _SFD_DATA_RANGE_CHECK_MIN_MAX(*c6_q, 0U, 1.0, 4.0);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 6U,
                     chartInstance->c6_sfEvent);
        c6_d_out = (CV_TRANSITION_EVAL(6U, (int32_T)_SFD_CCP_CALL(6U, 0,
          chartInstance->c6_sfEvent == c6_event_event2 != 0U,
          chartInstance->c6_sfEvent)) != 0);
        if (c6_d_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 6U, chartInstance->c6_sfEvent);
          chartInstance->c6_tp_resting = 0U;
          chartInstance->c6_is_c6_experiment1_model_new = c6_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
          *c6_vreset = *c6_v;
          _SFD_DATA_RANGE_CHECK(*c6_vreset, 1U);
          chartInstance->c6_resetEventCounter++;
          chartInstance->c6_is_c6_experiment1_model_new = c6_IN_upstroke;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
          chartInstance->c6_tp_upstroke = 1U;
          *c6_q = 3.0;
          _SFD_DATA_RANGE_CHECK_MIN_MAX(*c6_q, 0U, 1.0, 4.0);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 1U, chartInstance->c6_sfEvent);
      break;

     case c6_IN_stimulated:
      CV_CHART_EVAL(3, 0, 3);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 2U,
                   chartInstance->c6_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                   chartInstance->c6_sfEvent);
      c6_e_out = (CV_TRANSITION_EVAL(0U, (int32_T)_SFD_CCP_CALL(0U, 0,
        chartInstance->c6_sfEvent == c6_event_event2 != 0U,
        chartInstance->c6_sfEvent)) != 0);
      if (c6_e_out) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 0;
          sf_debug_transition_conflict_check_begin();
          c6_f_out = (chartInstance->c6_sfEvent == c6_event_endpstim);
          if (c6_f_out) {
            transitionList[numTransitions] = 5;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_stimulated = 0U;
        chartInstance->c6_is_c6_experiment1_model_new = c6_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
        *c6_vreset = *c6_v;
        _SFD_DATA_RANGE_CHECK(*c6_vreset, 1U);
        chartInstance->c6_resetEventCounter++;
        chartInstance->c6_is_c6_experiment1_model_new = c6_IN_upstroke;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_upstroke = 1U;
        *c6_q = 3.0;
        _SFD_DATA_RANGE_CHECK_MIN_MAX(*c6_q, 0U, 1.0, 4.0);
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 5U,
                     chartInstance->c6_sfEvent);
        c6_g_out = (CV_TRANSITION_EVAL(5U, (int32_T)_SFD_CCP_CALL(5U, 0,
          chartInstance->c6_sfEvent == c6_event_endpstim != 0U,
          chartInstance->c6_sfEvent)) != 0);
        if (c6_g_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 5U, chartInstance->c6_sfEvent);
          chartInstance->c6_tp_stimulated = 0U;
          chartInstance->c6_is_c6_experiment1_model_new = c6_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
          *c6_vreset = *c6_v;
          _SFD_DATA_RANGE_CHECK(*c6_vreset, 1U);
          chartInstance->c6_resetEventCounter++;
          chartInstance->c6_is_c6_experiment1_model_new = c6_IN_resting;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 1U, chartInstance->c6_sfEvent);
          chartInstance->c6_tp_resting = 1U;
          *c6_q = 1.0;
          _SFD_DATA_RANGE_CHECK_MIN_MAX(*c6_q, 0U, 1.0, 4.0);
        }
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 2U, chartInstance->c6_sfEvent);
      break;

     case c6_IN_upstroke:
      CV_CHART_EVAL(3, 0, 4);
      _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 3U,
                   chartInstance->c6_sfEvent);
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c6_sfEvent);
      c6_h_out = (CV_TRANSITION_EVAL(2U, (int32_T)_SFD_CCP_CALL(2U, 0,
        chartInstance->c6_sfEvent == c6_event_event3 != 0U,
        chartInstance->c6_sfEvent)) != 0);
      if (c6_h_out) {
        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_upstroke = 0U;
        chartInstance->c6_is_c6_experiment1_model_new = c6_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 3U, chartInstance->c6_sfEvent);
        *c6_vreset = *c6_v;
        _SFD_DATA_RANGE_CHECK(*c6_vreset, 1U);
        chartInstance->c6_resetEventCounter++;
        chartInstance->c6_is_c6_experiment1_model_new = c6_IN_plateau;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
        chartInstance->c6_tp_plateau = 1U;
        *c6_q = 4.0;
        _SFD_DATA_RANGE_CHECK_MIN_MAX(*c6_q, 0U, 1.0, 4.0);
        *c6_vno = chartInstance->c6_vn;
        _SFD_DATA_RANGE_CHECK(*c6_vno, 4U);
      }

      _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c6_sfEvent);
      break;

     default:
      CV_CHART_EVAL(3, 0, 0);
      chartInstance->c6_is_c6_experiment1_model_new = c6_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c6_sfEvent);
      break;
    }
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 3U, chartInstance->c6_sfEvent);
}

static void initSimStructsc6_experiment1_model_new
  (SFc6_experiment1_model_newInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c6_machineNumber, uint32_T
  c6_chartNumber)
{
}

const mxArray *sf_c6_experiment1_model_new_get_eml_resolved_functions_info(void)
{
  const mxArray *c6_nameCaptureInfo = NULL;
  c6_nameCaptureInfo = NULL;
  sf_mex_assign(&c6_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), FALSE);
  return c6_nameCaptureInfo;
}

static const mxArray *c6_sf_marshallOut(void *chartInstanceVoid, void *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  int8_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc6_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(int8_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 2, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, FALSE);
  return c6_mxArrayOutData;
}

static int8_T c6_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  int8_T c6_y;
  int8_T c6_i0;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_i0, 1, 2, 0U, 0, 0U, 0);
  c6_y = c6_i0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_event1;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  int8_T c6_y;
  SFc6_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc6_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c6_event1 = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_event1), &c6_thisId);
  sf_mex_destroy(&c6_event1);
  *(int8_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_b_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  uint32_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc6_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(uint32_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 7, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, FALSE);
  return c6_mxArrayOutData;
}

static uint32_T c6_b_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_b_resetEventCounter, const char_T
  *c6_identifier)
{
  uint32_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_resetEventCounter),
    &c6_thisId);
  sf_mex_destroy(&c6_b_resetEventCounter);
  return c6_y;
}

static uint32_T c6_c_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint32_T c6_y;
  uint32_T c6_u0;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_u0, 1, 7, 0U, 0, 0U, 0);
  c6_y = c6_u0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_resetEventCounter;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  uint32_T c6_y;
  SFc6_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc6_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c6_b_resetEventCounter = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_resetEventCounter),
    &c6_thisId);
  sf_mex_destroy(&c6_b_resetEventCounter);
  *(uint32_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_c_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  int32_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc6_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(int32_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, FALSE);
  return c6_mxArrayOutData;
}

static int32_T c6_d_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  int32_T c6_y;
  int32_T c6_i1;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_i1, 1, 6, 0U, 0, 0U, 0);
  c6_y = c6_i1;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_sfEvent;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  int32_T c6_y;
  SFc6_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc6_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c6_b_sfEvent = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_sfEvent),
    &c6_thisId);
  sf_mex_destroy(&c6_b_sfEvent);
  *(int32_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_d_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  uint8_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc6_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(uint8_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, FALSE);
  return c6_mxArrayOutData;
}

static uint8_T c6_e_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_b_tp_resting, const char_T *c6_identifier)
{
  uint8_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_tp_resting),
    &c6_thisId);
  sf_mex_destroy(&c6_b_tp_resting);
  return c6_y;
}

static uint8_T c6_f_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  uint8_T c6_y;
  uint8_T c6_u1;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_u1, 1, 3, 0U, 0, 0U, 0);
  c6_y = c6_u1;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_d_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_b_tp_resting;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  uint8_T c6_y;
  SFc6_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc6_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c6_b_tp_resting = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_b_tp_resting),
    &c6_thisId);
  sf_mex_destroy(&c6_b_tp_resting);
  *(uint8_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static const mxArray *c6_e_sf_marshallOut(void *chartInstanceVoid, void
  *c6_inData)
{
  const mxArray *c6_mxArrayOutData = NULL;
  real_T c6_u;
  const mxArray *c6_y = NULL;
  SFc6_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc6_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c6_mxArrayOutData = NULL;
  c6_u = *(real_T *)c6_inData;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_create("y", &c6_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c6_mxArrayOutData, c6_y, FALSE);
  return c6_mxArrayOutData;
}

static real_T c6_g_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_q, const char_T *c6_identifier)
{
  real_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_q), &c6_thisId);
  sf_mex_destroy(&c6_q);
  return c6_y;
}

static real_T c6_h_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  real_T c6_y;
  real_T c6_d0;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_d0, 1, 0, 0U, 0, 0U, 0);
  c6_y = c6_d0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void c6_e_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c6_mxArrayInData, const char_T *c6_varName, void *c6_outData)
{
  const mxArray *c6_q;
  const char_T *c6_identifier;
  emlrtMsgIdentifier c6_thisId;
  real_T c6_y;
  SFc6_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc6_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c6_q = sf_mex_dup(c6_mxArrayInData);
  c6_identifier = c6_varName;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_q), &c6_thisId);
  sf_mex_destroy(&c6_q);
  *(real_T *)c6_outData = c6_y;
  sf_mex_destroy(&c6_mxArrayInData);
}

static boolean_T c6_i_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct *
  chartInstance, const mxArray *c6_reset, const char_T *c6_identifier)
{
  boolean_T c6_y;
  emlrtMsgIdentifier c6_thisId;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  c6_y = c6_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c6_reset), &c6_thisId);
  sf_mex_destroy(&c6_reset);
  return c6_y;
}

static boolean_T c6_j_emlrt_marshallIn(SFc6_experiment1_model_newInstanceStruct *
  chartInstance, const mxArray *c6_u, const emlrtMsgIdentifier *c6_parentId)
{
  boolean_T c6_y;
  boolean_T c6_b0;
  sf_mex_import(c6_parentId, sf_mex_dup(c6_u), &c6_b0, 1, 11, 0U, 0, 0U, 0);
  c6_y = c6_b0;
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static const mxArray *c6_k_emlrt_marshallIn
  (SFc6_experiment1_model_newInstanceStruct *chartInstance, const mxArray
   *c6_b_setSimStateSideEffectsInfo, const char_T *c6_identifier)
{
  const mxArray *c6_y = NULL;
  emlrtMsgIdentifier c6_thisId;
  c6_y = NULL;
  c6_thisId.fIdentifier = c6_identifier;
  c6_thisId.fParent = NULL;
  sf_mex_assign(&c6_y, c6_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c6_b_setSimStateSideEffectsInfo), &c6_thisId), FALSE);
  sf_mex_destroy(&c6_b_setSimStateSideEffectsInfo);
  return c6_y;
}

static const mxArray *c6_l_emlrt_marshallIn
  (SFc6_experiment1_model_newInstanceStruct *chartInstance, const mxArray *c6_u,
   const emlrtMsgIdentifier *c6_parentId)
{
  const mxArray *c6_y = NULL;
  c6_y = NULL;
  sf_mex_assign(&c6_y, sf_mex_duplicatearraysafe(&c6_u), FALSE);
  sf_mex_destroy(&c6_u);
  return c6_y;
}

static void init_dsm_address_info(SFc6_experiment1_model_newInstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c6_experiment1_model_new_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3302892405U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(558966526U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2786346244U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1849611249U);
}

mxArray *sf_c6_experiment1_model_new_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("CXxzStyR2vNHDGvRqLjuwG");
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,
                mxREAL));
  }

  {
    const char *dataFields[] = { "size", "type", "complexity" };

    mxArray *mxData = mxCreateStructMatrix(1,3,3,dataFields);

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }

    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }

    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));

    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,2,"size",mxSize);
    }

    {
      const char *typeFields[] = { "base", "fixpt" };

      mxArray *mxType = mxCreateStructMatrix(1,1,2,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,2,"type",mxType);
    }

    mxSetField(mxData,2,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c6_experiment1_model_new(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x8'type','srcId','name','auxInfo'{{M[1],M[3],T\"q\",},{M[1],M[41],T\"vno\",},{M[1],M[21],T\"vreset\",},{M[3],M[39],T\"vn\",},{M[6],M[20],T\"reset\",},{M[7],M[20],T\"resetEventCounter\",},{M[8],M[0],T\"is_active_c6_experiment1_model_new\",},{M[9],M[0],T\"is_c6_experiment1_model_new\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 8, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c6_experiment1_model_new_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc6_experiment1_model_newInstanceStruct *chartInstance;
    chartInstance = (SFc6_experiment1_model_newInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_experiment1_model_newMachineNumber_,
           6,
           4,
           7,
           5,
           6,
           0,
           0,
           0,
           0,
           &(chartInstance->chartNumber),
           &(chartInstance->instanceNumber),
           ssGetPath(S),
           (void *)S);
        if (chartAlreadyPresent==0) {
          /* this is the first instance */
          init_script_number_translation(_experiment1_model_newMachineNumber_,
            chartInstance->chartNumber);
          sf_debug_set_chart_disable_implicit_casting
            (_experiment1_model_newMachineNumber_,chartInstance->chartNumber,1);
          sf_debug_set_chart_event_thresholds
            (_experiment1_model_newMachineNumber_,
             chartInstance->chartNumber,
             6,
             6,
             6);
          _SFD_SET_DATA_PROPS(0,2,0,1,"q");
          _SFD_SET_DATA_PROPS(1,2,0,1,"vreset");
          _SFD_SET_DATA_PROPS(2,1,1,0,"v");
          _SFD_SET_DATA_PROPS(3,0,0,0,"vn");
          _SFD_SET_DATA_PROPS(4,2,0,1,"vno");
          _SFD_EVENT_SCOPE(0,1);
          _SFD_EVENT_SCOPE(1,2);
          _SFD_EVENT_SCOPE(2,1);
          _SFD_EVENT_SCOPE(3,1);
          _SFD_EVENT_SCOPE(4,1);
          _SFD_EVENT_SCOPE(5,1);
          _SFD_STATE_INFO(0,0,0);
          _SFD_STATE_INFO(1,0,0);
          _SFD_STATE_INFO(2,0,0);
          _SFD_STATE_INFO(3,0,0);
          _SFD_CH_SUBSTATE_COUNT(4);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_CH_SUBSTATE_INDEX(1,1);
          _SFD_CH_SUBSTATE_INDEX(2,2);
          _SFD_CH_SUBSTATE_INDEX(3,3);
          _SFD_ST_SUBSTATE_COUNT(0,0);
          _SFD_ST_SUBSTATE_COUNT(1,0);
          _SFD_ST_SUBSTATE_COUNT(2,0);
          _SFD_ST_SUBSTATE_COUNT(3,0);
        }

        _SFD_CV_INIT_CHART(4,1,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(1,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(2,0,0,0,0,0,NULL,NULL);
        }

        {
          _SFD_CV_INIT_STATE(3,0,0,0,0,0,NULL,NULL);
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 8 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(5,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_CV_INIT_TRANS(3,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 5 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(4,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 6 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(6,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 6 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(0,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 6 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 6 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(2,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_TRANS_COV_WTS(5,0,1,0,2);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 8 };

          _SFD_TRANS_COV_MAPS(5,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              2,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(4,0,1,0,3);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 5 };

          _SFD_TRANS_COV_MAPS(4,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              3,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(6,0,1,0,2);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 6 };

          _SFD_TRANS_COV_MAPS(6,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              2,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(0,0,1,0,2);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 6 };

          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              2,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,1,0,2);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 6 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              2,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,1,0,2);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 0 };

          static unsigned int sEndGuardMap[] = { 6 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              2,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_e_sf_marshallOut,(MexInFcnForType)c6_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_e_sf_marshallOut,(MexInFcnForType)c6_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(2,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_e_sf_marshallOut,(MexInFcnForType)NULL);
        _SFD_SET_DATA_COMPILED_PROPS(3,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_e_sf_marshallOut,(MexInFcnForType)c6_e_sf_marshallIn);
        _SFD_SET_DATA_COMPILED_PROPS(4,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c6_e_sf_marshallOut,(MexInFcnForType)c6_e_sf_marshallIn);

        {
          real_T *c6_q;
          real_T *c6_vreset;
          real_T *c6_v;
          real_T *c6_vno;
          c6_vno = (real_T *)ssGetOutputPortSignal(chartInstance->S, 3);
          c6_v = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          c6_vreset = (real_T *)ssGetOutputPortSignal(chartInstance->S, 2);
          c6_q = (real_T *)ssGetOutputPortSignal(chartInstance->S, 1);
          _SFD_SET_DATA_VALUE_PTR(0U, c6_q);
          _SFD_SET_DATA_VALUE_PTR(1U, c6_vreset);
          _SFD_SET_DATA_VALUE_PTR(2U, c6_v);
          _SFD_SET_DATA_VALUE_PTR(3U, &chartInstance->c6_vn);
          _SFD_SET_DATA_VALUE_PTR(4U, c6_vno);
        }
      }
    } else {
      sf_debug_reset_current_state_configuration
        (_experiment1_model_newMachineNumber_,chartInstance->chartNumber,
         chartInstance->instanceNumber);
    }
  }
}

static const char* sf_get_instance_specialization()
{
  return "VLGMxtOF1PxqZXftUpTlcH";
}

static void sf_opaque_initialize_c6_experiment1_model_new(void *chartInstanceVar)
{
  chart_debug_initialization(((SFc6_experiment1_model_newInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c6_experiment1_model_new
    ((SFc6_experiment1_model_newInstanceStruct*) chartInstanceVar);
  initialize_c6_experiment1_model_new((SFc6_experiment1_model_newInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c6_experiment1_model_new(void *chartInstanceVar)
{
  enable_c6_experiment1_model_new((SFc6_experiment1_model_newInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c6_experiment1_model_new(void *chartInstanceVar)
{
  disable_c6_experiment1_model_new((SFc6_experiment1_model_newInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c6_experiment1_model_new(void *chartInstanceVar)
{
  sf_c6_experiment1_model_new((SFc6_experiment1_model_newInstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c6_experiment1_model_new
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c6_experiment1_model_new
    ((SFc6_experiment1_model_newInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c6_experiment1_model_new();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_raw2high'.\n");
  }

  return plhs[0];
}

extern void sf_internal_set_sim_state_c6_experiment1_model_new(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c6_experiment1_model_new();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c6_experiment1_model_new
    ((SFc6_experiment1_model_newInstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c6_experiment1_model_new(SimStruct*
  S)
{
  return sf_internal_get_sim_state_c6_experiment1_model_new(S);
}

static void sf_opaque_set_sim_state_c6_experiment1_model_new(SimStruct* S, const
  mxArray *st)
{
  sf_internal_set_sim_state_c6_experiment1_model_new(S, st);
}

static void sf_opaque_terminate_c6_experiment1_model_new(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc6_experiment1_model_newInstanceStruct*) chartInstanceVar)
      ->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c6_experiment1_model_new((SFc6_experiment1_model_newInstanceStruct*)
      chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_experiment1_model_new_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc6_experiment1_model_new
    ((SFc6_experiment1_model_newInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c6_experiment1_model_new(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c6_experiment1_model_new
      ((SFc6_experiment1_model_newInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c6_experiment1_model_new(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_experiment1_model_new_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      6);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,6,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,6,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,6,1);
      sf_mark_chart_reusable_outputs(S,sf_get_instance_specialization(),
        infoStruct,6,4);
    }

    ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,6);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2458450781U));
  ssSetChecksum1(S,(698416506U));
  ssSetChecksum2(S,(1871434388U));
  ssSetChecksum3(S,(986029849U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c6_experiment1_model_new(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c6_experiment1_model_new(SimStruct *S)
{
  SFc6_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc6_experiment1_model_newInstanceStruct *)malloc(sizeof
    (SFc6_experiment1_model_newInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc6_experiment1_model_newInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c6_experiment1_model_new;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c6_experiment1_model_new;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c6_experiment1_model_new;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c6_experiment1_model_new;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c6_experiment1_model_new;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c6_experiment1_model_new;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c6_experiment1_model_new;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c6_experiment1_model_new;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c6_experiment1_model_new;
  chartInstance->chartInfo.mdlStart = mdlStart_c6_experiment1_model_new;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c6_experiment1_model_new;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->S = S;
  ssSetUserData(S,(void *)(&(chartInstance->chartInfo)));/* register the chart instance with simstruct */
  init_dsm_address_info(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  sf_opaque_init_subchart_simstructs(chartInstance->chartInfo.chartInstance);
  chart_debug_initialization(S,1);
}

void c6_experiment1_model_new_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c6_experiment1_model_new(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c6_experiment1_model_new(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c6_experiment1_model_new(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c6_experiment1_model_new_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
