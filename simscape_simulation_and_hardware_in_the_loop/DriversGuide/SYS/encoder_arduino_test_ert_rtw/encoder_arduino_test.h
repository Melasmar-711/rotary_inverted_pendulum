/*
 * File: encoder_arduino_test.h
 *
 * Code generated for Simulink model 'encoder_arduino_test'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Tue Jan  3 11:41:03 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_encoder_arduino_test_h_
#define RTW_HEADER_encoder_arduino_test_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef encoder_arduino_test_COMMON_INCLUDES_
# define encoder_arduino_test_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_arduino_digitalio.h"
#include "MW_PWM.h"
#include "encoder_arduino.h"
#endif                               /* encoder_arduino_test_COMMON_INCLUDES_ */

#include "encoder_arduino_test_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "MW_target_hardware_resources.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Gain;                         /* '<S1>/Gain' */
  real_T Probe[2];                     /* '<S4>/Probe' */
  real_T Gain1;                        /* '<S1>/Gain1' */
  real_T Probe_n[2];                   /* '<S9>/Probe' */
  real_T AB;                           /* '<S2>/[A,B]' */
  real_T Gain2;                        /* '<S1>/Gain2' */
  real_T AB_e;                         /* '<S3>/[A,B]' */
  int32_T MATLABSystem2;               /* '<S1>/MATLAB System2' */
} B_encoder_arduino_test_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_T obj; /* '<Root>/PWM1' */
  Encoder_arduino_encoder_ardui_T obj_n;/* '<S1>/MATLAB System2' */
  Encoder_arduino_encoder_ardui_T obj_h;/* '<S1>/MATLAB System1' */
  j_codertarget_arduinobase_int_T gobj_1;/* '<Root>/PWM1' */
  j_codertarget_arduinobase_int_T gobj_2;/* '<Root>/PWM1' */
  j_codertarget_arduinobase_int_T gobj_3;/* '<Root>/PWM1' */
  j_codertarget_arduinobase_int_T gobj_4;/* '<Root>/PWM1' */
  codertarget_arduinobase_block_T obj_i;/* '<Root>/Digital Output' */
  codertarget_arduinobase_block_T obj_ix;/* '<Root>/Digital Output1' */
  real_T Integrator_DSTATE;            /* '<S8>/Integrator' */
  real_T Integrator_DSTATE_o;          /* '<S13>/Integrator' */
  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<S1>/Scope2' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<S1>/Scope1' */

  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<S1>/Scope' */

  int8_T Integrator_PrevResetState;    /* '<S8>/Integrator' */
  int8_T Integrator_PrevResetState_e;  /* '<S13>/Integrator' */
  uint8_T Integrator_IC_LOADING;       /* '<S8>/Integrator' */
  uint8_T Integrator_IC_LOADING_e;     /* '<S13>/Integrator' */
} DW_encoder_arduino_test_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T pendulum_angle;               /* '<Root>/pendulum_angle' */
  real_T pendulum_speed;               /* '<Root>/pendulum_speed' */
  real_T motor_angle;                  /* '<Root>/motor_angle' */
  real_T motor_speed;                  /* '<Root>/motor_speed' */
} ExtY_encoder_arduino_test_T;

/* Parameters (default storage) */
struct P_encoder_arduino_test_T_ {
  real_T K_final[4];                   /* Variable: K_final
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T refernce_values[4];           /* Variable: refernce_values
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T FilteredDerivativeDiscreteorCon;
                              /* Mask Parameter: FilteredDerivativeDiscreteorCon
                               * Referenced by: '<S2>/[A,B]'
                               */
  real_T FilteredDerivativeDiscreteorC_n;
                              /* Mask Parameter: FilteredDerivativeDiscreteorC_n
                               * Referenced by: '<S3>/[A,B]'
                               */
  real_T FilteredDerivativeDiscreteorC_k;
                              /* Mask Parameter: FilteredDerivativeDiscreteorC_k
                               * Referenced by: '<S2>/[A,B]'
                               */
  real_T FilteredDerivativeDiscreteorC_e;
                              /* Mask Parameter: FilteredDerivativeDiscreteorC_e
                               * Referenced by: '<S3>/[A,B]'
                               */
  real_T FilteredDerivativeDiscreteor_kd;
                              /* Mask Parameter: FilteredDerivativeDiscreteor_kd
                               * Referenced by: '<S2>/Gain'
                               */
  real_T FilteredDerivativeDiscreteorC_b;
                              /* Mask Parameter: FilteredDerivativeDiscreteorC_b
                               * Referenced by: '<S3>/Gain'
                               */
  real_T FilteredDerivativeDiscreteorC_d;
                              /* Mask Parameter: FilteredDerivativeDiscreteorC_d
                               * Referenced by: '<S4>/Time constant'
                               */
  real_T FilteredDerivativeDiscreteorC_c;
                              /* Mask Parameter: FilteredDerivativeDiscreteorC_c
                               * Referenced by: '<S9>/Time constant'
                               */
  real_T FilteredDerivativeDiscreteorC_f;
                              /* Mask Parameter: FilteredDerivativeDiscreteorC_f
                               * Referenced by: '<S4>/Minimum sampling to time constant ratio'
                               */
  real_T FilteredDerivativeDiscreteorC_l;
                              /* Mask Parameter: FilteredDerivativeDiscreteorC_l
                               * Referenced by: '<S9>/Minimum sampling to time constant ratio'
                               */
  real_T Constant2_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Saturation3_UpperSat;         /* Expression: -5
                                        * Referenced by: '<Root>/Saturation3'
                                        */
  real_T Saturation3_LowerSat;         /* Expression: -12
                                        * Referenced by: '<Root>/Saturation3'
                                        */
  real_T Gain2_Gain;                   /* Expression: -1/12
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T Saturation2_UpperSat;         /* Expression: 12
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T Saturation2_LowerSat;         /* Expression: 5
                                        * Referenced by: '<Root>/Saturation2'
                                        */
  real_T Gain1_Gain;                   /* Expression: 1/12
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Constant3_Value;              /* Expression: -360
                                        * Referenced by: '<S1>/Constant3'
                                        */
  real_T Constant2_Value_f;            /* Expression: 360
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T Constant1_Value_p;            /* Expression: -360
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 360
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T MATLABSystem1_SampleTime;     /* Expression: 0.005
                                        * Referenced by: '<S1>/MATLAB System1'
                                        */
  real_T MATLABSystem2_SampleTime;     /* Expression: 0.005
                                        * Referenced by: '<S1>/MATLAB System2'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S1>/Switch'
                                        */
  real_T Gain2_Gain_n;                 /* Expression:  0.10471975511966
                                        * Referenced by: '<S1>/Gain2'
                                        */
  real_T Constant_Value_f;             /* Expression: 0
                                        * Referenced by: '<S2>/Constant'
                                        */
  real_T Integrator_gainval;           /* Computed Parameter: Integrator_gainval
                                        * Referenced by: '<S8>/Integrator'
                                        */
  real_T Integrator_UpperSat;          /* Expression: antiwindupUpperLimit
                                        * Referenced by: '<S8>/Integrator'
                                        */
  real_T Integrator_LowerSat;          /* Expression: antiwindupLowerLimit
                                        * Referenced by: '<S8>/Integrator'
                                        */
  real_T Saturation_UpperSat;          /* Expression: windupUpperLimit
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: windupLowerLimit
                                        * Referenced by: '<S8>/Saturation'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S1>/Switch1'
                                        */
  real_T Gain3_Gain;                   /* Expression:  0.10471975511966
                                        * Referenced by: '<S1>/Gain3'
                                        */
  real_T Constant_Value_a;             /* Expression: 0
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T Integrator_gainval_c;       /* Computed Parameter: Integrator_gainval_c
                                      * Referenced by: '<S13>/Integrator'
                                      */
  real_T Integrator_UpperSat_c;        /* Expression: antiwindupUpperLimit
                                        * Referenced by: '<S13>/Integrator'
                                        */
  real_T Integrator_LowerSat_o;        /* Expression: antiwindupLowerLimit
                                        * Referenced by: '<S13>/Integrator'
                                        */
  real_T Saturation_UpperSat_n;        /* Expression: windupUpperLimit
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real_T Saturation_LowerSat_c;        /* Expression: windupLowerLimit
                                        * Referenced by: '<S13>/Saturation'
                                        */
  real_T Saturation1_UpperSat;         /* Expression: 12
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Saturation1_LowerSat;         /* Expression: -12
                                        * Referenced by: '<Root>/Saturation1'
                                        */
  real_T Switch_Threshold_b;           /* Expression: 0
                                        * Referenced by: '<Root>/Switch'
                                        */
  real_T Gain3_Gain_c;                 /* Expression: 255
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real_T Switch1_Threshold_n;          /* Expression: 0
                                        * Referenced by: '<Root>/Switch1'
                                        */
  int32_T Gain_Gain;                   /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<S1>/Gain'
                                        */
  int32_T Gain1_Gain_i;                /* Computed Parameter: Gain1_Gain_i
                                        * Referenced by: '<S1>/Gain1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_encoder_arduino_test_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_encoder_arduino_test_T encoder_arduino_test_P;

/* Block signals (default storage) */
extern B_encoder_arduino_test_T encoder_arduino_test_B;

/* Block states (default storage) */
extern DW_encoder_arduino_test_T encoder_arduino_test_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_encoder_arduino_test_T encoder_arduino_test_Y;

/* Model entry point functions */
extern void encoder_arduino_test_initialize(void);
extern void encoder_arduino_test_step(void);
extern void encoder_arduino_test_terminate(void);

/* Real-time Model object */
extern RT_MODEL_encoder_arduino_test_T *const encoder_arduino_test_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'encoder_arduino_test'
 * '<S1>'   : 'encoder_arduino_test/Subsystem'
 * '<S2>'   : 'encoder_arduino_test/Subsystem/Filtered Derivative (Discrete or Continuous)'
 * '<S3>'   : 'encoder_arduino_test/Subsystem/Filtered Derivative (Discrete or Continuous)1'
 * '<S4>'   : 'encoder_arduino_test/Subsystem/Filtered Derivative (Discrete or Continuous)/Enable//disable time constant'
 * '<S5>'   : 'encoder_arduino_test/Subsystem/Filtered Derivative (Discrete or Continuous)/Initialization'
 * '<S6>'   : 'encoder_arduino_test/Subsystem/Filtered Derivative (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S7>'   : 'encoder_arduino_test/Subsystem/Filtered Derivative (Discrete or Continuous)/Initialization/Init_u'
 * '<S8>'   : 'encoder_arduino_test/Subsystem/Filtered Derivative (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S9>'   : 'encoder_arduino_test/Subsystem/Filtered Derivative (Discrete or Continuous)1/Enable//disable time constant'
 * '<S10>'  : 'encoder_arduino_test/Subsystem/Filtered Derivative (Discrete or Continuous)1/Initialization'
 * '<S11>'  : 'encoder_arduino_test/Subsystem/Filtered Derivative (Discrete or Continuous)1/Integrator (Discrete or Continuous)'
 * '<S12>'  : 'encoder_arduino_test/Subsystem/Filtered Derivative (Discrete or Continuous)1/Initialization/Init_u'
 * '<S13>'  : 'encoder_arduino_test/Subsystem/Filtered Derivative (Discrete or Continuous)1/Integrator (Discrete or Continuous)/Discrete'
 */
#endif                                 /* RTW_HEADER_encoder_arduino_test_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
