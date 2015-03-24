/* Include files */

#include "blascompat32.h"
#include "experiment1_model_new_sfun.h"
#include "c19_experiment1_model_new.h"
#define CHARTINSTANCE_CHARTNUMBER      (chartInstance->chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER   (chartInstance->instanceNumber)
#include "experiment1_model_new_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c19_IN_NO_ACTIVE_CHILD         ((uint8_T)0U)
#define c19_IN_state                   ((uint8_T)1U)

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void initialize_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance);
static void initialize_params_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance);
static void enable_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance);
static void disable_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance);
static void c19_update_debugger_state_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance);
static void set_sim_state_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance, const mxArray
   *c19_st);
static void c19_set_sim_state_side_effects_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance);
static void finalize_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance);
static void sf_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance);
static void initSimStructsc19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance);
static void init_script_number_translation(uint32_T c19_machineNumber, uint32_T
  c19_chartNumber);
static const mxArray *c19_sf_marshallOut(void *chartInstanceVoid, void
  *c19_inData);
static uint32_T c19_emlrt_marshallIn(SFc19_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c19_b_event1EventCounter, const char_T
  *c19_identifier);
static uint32_T c19_b_emlrt_marshallIn(SFc19_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId);
static void c19_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c19_mxArrayInData, const char_T *c19_varName, void *c19_outData);
static const mxArray *c19_b_sf_marshallOut(void *chartInstanceVoid, void
  *c19_inData);
static int32_T c19_c_emlrt_marshallIn(SFc19_experiment1_model_newInstanceStruct *
  chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId);
static void c19_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c19_mxArrayInData, const char_T *c19_varName, void *c19_outData);
static const mxArray *c19_c_sf_marshallOut(void *chartInstanceVoid, void
  *c19_inData);
static uint8_T c19_d_emlrt_marshallIn(SFc19_experiment1_model_newInstanceStruct *
  chartInstance, const mxArray *c19_b_tp_state, const char_T *c19_identifier);
static uint8_T c19_e_emlrt_marshallIn(SFc19_experiment1_model_newInstanceStruct *
  chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId);
static void c19_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c19_mxArrayInData, const char_T *c19_varName, void *c19_outData);
static const mxArray *c19_d_sf_marshallOut(void *chartInstanceVoid, void
  *c19_inData);
static boolean_T c19_f_emlrt_marshallIn
  (SFc19_experiment1_model_newInstanceStruct *chartInstance, const mxArray
   *c19_event1, const char_T *c19_identifier);
static boolean_T c19_g_emlrt_marshallIn
  (SFc19_experiment1_model_newInstanceStruct *chartInstance, const mxArray
   *c19_u, const emlrtMsgIdentifier *c19_parentId);
static const mxArray *c19_h_emlrt_marshallIn
  (SFc19_experiment1_model_newInstanceStruct *chartInstance, const mxArray
   *c19_b_setSimStateSideEffectsInfo, const char_T *c19_identifier);
static const mxArray *c19_i_emlrt_marshallIn
  (SFc19_experiment1_model_newInstanceStruct *chartInstance, const mxArray
   *c19_u, const emlrtMsgIdentifier *c19_parentId);
static void init_dsm_address_info(SFc19_experiment1_model_newInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance)
{
  boolean_T *c19_event1;
  boolean_T *c19_event2;
  boolean_T *c19_event3;
  c19_event3 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c19_event2 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c19_event1 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  chartInstance->c19_sfEvent = CALL_EVENT;
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  chartInstance->c19_doSetSimStateSideEffects = 0U;
  chartInstance->c19_setSimStateSideEffectsInfo = NULL;
  chartInstance->c19_tp_state = 0U;
  chartInstance->c19_is_active_c19_experiment1_model_new = 0U;
  chartInstance->c19_is_c19_experiment1_model_new = 0U;
  chartInstance->c19_event1EventCounter = 0U;
  *c19_event1 = FALSE;
  chartInstance->c19_event2EventCounter = 0U;
  *c19_event2 = FALSE;
  chartInstance->c19_event3EventCounter = 0U;
  *c19_event3 = FALSE;
}

static void initialize_params_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance)
{
}

static void enable_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void disable_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance)
{
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
}

static void c19_update_debugger_state_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance)
{
  uint32_T c19_prevAniVal;
  c19_prevAniVal = sf_debug_get_animation();
  sf_debug_set_animation(0U);
  if (chartInstance->c19_is_active_c19_experiment1_model_new == 1) {
    _SFD_CC_CALL(CHART_ACTIVE_TAG, 16U, chartInstance->c19_sfEvent);
  }

  if (chartInstance->c19_is_c19_experiment1_model_new == c19_IN_state) {
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c19_sfEvent);
  } else {
    _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c19_sfEvent);
  }

  sf_debug_set_animation(c19_prevAniVal);
  _SFD_ANIMATE();
}

static const mxArray *get_sim_state_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance)
{
  const mxArray *c19_st;
  const mxArray *c19_y = NULL;
  boolean_T c19_hoistedGlobal;
  boolean_T c19_u;
  const mxArray *c19_b_y = NULL;
  boolean_T c19_b_hoistedGlobal;
  boolean_T c19_b_u;
  const mxArray *c19_c_y = NULL;
  boolean_T c19_c_hoistedGlobal;
  boolean_T c19_c_u;
  const mxArray *c19_d_y = NULL;
  uint32_T c19_d_hoistedGlobal;
  uint32_T c19_d_u;
  const mxArray *c19_e_y = NULL;
  uint32_T c19_e_hoistedGlobal;
  uint32_T c19_e_u;
  const mxArray *c19_f_y = NULL;
  uint32_T c19_f_hoistedGlobal;
  uint32_T c19_f_u;
  const mxArray *c19_g_y = NULL;
  uint8_T c19_g_hoistedGlobal;
  uint8_T c19_g_u;
  const mxArray *c19_h_y = NULL;
  uint8_T c19_h_hoistedGlobal;
  uint8_T c19_h_u;
  const mxArray *c19_i_y = NULL;
  boolean_T *c19_event1;
  boolean_T *c19_event2;
  boolean_T *c19_event3;
  c19_event3 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c19_event2 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c19_event1 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c19_st = NULL;
  c19_st = NULL;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_createcellarray(8), FALSE);
  c19_hoistedGlobal = *c19_event1;
  c19_u = c19_hoistedGlobal;
  c19_b_y = NULL;
  sf_mex_assign(&c19_b_y, sf_mex_create("y", &c19_u, 11, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c19_y, 0, c19_b_y);
  c19_b_hoistedGlobal = *c19_event2;
  c19_b_u = c19_b_hoistedGlobal;
  c19_c_y = NULL;
  sf_mex_assign(&c19_c_y, sf_mex_create("y", &c19_b_u, 11, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c19_y, 1, c19_c_y);
  c19_c_hoistedGlobal = *c19_event3;
  c19_c_u = c19_c_hoistedGlobal;
  c19_d_y = NULL;
  sf_mex_assign(&c19_d_y, sf_mex_create("y", &c19_c_u, 11, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c19_y, 2, c19_d_y);
  c19_d_hoistedGlobal = chartInstance->c19_event1EventCounter;
  c19_d_u = c19_d_hoistedGlobal;
  c19_e_y = NULL;
  sf_mex_assign(&c19_e_y, sf_mex_create("y", &c19_d_u, 7, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c19_y, 3, c19_e_y);
  c19_e_hoistedGlobal = chartInstance->c19_event2EventCounter;
  c19_e_u = c19_e_hoistedGlobal;
  c19_f_y = NULL;
  sf_mex_assign(&c19_f_y, sf_mex_create("y", &c19_e_u, 7, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c19_y, 4, c19_f_y);
  c19_f_hoistedGlobal = chartInstance->c19_event3EventCounter;
  c19_f_u = c19_f_hoistedGlobal;
  c19_g_y = NULL;
  sf_mex_assign(&c19_g_y, sf_mex_create("y", &c19_f_u, 7, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c19_y, 5, c19_g_y);
  c19_g_hoistedGlobal = chartInstance->c19_is_active_c19_experiment1_model_new;
  c19_g_u = c19_g_hoistedGlobal;
  c19_h_y = NULL;
  sf_mex_assign(&c19_h_y, sf_mex_create("y", &c19_g_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c19_y, 6, c19_h_y);
  c19_h_hoistedGlobal = chartInstance->c19_is_c19_experiment1_model_new;
  c19_h_u = c19_h_hoistedGlobal;
  c19_i_y = NULL;
  sf_mex_assign(&c19_i_y, sf_mex_create("y", &c19_h_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_setcell(c19_y, 7, c19_i_y);
  sf_mex_assign(&c19_st, c19_y, FALSE);
  return c19_st;
}

static void set_sim_state_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance, const mxArray
   *c19_st)
{
  const mxArray *c19_u;
  boolean_T *c19_event1;
  boolean_T *c19_event2;
  boolean_T *c19_event3;
  c19_event3 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c19_event2 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c19_event1 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c19_u = sf_mex_dup(c19_st);
  *c19_event1 = c19_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c19_u, 0)), "event1");
  *c19_event2 = c19_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c19_u, 1)), "event2");
  *c19_event3 = c19_f_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c19_u, 2)), "event3");
  chartInstance->c19_event1EventCounter = c19_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c19_u, 3)), "event1EventCounter");
  chartInstance->c19_event2EventCounter = c19_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c19_u, 4)), "event2EventCounter");
  chartInstance->c19_event3EventCounter = c19_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c19_u, 5)), "event3EventCounter");
  chartInstance->c19_is_active_c19_experiment1_model_new =
    c19_d_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c19_u, 6)),
    "is_active_c19_experiment1_model_new");
  chartInstance->c19_is_c19_experiment1_model_new = c19_d_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c19_u, 7)),
     "is_c19_experiment1_model_new");
  sf_mex_assign(&chartInstance->c19_setSimStateSideEffectsInfo,
                c19_h_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c19_u, 8)), "setSimStateSideEffectsInfo"), TRUE);
  sf_mex_destroy(&c19_u);
  chartInstance->c19_doSetSimStateSideEffects = 1U;
  c19_update_debugger_state_c19_experiment1_model_new(chartInstance);
  sf_mex_destroy(&c19_st);
}

static void c19_set_sim_state_side_effects_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance)
{
  if (chartInstance->c19_doSetSimStateSideEffects != 0) {
    if (chartInstance->c19_is_c19_experiment1_model_new == c19_IN_state) {
      chartInstance->c19_tp_state = 1U;
    } else {
      chartInstance->c19_tp_state = 0U;
    }

    chartInstance->c19_doSetSimStateSideEffects = 0U;
  }
}

static void finalize_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c19_setSimStateSideEffectsInfo);
}

static void sf_c19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance)
{
  boolean_T c19_out;
  boolean_T c19_b_out;
  boolean_T c19_c_out;
  boolean_T c19_temp;
  boolean_T c19_d_out;
  boolean_T c19_e_out;
  boolean_T c19_f_out;
  real_T *c19_v;
  boolean_T *c19_event1;
  boolean_T *c19_event2;
  boolean_T *c19_event3;
  c19_event3 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 3);
  c19_event2 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 2);
  c19_event1 = (boolean_T *)ssGetOutputPortSignal(chartInstance->S, 1);
  c19_v = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
  c19_set_sim_state_side_effects_c19_experiment1_model_new(chartInstance);
  _sfTime_ = (real_T)ssGetT(chartInstance->S);
  _SFD_CC_CALL(CHART_ENTER_SFUNCTION_TAG, 16U, chartInstance->c19_sfEvent);
  _SFD_DATA_RANGE_CHECK(*c19_v, 0U);
  chartInstance->c19_sfEvent = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG, 16U, chartInstance->c19_sfEvent);
  if (chartInstance->c19_is_active_c19_experiment1_model_new == 0) {
    _SFD_CC_CALL(CHART_ENTER_ENTRY_FUNCTION_TAG, 16U, chartInstance->c19_sfEvent);
    chartInstance->c19_is_active_c19_experiment1_model_new = 1U;
    _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 16U, chartInstance->c19_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 0U,
                 chartInstance->c19_sfEvent);
    _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 0U, chartInstance->c19_sfEvent);
    chartInstance->c19_is_c19_experiment1_model_new = c19_IN_state;
    _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c19_sfEvent);
    chartInstance->c19_tp_state = 1U;
  } else {
    _SFD_CS_CALL(STATE_ENTER_DURING_FUNCTION_TAG, 0U, chartInstance->c19_sfEvent);
    _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 1U,
                 chartInstance->c19_sfEvent);
    c19_out = (CV_TRANSITION_EVAL(1U, (int32_T)_SFD_CCP_CALL(1U, 0, *c19_v <
      20.0 != 0U, chartInstance->c19_sfEvent)) != 0);
    if (c19_out) {
      if (sf_debug_transition_conflict_check_enabled()) {
        unsigned int transitionList[3];
        unsigned int numTransitions = 1;
        transitionList[0] = 1;
        sf_debug_transition_conflict_check_begin();
        c19_b_out = ((*c19_v >= 20.0) && (*c19_v < 138.0));
        if (c19_b_out) {
          transitionList[numTransitions] = 2;
          numTransitions++;
        }

        c19_c_out = (*c19_v >= 138.0);
        if (c19_c_out) {
          transitionList[numTransitions] = 3;
          numTransitions++;
        }

        sf_debug_transition_conflict_check_end();
        if (numTransitions > 1) {
          _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
        }
      }

      _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 1U, chartInstance->c19_sfEvent);
      chartInstance->c19_tp_state = 0U;
      chartInstance->c19_is_c19_experiment1_model_new = c19_IN_NO_ACTIVE_CHILD;
      _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c19_sfEvent);
      chartInstance->c19_event1EventCounter++;
      chartInstance->c19_is_c19_experiment1_model_new = c19_IN_state;
      _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c19_sfEvent);
      chartInstance->c19_tp_state = 1U;
    } else {
      _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 2U,
                   chartInstance->c19_sfEvent);
      c19_temp = (_SFD_CCP_CALL(2U, 0, *c19_v >= 20.0 != 0U,
        chartInstance->c19_sfEvent) != 0);
      if (c19_temp) {
        c19_temp = (_SFD_CCP_CALL(2U, 1, *c19_v < 138.0 != 0U,
          chartInstance->c19_sfEvent) != 0);
      }

      c19_d_out = (CV_TRANSITION_EVAL(2U, (int32_T)c19_temp) != 0);
      if (c19_d_out) {
        if (sf_debug_transition_conflict_check_enabled()) {
          unsigned int transitionList[2];
          unsigned int numTransitions = 1;
          transitionList[0] = 2;
          sf_debug_transition_conflict_check_begin();
          c19_e_out = (*c19_v >= 138.0);
          if (c19_e_out) {
            transitionList[numTransitions] = 3;
            numTransitions++;
          }

          sf_debug_transition_conflict_check_end();
          if (numTransitions > 1) {
            _SFD_TRANSITION_CONFLICT(&(transitionList[0]),numTransitions);
          }
        }

        _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 2U, chartInstance->c19_sfEvent);
        chartInstance->c19_tp_state = 0U;
        chartInstance->c19_is_c19_experiment1_model_new = c19_IN_NO_ACTIVE_CHILD;
        _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c19_sfEvent);
        chartInstance->c19_event2EventCounter++;
        chartInstance->c19_is_c19_experiment1_model_new = c19_IN_state;
        _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c19_sfEvent);
        chartInstance->c19_tp_state = 1U;
      } else {
        _SFD_CT_CALL(TRANSITION_BEFORE_PROCESSING_TAG, 3U,
                     chartInstance->c19_sfEvent);
        c19_f_out = (CV_TRANSITION_EVAL(3U, (int32_T)_SFD_CCP_CALL(3U, 0, *c19_v
          >= 138.0 != 0U, chartInstance->c19_sfEvent)) != 0);
        if (c19_f_out) {
          _SFD_CT_CALL(TRANSITION_ACTIVE_TAG, 3U, chartInstance->c19_sfEvent);
          chartInstance->c19_tp_state = 0U;
          chartInstance->c19_is_c19_experiment1_model_new =
            c19_IN_NO_ACTIVE_CHILD;
          _SFD_CS_CALL(STATE_INACTIVE_TAG, 0U, chartInstance->c19_sfEvent);
          chartInstance->c19_event3EventCounter++;
          chartInstance->c19_is_c19_experiment1_model_new = c19_IN_state;
          _SFD_CS_CALL(STATE_ACTIVE_TAG, 0U, chartInstance->c19_sfEvent);
          chartInstance->c19_tp_state = 1U;
        }
      }
    }

    _SFD_CS_CALL(EXIT_OUT_OF_FUNCTION_TAG, 0U, chartInstance->c19_sfEvent);
  }

  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG, 16U, chartInstance->c19_sfEvent);
  if (chartInstance->c19_event1EventCounter > 0U) {
    *c19_event1 = !*c19_event1;
    chartInstance->c19_event1EventCounter--;
  }

  if (chartInstance->c19_event2EventCounter > 0U) {
    *c19_event2 = !*c19_event2;
    chartInstance->c19_event2EventCounter--;
  }

  if (chartInstance->c19_event3EventCounter > 0U) {
    *c19_event3 = !*c19_event3;
    chartInstance->c19_event3EventCounter--;
  }

  sf_debug_check_for_state_inconsistency(_experiment1_model_newMachineNumber_,
    chartInstance->chartNumber, chartInstance->instanceNumber);
}

static void initSimStructsc19_experiment1_model_new
  (SFc19_experiment1_model_newInstanceStruct *chartInstance)
{
}

static void init_script_number_translation(uint32_T c19_machineNumber, uint32_T
  c19_chartNumber)
{
}

const mxArray *sf_c19_experiment1_model_new_get_eml_resolved_functions_info(void)
{
  const mxArray *c19_nameCaptureInfo = NULL;
  c19_nameCaptureInfo = NULL;
  sf_mex_assign(&c19_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), FALSE);
  return c19_nameCaptureInfo;
}

static const mxArray *c19_sf_marshallOut(void *chartInstanceVoid, void
  *c19_inData)
{
  const mxArray *c19_mxArrayOutData = NULL;
  uint32_T c19_u;
  const mxArray *c19_y = NULL;
  SFc19_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc19_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c19_mxArrayOutData = NULL;
  c19_u = *(uint32_T *)c19_inData;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_create("y", &c19_u, 7, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c19_mxArrayOutData, c19_y, FALSE);
  return c19_mxArrayOutData;
}

static uint32_T c19_emlrt_marshallIn(SFc19_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c19_b_event1EventCounter, const char_T
  *c19_identifier)
{
  uint32_T c19_y;
  emlrtMsgIdentifier c19_thisId;
  c19_thisId.fIdentifier = c19_identifier;
  c19_thisId.fParent = NULL;
  c19_y = c19_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c19_b_event1EventCounter), &c19_thisId);
  sf_mex_destroy(&c19_b_event1EventCounter);
  return c19_y;
}

static uint32_T c19_b_emlrt_marshallIn(SFc19_experiment1_model_newInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId)
{
  uint32_T c19_y;
  uint32_T c19_u0;
  sf_mex_import(c19_parentId, sf_mex_dup(c19_u), &c19_u0, 1, 7, 0U, 0, 0U, 0);
  c19_y = c19_u0;
  sf_mex_destroy(&c19_u);
  return c19_y;
}

static void c19_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c19_mxArrayInData, const char_T *c19_varName, void *c19_outData)
{
  const mxArray *c19_b_event1EventCounter;
  const char_T *c19_identifier;
  emlrtMsgIdentifier c19_thisId;
  uint32_T c19_y;
  SFc19_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc19_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c19_b_event1EventCounter = sf_mex_dup(c19_mxArrayInData);
  c19_identifier = c19_varName;
  c19_thisId.fIdentifier = c19_identifier;
  c19_thisId.fParent = NULL;
  c19_y = c19_b_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c19_b_event1EventCounter), &c19_thisId);
  sf_mex_destroy(&c19_b_event1EventCounter);
  *(uint32_T *)c19_outData = c19_y;
  sf_mex_destroy(&c19_mxArrayInData);
}

static const mxArray *c19_b_sf_marshallOut(void *chartInstanceVoid, void
  *c19_inData)
{
  const mxArray *c19_mxArrayOutData = NULL;
  int32_T c19_u;
  const mxArray *c19_y = NULL;
  SFc19_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc19_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c19_mxArrayOutData = NULL;
  c19_u = *(int32_T *)c19_inData;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_create("y", &c19_u, 6, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c19_mxArrayOutData, c19_y, FALSE);
  return c19_mxArrayOutData;
}

static int32_T c19_c_emlrt_marshallIn(SFc19_experiment1_model_newInstanceStruct *
  chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId)
{
  int32_T c19_y;
  int32_T c19_i0;
  sf_mex_import(c19_parentId, sf_mex_dup(c19_u), &c19_i0, 1, 6, 0U, 0, 0U, 0);
  c19_y = c19_i0;
  sf_mex_destroy(&c19_u);
  return c19_y;
}

static void c19_b_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c19_mxArrayInData, const char_T *c19_varName, void *c19_outData)
{
  const mxArray *c19_b_sfEvent;
  const char_T *c19_identifier;
  emlrtMsgIdentifier c19_thisId;
  int32_T c19_y;
  SFc19_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc19_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c19_b_sfEvent = sf_mex_dup(c19_mxArrayInData);
  c19_identifier = c19_varName;
  c19_thisId.fIdentifier = c19_identifier;
  c19_thisId.fParent = NULL;
  c19_y = c19_c_emlrt_marshallIn(chartInstance, sf_mex_dup(c19_b_sfEvent),
    &c19_thisId);
  sf_mex_destroy(&c19_b_sfEvent);
  *(int32_T *)c19_outData = c19_y;
  sf_mex_destroy(&c19_mxArrayInData);
}

static const mxArray *c19_c_sf_marshallOut(void *chartInstanceVoid, void
  *c19_inData)
{
  const mxArray *c19_mxArrayOutData = NULL;
  uint8_T c19_u;
  const mxArray *c19_y = NULL;
  SFc19_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc19_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c19_mxArrayOutData = NULL;
  c19_u = *(uint8_T *)c19_inData;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_create("y", &c19_u, 3, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c19_mxArrayOutData, c19_y, FALSE);
  return c19_mxArrayOutData;
}

static uint8_T c19_d_emlrt_marshallIn(SFc19_experiment1_model_newInstanceStruct *
  chartInstance, const mxArray *c19_b_tp_state, const char_T *c19_identifier)
{
  uint8_T c19_y;
  emlrtMsgIdentifier c19_thisId;
  c19_thisId.fIdentifier = c19_identifier;
  c19_thisId.fParent = NULL;
  c19_y = c19_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c19_b_tp_state),
    &c19_thisId);
  sf_mex_destroy(&c19_b_tp_state);
  return c19_y;
}

static uint8_T c19_e_emlrt_marshallIn(SFc19_experiment1_model_newInstanceStruct *
  chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId)
{
  uint8_T c19_y;
  uint8_T c19_u1;
  sf_mex_import(c19_parentId, sf_mex_dup(c19_u), &c19_u1, 1, 3, 0U, 0, 0U, 0);
  c19_y = c19_u1;
  sf_mex_destroy(&c19_u);
  return c19_y;
}

static void c19_c_sf_marshallIn(void *chartInstanceVoid, const mxArray
  *c19_mxArrayInData, const char_T *c19_varName, void *c19_outData)
{
  const mxArray *c19_b_tp_state;
  const char_T *c19_identifier;
  emlrtMsgIdentifier c19_thisId;
  uint8_T c19_y;
  SFc19_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc19_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c19_b_tp_state = sf_mex_dup(c19_mxArrayInData);
  c19_identifier = c19_varName;
  c19_thisId.fIdentifier = c19_identifier;
  c19_thisId.fParent = NULL;
  c19_y = c19_e_emlrt_marshallIn(chartInstance, sf_mex_dup(c19_b_tp_state),
    &c19_thisId);
  sf_mex_destroy(&c19_b_tp_state);
  *(uint8_T *)c19_outData = c19_y;
  sf_mex_destroy(&c19_mxArrayInData);
}

static const mxArray *c19_d_sf_marshallOut(void *chartInstanceVoid, void
  *c19_inData)
{
  const mxArray *c19_mxArrayOutData = NULL;
  real_T c19_u;
  const mxArray *c19_y = NULL;
  SFc19_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc19_experiment1_model_newInstanceStruct *)chartInstanceVoid;
  c19_mxArrayOutData = NULL;
  c19_u = *(real_T *)c19_inData;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_create("y", &c19_u, 0, 0U, 0U, 0U, 0), FALSE);
  sf_mex_assign(&c19_mxArrayOutData, c19_y, FALSE);
  return c19_mxArrayOutData;
}

static boolean_T c19_f_emlrt_marshallIn
  (SFc19_experiment1_model_newInstanceStruct *chartInstance, const mxArray
   *c19_event1, const char_T *c19_identifier)
{
  boolean_T c19_y;
  emlrtMsgIdentifier c19_thisId;
  c19_thisId.fIdentifier = c19_identifier;
  c19_thisId.fParent = NULL;
  c19_y = c19_g_emlrt_marshallIn(chartInstance, sf_mex_dup(c19_event1),
    &c19_thisId);
  sf_mex_destroy(&c19_event1);
  return c19_y;
}

static boolean_T c19_g_emlrt_marshallIn
  (SFc19_experiment1_model_newInstanceStruct *chartInstance, const mxArray
   *c19_u, const emlrtMsgIdentifier *c19_parentId)
{
  boolean_T c19_y;
  boolean_T c19_b0;
  sf_mex_import(c19_parentId, sf_mex_dup(c19_u), &c19_b0, 1, 11, 0U, 0, 0U, 0);
  c19_y = c19_b0;
  sf_mex_destroy(&c19_u);
  return c19_y;
}

static const mxArray *c19_h_emlrt_marshallIn
  (SFc19_experiment1_model_newInstanceStruct *chartInstance, const mxArray
   *c19_b_setSimStateSideEffectsInfo, const char_T *c19_identifier)
{
  const mxArray *c19_y = NULL;
  emlrtMsgIdentifier c19_thisId;
  c19_y = NULL;
  c19_thisId.fIdentifier = c19_identifier;
  c19_thisId.fParent = NULL;
  sf_mex_assign(&c19_y, c19_i_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c19_b_setSimStateSideEffectsInfo), &c19_thisId), FALSE);
  sf_mex_destroy(&c19_b_setSimStateSideEffectsInfo);
  return c19_y;
}

static const mxArray *c19_i_emlrt_marshallIn
  (SFc19_experiment1_model_newInstanceStruct *chartInstance, const mxArray
   *c19_u, const emlrtMsgIdentifier *c19_parentId)
{
  const mxArray *c19_y = NULL;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_duplicatearraysafe(&c19_u), FALSE);
  sf_mex_destroy(&c19_u);
  return c19_y;
}

static void init_dsm_address_info(SFc19_experiment1_model_newInstanceStruct
  *chartInstance)
{
}

/* SFunction Glue Code */
void sf_c19_experiment1_model_new_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(600858028U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3684122215U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2025870209U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2859312520U);
}

mxArray *sf_c19_experiment1_model_new_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] = { "checksum", "inputs", "parameters",
    "outputs", "locals" };

  mxArray *mxAutoinheritanceInfo = mxCreateStructMatrix(1,1,5,
    autoinheritanceFields);

  {
    mxArray *mxChecksum = mxCreateString("g4VGvhM6c2Wbd2wlTELlRD");
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
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  {
    mxSetField(mxAutoinheritanceInfo,0,"locals",mxCreateDoubleMatrix(0,0,mxREAL));
  }

  return(mxAutoinheritanceInfo);
}

static const mxArray *sf_get_sim_state_info_c19_experiment1_model_new(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  const char *infoEncStr[] = {
    "100 S1x8'type','srcId','name','auxInfo'{{M[6],M[65],T\"event1\",},{M[6],M[66],T\"event2\",},{M[6],M[67],T\"event3\",},{M[7],M[65],T\"event1EventCounter\",},{M[7],M[66],T\"event2EventCounter\",},{M[7],M[67],T\"event3EventCounter\",},{M[8],M[0],T\"is_active_c19_experiment1_model_new\",},{M[9],M[0],T\"is_c19_experiment1_model_new\",}}"
  };

  mxArray *mxVarInfo = sf_mex_decode_encoded_mx_struct_array(infoEncStr, 8, 10);
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c19_experiment1_model_new_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static void chart_debug_initialization(SimStruct *S, unsigned int
  fullDebuggerInitialization)
{
  if (!sim_mode_is_rtw_gen(S)) {
    SFc19_experiment1_model_newInstanceStruct *chartInstance;
    chartInstance = (SFc19_experiment1_model_newInstanceStruct *)
      ((ChartInfoStruct *)(ssGetUserData(S)))->chartInstance;
    if (ssIsFirstInitCond(S) && fullDebuggerInitialization==1) {
      /* do this only if simulation is starting */
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent = sf_debug_initialize_chart
          (_experiment1_model_newMachineNumber_,
           19,
           1,
           4,
           1,
           3,
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
             3,
             3,
             3);
          _SFD_SET_DATA_PROPS(0,1,1,0,"v");
          _SFD_EVENT_SCOPE(0,2);
          _SFD_EVENT_SCOPE(1,2);
          _SFD_EVENT_SCOPE(2,2);
          _SFD_STATE_INFO(0,0,0);
          _SFD_CH_SUBSTATE_COUNT(1);
          _SFD_CH_SUBSTATE_DECOMP(0);
          _SFD_CH_SUBSTATE_INDEX(0,0);
          _SFD_ST_SUBSTATE_COUNT(0,0);
        }

        _SFD_CV_INIT_CHART(1,0,0,0);

        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(3,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 5 };

          static int sPostFixPredicateTree[] = { 0 };

          _SFD_CV_INIT_TRANS(1,1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),1,
                             &(sPostFixPredicateTree[0]));
        }

        {
          static unsigned int sStartGuardMap[] = { 1, 8 };

          static unsigned int sEndGuardMap[] = { 6, 13 };

          static int sPostFixPredicateTree[] = { 0, 1, -3 };

          _SFD_CV_INIT_TRANS(2,2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),3,
                             &(sPostFixPredicateTree[0]));
        }

        _SFD_TRANS_COV_WTS(0,0,0,0,0);
        if (chartAlreadyPresent==0) {
          _SFD_TRANS_COV_MAPS(0,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL,
                              0,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(3,0,1,0,1);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 7 };

          _SFD_TRANS_COV_MAPS(3,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              1,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(1,0,1,0,1);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1 };

          static unsigned int sEndGuardMap[] = { 5 };

          _SFD_TRANS_COV_MAPS(1,
                              0,NULL,NULL,
                              1,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              1,NULL,NULL);
        }

        _SFD_TRANS_COV_WTS(2,0,2,0,1);
        if (chartAlreadyPresent==0) {
          static unsigned int sStartGuardMap[] = { 1, 8 };

          static unsigned int sEndGuardMap[] = { 6, 13 };

          _SFD_TRANS_COV_MAPS(2,
                              0,NULL,NULL,
                              2,&(sStartGuardMap[0]),&(sEndGuardMap[0]),
                              0,NULL,NULL,
                              1,NULL,NULL);
        }

        _SFD_SET_DATA_COMPILED_PROPS(0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,0,
          (MexFcnForType)c19_d_sf_marshallOut,(MexInFcnForType)NULL);

        {
          real_T *c19_v;
          c19_v = (real_T *)ssGetInputPortSignal(chartInstance->S, 0);
          _SFD_SET_DATA_VALUE_PTR(0U, c19_v);
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
  return "uC2wUZ2X7tLsNcUtQjy1iE";
}

static void sf_opaque_initialize_c19_experiment1_model_new(void
  *chartInstanceVar)
{
  chart_debug_initialization(((SFc19_experiment1_model_newInstanceStruct*)
    chartInstanceVar)->S,0);
  initialize_params_c19_experiment1_model_new
    ((SFc19_experiment1_model_newInstanceStruct*) chartInstanceVar);
  initialize_c19_experiment1_model_new
    ((SFc19_experiment1_model_newInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c19_experiment1_model_new(void *chartInstanceVar)
{
  enable_c19_experiment1_model_new((SFc19_experiment1_model_newInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c19_experiment1_model_new(void *chartInstanceVar)
{
  disable_c19_experiment1_model_new((SFc19_experiment1_model_newInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c19_experiment1_model_new(void *chartInstanceVar)
{
  sf_c19_experiment1_model_new((SFc19_experiment1_model_newInstanceStruct*)
    chartInstanceVar);
}

extern const mxArray* sf_internal_get_sim_state_c19_experiment1_model_new
  (SimStruct* S)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_raw2high");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = (mxArray*) get_sim_state_c19_experiment1_model_new
    ((SFc19_experiment1_model_newInstanceStruct*)chartInfo->chartInstance);/* raw sim ctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c19_experiment1_model_new();/* state var info */
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

extern void sf_internal_set_sim_state_c19_experiment1_model_new(SimStruct* S,
  const mxArray *st)
{
  ChartInfoStruct *chartInfo = (ChartInfoStruct*) ssGetUserData(S);
  mxArray *plhs[1] = { NULL };

  mxArray *prhs[4];
  int mxError = 0;
  prhs[0] = mxCreateString("chart_simctx_high2raw");
  prhs[1] = mxCreateDoubleScalar(ssGetSFuncBlockHandle(S));
  prhs[2] = mxDuplicateArray(st);      /* high level simctx */
  prhs[3] = (mxArray*) sf_get_sim_state_info_c19_experiment1_model_new();/* state var info */
  mxError = sf_mex_call_matlab(1, plhs, 4, prhs, "sfprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  mxDestroyArray(prhs[2]);
  mxDestroyArray(prhs[3]);
  if (mxError || plhs[0] == NULL) {
    sf_mex_error_message("Stateflow Internal Error: \nError calling 'chart_simctx_high2raw'.\n");
  }

  set_sim_state_c19_experiment1_model_new
    ((SFc19_experiment1_model_newInstanceStruct*)chartInfo->chartInstance,
     mxDuplicateArray(plhs[0]));
  mxDestroyArray(plhs[0]);
}

static const mxArray* sf_opaque_get_sim_state_c19_experiment1_model_new
  (SimStruct* S)
{
  return sf_internal_get_sim_state_c19_experiment1_model_new(S);
}

static void sf_opaque_set_sim_state_c19_experiment1_model_new(SimStruct* S,
  const mxArray *st)
{
  sf_internal_set_sim_state_c19_experiment1_model_new(S, st);
}

static void sf_opaque_terminate_c19_experiment1_model_new(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc19_experiment1_model_newInstanceStruct*)
                    chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
    }

    finalize_c19_experiment1_model_new
      ((SFc19_experiment1_model_newInstanceStruct*) chartInstanceVar);
    free((void *)chartInstanceVar);
    ssSetUserData(S,NULL);
  }

  unload_experiment1_model_new_optimization_info();
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc19_experiment1_model_new
    ((SFc19_experiment1_model_newInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c19_experiment1_model_new(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  if (sf_machine_global_initializer_called()) {
    initialize_params_c19_experiment1_model_new
      ((SFc19_experiment1_model_newInstanceStruct*)(((ChartInfoStruct *)
         ssGetUserData(S))->chartInstance));
  }
}

static void mdlSetWorkWidths_c19_experiment1_model_new(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
    mxArray *infoStruct = load_experiment1_model_new_optimization_info();
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable(S,sf_get_instance_specialization(),infoStruct,
      19);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetRTWCG(S,sf_rtw_info_uint_prop(S,sf_get_instance_specialization(),
                infoStruct,19,"RTWCG"));
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop(S,
      sf_get_instance_specialization(),infoStruct,19,
      "gatewayCannotBeInlinedMultipleTimes"));
    if (chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,sf_get_instance_specialization(),
        infoStruct,19,1);
    }

    sf_set_rtw_dwork_info(S,sf_get_instance_specialization(),infoStruct,19);
    ssSetHasSubFunctions(S,!(chartIsInlinable));
  } else {
  }

  ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  ssSetChecksum0(S,(2120035736U));
  ssSetChecksum1(S,(3253109315U));
  ssSetChecksum2(S,(2363121021U));
  ssSetChecksum3(S,(755904458U));
  ssSetmdlDerivatives(S, NULL);
  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c19_experiment1_model_new(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlStart_c19_experiment1_model_new(SimStruct *S)
{
  SFc19_experiment1_model_newInstanceStruct *chartInstance;
  chartInstance = (SFc19_experiment1_model_newInstanceStruct *)malloc(sizeof
    (SFc19_experiment1_model_newInstanceStruct));
  memset(chartInstance, 0, sizeof(SFc19_experiment1_model_newInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c19_experiment1_model_new;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c19_experiment1_model_new;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c19_experiment1_model_new;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c19_experiment1_model_new;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c19_experiment1_model_new;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c19_experiment1_model_new;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c19_experiment1_model_new;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c19_experiment1_model_new;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c19_experiment1_model_new;
  chartInstance->chartInfo.mdlStart = mdlStart_c19_experiment1_model_new;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c19_experiment1_model_new;
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

void c19_experiment1_model_new_method_dispatcher(SimStruct *S, int_T method,
  void *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c19_experiment1_model_new(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c19_experiment1_model_new(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c19_experiment1_model_new(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c19_experiment1_model_new_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
