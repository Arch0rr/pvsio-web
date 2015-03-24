#ifndef __c68_experiment1_model_new_h__
#define __c68_experiment1_model_new_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  uint32_T c68_resetEventCounter;
  int32_T c68_sfEvent;
  uint8_T c68_tp_resting;
  uint8_T c68_tp_stimulated;
  uint8_T c68_tp_plateau;
  uint8_T c68_tp_upstroke;
  boolean_T c68_isStable;
  uint8_T c68_is_active_c68_experiment1_model_new;
  uint8_T c68_is_c68_experiment1_model_new;
  real_T c68_vn;
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c68_doSetSimStateSideEffects;
  const mxArray *c68_setSimStateSideEffectsInfo;
} SFc68_experiment1_model_newInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c68_experiment1_model_new_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c68_experiment1_model_new_get_check_sum(mxArray *plhs[]);
extern void c68_experiment1_model_new_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
