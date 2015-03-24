#ifndef __c64_experiment1_model_new_h__
#define __c64_experiment1_model_new_h__

/* Include files */
#include "sfc_sf.h"
#include "sfc_mex.h"
#include "rtwtypes.h"

/* Type Definitions */
typedef struct {
  uint32_T c64_resetEventCounter;
  int32_T c64_sfEvent;
  uint8_T c64_tp_resting;
  uint8_T c64_tp_stimulated;
  uint8_T c64_tp_plateau;
  uint8_T c64_tp_upstroke;
  boolean_T c64_isStable;
  uint8_T c64_is_active_c64_experiment1_model_new;
  uint8_T c64_is_c64_experiment1_model_new;
  real_T c64_vn;
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  uint8_T c64_doSetSimStateSideEffects;
  const mxArray *c64_setSimStateSideEffectsInfo;
} SFc64_experiment1_model_newInstanceStruct;

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray
  *sf_c64_experiment1_model_new_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c64_experiment1_model_new_get_check_sum(mxArray *plhs[]);
extern void c64_experiment1_model_new_method_dispatcher(SimStruct *S, int_T
  method, void *data);

#endif
