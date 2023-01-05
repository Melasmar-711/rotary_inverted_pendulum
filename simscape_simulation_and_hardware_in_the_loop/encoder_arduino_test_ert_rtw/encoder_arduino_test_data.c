/*
 * File: encoder_arduino_test_data.c
 *
 * Code generated for Simulink model 'encoder_arduino_test'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Tue Jan  3 13:38:11 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "encoder_arduino_test.h"
#include "encoder_arduino_test_private.h"

/* Block parameters (default storage) */
P_encoder_arduino_test_T encoder_arduino_test_P = {
  /* Variable: K_final
   * Referenced by: '<Root>/Gain'
   */
  { -0.0912870929181826, -0.12589594603191312, 2.6803190834827566,
    0.16294692752347331, 0.45297971570595674 },

  /* Variable: refernce_values
   * Referenced by: '<Root>/Constant'
   */
  { 0.0, 0.0, 0.0, 0.0 },

  /* Mask Parameter: FilteredDerivativeDiscreteorCon
   * Referenced by: '<S2>/[A,B]'
   */
  0.0,

  /* Mask Parameter: FilteredDerivativeDiscreteorC_n
   * Referenced by: '<S3>/[A,B]'
   */
  0.0,

  /* Mask Parameter: FilteredDerivativeDiscreteorC_k
   * Referenced by: '<S2>/[A,B]'
   */
  0.0,

  /* Mask Parameter: FilteredDerivativeDiscreteorC_e
   * Referenced by: '<S3>/[A,B]'
   */
  0.0,

  /* Mask Parameter: FilteredDerivativeDiscreteor_kd
   * Referenced by: '<S2>/Gain'
   */
  1.0,

  /* Mask Parameter: FilteredDerivativeDiscreteorC_b
   * Referenced by: '<S3>/Gain'
   */
  1.0,

  /* Mask Parameter: FilteredDerivativeDiscreteorC_d
   * Referenced by: '<S4>/Time constant'
   */
  0.1,

  /* Mask Parameter: FilteredDerivativeDiscreteorC_c
   * Referenced by: '<S9>/Time constant'
   */
  0.1,

  /* Mask Parameter: FilteredDerivativeDiscreteorC_f
   * Referenced by: '<S4>/Minimum sampling to time constant ratio'
   */
  10.0,

  /* Mask Parameter: FilteredDerivativeDiscreteorC_l
   * Referenced by: '<S9>/Minimum sampling to time constant ratio'
   */
  10.0,

  /* Expression: 0
   * Referenced by: '<Root>/Constant2'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant1'
   */
  1.0,

  /* Expression: -5
   * Referenced by: '<Root>/Saturation2'
   */
  -5.0,

  /* Expression: -12
   * Referenced by: '<Root>/Saturation2'
   */
  -12.0,

  /* Expression: -1/12
   * Referenced by: '<Root>/Gain2'
   */
  -0.083333333333333329,

  /* Expression: 12
   * Referenced by: '<Root>/Saturation1'
   */
  12.0,

  /* Expression: 5
   * Referenced by: '<Root>/Saturation1'
   */
  5.0,

  /* Expression: 1/12
   * Referenced by: '<Root>/Gain1'
   */
  0.083333333333333329,

  /* Expression: -360
   * Referenced by: '<S1>/Constant3'
   */
  -360.0,

  /* Expression: 360
   * Referenced by: '<S1>/Constant2'
   */
  360.0,

  /* Expression: -360
   * Referenced by: '<S1>/Constant1'
   */
  -360.0,

  /* Expression: 360
   * Referenced by: '<S1>/Constant'
   */
  360.0,

  /* Expression: 0.005
   * Referenced by: '<S1>/MATLAB System1'
   */
  0.005,

  /* Expression: 0.005
   * Referenced by: '<S1>/MATLAB System'
   */
  0.005,

  /* Expression: 0
   * Referenced by: '<S1>/Switch'
   */
  0.0,

  /* Expression:  0.10471975511966
   * Referenced by: '<S1>/Gain2'
   */
  0.10471975511966,

  /* Expression: 0
   * Referenced by: '<S2>/Constant'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval
   * Referenced by: '<S8>/Integrator'
   */
  0.005,

  /* Expression: antiwindupUpperLimit
   * Referenced by: '<S8>/Integrator'
   */
  0.0,

  /* Expression: antiwindupLowerLimit
   * Referenced by: '<S8>/Integrator'
   */
  0.0,

  /* Expression: windupUpperLimit
   * Referenced by: '<S8>/Saturation'
   */
  0.0,

  /* Expression: windupLowerLimit
   * Referenced by: '<S8>/Saturation'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Switch1'
   */
  0.0,

  /* Expression:  0.10471975511966
   * Referenced by: '<S1>/Gain3'
   */
  0.10471975511966,

  /* Expression: 0
   * Referenced by: '<S3>/Constant'
   */
  0.0,

  /* Computed Parameter: Integrator_gainval_c
   * Referenced by: '<S13>/Integrator'
   */
  0.005,

  /* Expression: antiwindupUpperLimit
   * Referenced by: '<S13>/Integrator'
   */
  0.0,

  /* Expression: antiwindupLowerLimit
   * Referenced by: '<S13>/Integrator'
   */
  0.0,

  /* Expression: windupUpperLimit
   * Referenced by: '<S13>/Saturation'
   */
  0.0,

  /* Expression: windupLowerLimit
   * Referenced by: '<S13>/Saturation'
   */
  0.0,

  /* Expression: 12
   * Referenced by: '<Root>/Saturation'
   */
  12.0,

  /* Expression: -12
   * Referenced by: '<Root>/Saturation'
   */
  -12.0,

  /* Expression: 0
   * Referenced by: '<Root>/Switch'
   */
  0.0,

  /* Expression: 255
   * Referenced by: '<Root>/Gain3'
   */
  255.0,

  /* Expression: 0
   * Referenced by: '<Root>/Switch1'
   */
  0.0,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S1>/Gain'
   */
  1073741824,

  /* Computed Parameter: Gain1_Gain_i
   * Referenced by: '<S1>/Gain1'
   */
  1073741824
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
