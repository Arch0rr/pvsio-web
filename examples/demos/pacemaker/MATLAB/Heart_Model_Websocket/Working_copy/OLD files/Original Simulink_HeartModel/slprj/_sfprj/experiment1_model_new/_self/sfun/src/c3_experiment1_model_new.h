#ifndef __c3_experiment1_model_new_h__
#define __c3_experiment1_model_new_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  uint32_T c3_event1EventCounter;
  uint32_T c3_event2EventCounter;
  uint32_T c3_event3EventCounter;
  int32_T c3_sfEvent;
  uint8_T c3_tp_state;
  boolean_T c3_isStable;
  uint8_T c3_is_active_c3_experiment1_model_new;
  uint8_T c3_is_c3_experiment1_model_new;
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c3_doSetSimStateSideEffects;
  const mxArray *c3_setSimStateSideEffectsInfo;
} SFc3_experiment1_model_newInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c3_experiment1_model_new_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_experiment1_model_new_get_check_sum(mxArray *plhs[]);
extern void c3_experiment1_model_new_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
