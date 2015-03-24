#ifndef __c35_experiment1_model_new_h__
#define __c35_experiment1_model_new_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  uint32_T c35_event1EventCounter;
  uint32_T c35_event2EventCounter;
  uint32_T c35_event3EventCounter;
  int32_T c35_sfEvent;
  uint8_T c35_tp_state;
  boolean_T c35_isStable;
  uint8_T c35_is_active_c35_experiment1_model_new;
  uint8_T c35_is_c35_experiment1_model_new;
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c35_doSetSimStateSideEffects;
  const mxArray *c35_setSimStateSideEffectsInfo;
} SFc35_experiment1_model_newInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c35_experiment1_model_new_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c35_experiment1_model_new_get_check_sum(mxArray *plhs[]);
extern void c35_experiment1_model_new_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
