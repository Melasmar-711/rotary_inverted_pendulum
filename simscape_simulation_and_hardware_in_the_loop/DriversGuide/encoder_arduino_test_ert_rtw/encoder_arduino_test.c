/*
 * File: encoder_arduino_test.c
 *
 * Code generated for Simulink model 'encoder_arduino_test'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Tue Jan  3 10:07:41 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "encoder_arduino_test.h"
#include "encoder_arduino_test_private.h"
#include "encoder_arduino_test_dt.h"

/* Block signals (default storage) */
B_encoder_arduino_test_T encoder_arduino_test_B;

/* Block states (default storage) */
DW_encoder_arduino_test_T encoder_arduino_test_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_encoder_arduino_test_T encoder_arduino_test_Y;

/* Real-time model */
RT_MODEL_encoder_arduino_test_T encoder_arduino_test_M_;
RT_MODEL_encoder_arduino_test_T *const encoder_arduino_test_M =
  &encoder_arduino_test_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabC_kv3(Encoder_arduino_encoder_ardui_T *obj);
static void encoder_ardu_SystemCore_release(codertarget_arduinobase_inter_T *obj);
static void encoder_ar_SystemCore_delete_kv(codertarget_arduinobase_inter_T *obj);
static void matlabCodegenHandle_matlabCo_kv(codertarget_arduinobase_inter_T *obj);
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_block_T *obj);
static void arduino_PWMOutput_set_pinNumber(codertarget_arduinobase_inter_T *obj,
  j_codertarget_arduinobase_int_T *iobj_0);
real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  real_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else {
    if (u1 < 0.0) {
      u1_0 = ceil(u1);
    } else {
      u1_0 = floor(u1);
    }

    if ((u1 != 0.0) && (u1 != u1_0)) {
      u1_0 = fabs(u0 / u1);
      if (!(fabs(u1_0 - floor(u1_0 + 0.5)) > DBL_EPSILON * u1_0)) {
        y = 0.0 * u0;
      } else {
        y = fmod(u0, u1);
      }
    } else {
      y = fmod(u0, u1);
    }
  }

  return y;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void matlabCodegenHandle_matlabC_kv3(Encoder_arduino_encoder_ardui_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void encoder_ardu_SystemCore_release(codertarget_arduinobase_inter_T *obj)
{
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_SetDutyCycle(obj->MW_PWM_HANDLE, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_Close(obj->MW_PWM_HANDLE);
  }
}

static void encoder_ar_SystemCore_delete_kv(codertarget_arduinobase_inter_T *obj)
{
  encoder_ardu_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCo_kv(codertarget_arduinobase_inter_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    encoder_ar_SystemCore_delete_kv(obj);
  }
}

static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_block_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void arduino_PWMOutput_set_pinNumber(codertarget_arduinobase_inter_T *obj,
  j_codertarget_arduinobase_int_T *iobj_0)
{
  iobj_0->AvailablePwmPinNames.f1 = '2';
  iobj_0->AvailablePwmPinNames.f2 = '3';
  iobj_0->AvailablePwmPinNames.f3 = '4';
  iobj_0->AvailablePwmPinNames.f4 = '5';
  iobj_0->AvailablePwmPinNames.f5 = '6';
  iobj_0->AvailablePwmPinNames.f6 = '7';
  iobj_0->AvailablePwmPinNames.f7 = '8';
  iobj_0->AvailablePwmPinNames.f8 = '9';
  iobj_0->AvailablePwmPinNames.f9[0] = '1';
  iobj_0->AvailablePwmPinNames.f9[1] = '0';
  iobj_0->AvailablePwmPinNames.f10[0] = '1';
  iobj_0->AvailablePwmPinNames.f10[1] = '1';
  iobj_0->AvailablePwmPinNames.f11[0] = '1';
  iobj_0->AvailablePwmPinNames.f11[1] = '2';
  iobj_0->AvailablePwmPinNames.f12[0] = '1';
  iobj_0->AvailablePwmPinNames.f12[1] = '3';
  obj->Hw = iobj_0;
  obj->PinPWM = 5UL;
}

/* Model step function */
void encoder_arduino_test_step(void)
{
  int32_T rtb_MATLABSystem1_0;
  codertarget_arduinobase_inter_T *obj;
  real_T rtb_Gain3;
  real_T rtb_Saturation1;
  real_T rtb_Sign_i;
  real_T rtb_Integrator_n;
  real_T rtb_Integrator;
  uint8_T tmp;

  /* MATLABSystem: '<S1>/MATLAB System' */
  if (encoder_arduino_test_DW.obj_p.SampleTime !=
      encoder_arduino_test_P.MATLABSystem_SampleTime) {
    encoder_arduino_test_DW.obj_p.SampleTime =
      encoder_arduino_test_P.MATLABSystem_SampleTime;
  }

  encoder_arduino_test_B.MATLABSystem = enc_output(0.0);

  /* End of MATLABSystem: '<S1>/MATLAB System' */

  /* Gain: '<S1>/Gain' */
  encoder_arduino_test_B.Gain = (real_T)encoder_arduino_test_P.Gain_Gain *
    2.3283064365386963E-10 * (real_T)encoder_arduino_test_B.MATLABSystem;

  /* Signum: '<S1>/Sign' */
  if (encoder_arduino_test_B.Gain < 0.0) {
    rtb_Sign_i = -1.0;
  } else if (encoder_arduino_test_B.Gain > 0.0) {
    rtb_Sign_i = 1.0;
  } else if (encoder_arduino_test_B.Gain == 0.0) {
    rtb_Sign_i = 0.0;
  } else {
    rtb_Sign_i = (rtNaN);
  }

  /* End of Signum: '<S1>/Sign' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   */
  if (rtb_Sign_i > encoder_arduino_test_P.Switch_Threshold) {
    rtb_Sign_i = encoder_arduino_test_P.Constant_Value;
  } else {
    rtb_Sign_i = encoder_arduino_test_P.Constant1_Value_p;
  }

  /* End of Switch: '<S1>/Switch' */

  /* Gain: '<S1>/Gain2' incorporates:
   *  Math: '<S1>/Rem'
   */
  encoder_arduino_test_B.Gain2 = encoder_arduino_test_P.Gain2_Gain_n *
    rt_remd_snf(encoder_arduino_test_B.Gain, rtb_Sign_i);

  /* Gain: '<S4>/Minimum sampling to time constant ratio' */
  rtb_Integrator = encoder_arduino_test_P.FilteredDerivativeDiscreteorC_f *
    encoder_arduino_test_B.Probe[0];

  /* MinMax: '<S4>/MinMax' incorporates:
   *  Constant: '<S4>/Time constant'
   */
  if ((!(rtb_Integrator > encoder_arduino_test_P.FilteredDerivativeDiscreteorC_d))
      && (!rtIsNaN(encoder_arduino_test_P.FilteredDerivativeDiscreteorC_d))) {
    rtb_Integrator = encoder_arduino_test_P.FilteredDerivativeDiscreteorC_d;
  }

  /* End of MinMax: '<S4>/MinMax' */

  /* DiscreteIntegrator: '<S8>/Integrator' incorporates:
   *  Constant: '<S2>/Constant'
   */
  if (encoder_arduino_test_DW.Integrator_IC_LOADING != 0) {
    encoder_arduino_test_DW.Integrator_DSTATE = encoder_arduino_test_B.Gain2;
    if (encoder_arduino_test_DW.Integrator_DSTATE >=
        encoder_arduino_test_P.Integrator_UpperSat) {
      encoder_arduino_test_DW.Integrator_DSTATE =
        encoder_arduino_test_P.Integrator_UpperSat;
    } else {
      if (encoder_arduino_test_DW.Integrator_DSTATE <=
          encoder_arduino_test_P.Integrator_LowerSat) {
        encoder_arduino_test_DW.Integrator_DSTATE =
          encoder_arduino_test_P.Integrator_LowerSat;
      }
    }
  }

  if ((encoder_arduino_test_P.Constant_Value_f != 0.0) ||
      (encoder_arduino_test_DW.Integrator_PrevResetState != 0)) {
    encoder_arduino_test_DW.Integrator_DSTATE = encoder_arduino_test_B.Gain2;
    if (encoder_arduino_test_DW.Integrator_DSTATE >=
        encoder_arduino_test_P.Integrator_UpperSat) {
      encoder_arduino_test_DW.Integrator_DSTATE =
        encoder_arduino_test_P.Integrator_UpperSat;
    } else {
      if (encoder_arduino_test_DW.Integrator_DSTATE <=
          encoder_arduino_test_P.Integrator_LowerSat) {
        encoder_arduino_test_DW.Integrator_DSTATE =
          encoder_arduino_test_P.Integrator_LowerSat;
      }
    }
  }

  if (encoder_arduino_test_DW.Integrator_DSTATE >=
      encoder_arduino_test_P.Integrator_UpperSat) {
    encoder_arduino_test_DW.Integrator_DSTATE =
      encoder_arduino_test_P.Integrator_UpperSat;
  } else {
    if (encoder_arduino_test_DW.Integrator_DSTATE <=
        encoder_arduino_test_P.Integrator_LowerSat) {
      encoder_arduino_test_DW.Integrator_DSTATE =
        encoder_arduino_test_P.Integrator_LowerSat;
    }
  }

  /* Saturate: '<S8>/Saturation' incorporates:
   *  DiscreteIntegrator: '<S8>/Integrator'
   */
  if (encoder_arduino_test_DW.Integrator_DSTATE >
      encoder_arduino_test_P.Saturation_UpperSat) {
    rtb_Sign_i = encoder_arduino_test_P.Saturation_UpperSat;
  } else if (encoder_arduino_test_DW.Integrator_DSTATE <
             encoder_arduino_test_P.Saturation_LowerSat) {
    rtb_Sign_i = encoder_arduino_test_P.Saturation_LowerSat;
  } else {
    rtb_Sign_i = encoder_arduino_test_DW.Integrator_DSTATE;
  }

  /* End of Saturate: '<S8>/Saturation' */

  /* Product: '<S2>/1//T' incorporates:
   *  Fcn: '<S4>/Avoid Divide by Zero'
   *  Sum: '<S2>/Sum1'
   */
  rtb_Integrator = 1.0 / ((real_T)(rtb_Integrator == 0.0) *
    2.2204460492503131e-16 + rtb_Integrator) * (encoder_arduino_test_B.Gain2 -
    rtb_Sign_i);

  /* Gain: '<S2>/Gain' */
  encoder_arduino_test_B.AB =
    encoder_arduino_test_P.FilteredDerivativeDiscreteor_kd * rtb_Integrator;

  /* Saturate: '<S2>/[A,B]' */
  if (encoder_arduino_test_B.AB >
      encoder_arduino_test_P.FilteredDerivativeDiscreteorC_k) {
    encoder_arduino_test_B.AB =
      encoder_arduino_test_P.FilteredDerivativeDiscreteorC_k;
  } else {
    if (encoder_arduino_test_B.AB <
        encoder_arduino_test_P.FilteredDerivativeDiscreteorCon) {
      encoder_arduino_test_B.AB =
        encoder_arduino_test_P.FilteredDerivativeDiscreteorCon;
    }
  }

  /* End of Saturate: '<S2>/[A,B]' */

  /* MATLABSystem: '<S1>/MATLAB System1' */
  if (encoder_arduino_test_DW.obj_h.SampleTime !=
      encoder_arduino_test_P.MATLABSystem1_SampleTime) {
    encoder_arduino_test_DW.obj_h.SampleTime =
      encoder_arduino_test_P.MATLABSystem1_SampleTime;
  }

  rtb_MATLABSystem1_0 = enc_output(0.0);

  /* Gain: '<S1>/Gain1' incorporates:
   *  MATLABSystem: '<S1>/MATLAB System1'
   */
  encoder_arduino_test_B.Gain1 = (real_T)encoder_arduino_test_P.Gain1_Gain_i *
    2.3283064365386963E-10 * (real_T)rtb_MATLABSystem1_0;

  /* Signum: '<S1>/Sign1' */
  if (encoder_arduino_test_B.Gain1 < 0.0) {
    rtb_Sign_i = -1.0;
  } else if (encoder_arduino_test_B.Gain1 > 0.0) {
    rtb_Sign_i = 1.0;
  } else if (encoder_arduino_test_B.Gain1 == 0.0) {
    rtb_Sign_i = 0.0;
  } else {
    rtb_Sign_i = (rtNaN);
  }

  /* End of Signum: '<S1>/Sign1' */

  /* Switch: '<S1>/Switch1' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   */
  if (rtb_Sign_i > encoder_arduino_test_P.Switch1_Threshold) {
    rtb_Sign_i = encoder_arduino_test_P.Constant2_Value_f;
  } else {
    rtb_Sign_i = encoder_arduino_test_P.Constant3_Value;
  }

  /* End of Switch: '<S1>/Switch1' */

  /* Gain: '<S1>/Gain3' incorporates:
   *  Math: '<S1>/Rem1'
   */
  rtb_Gain3 = encoder_arduino_test_P.Gain3_Gain * rt_remd_snf
    (encoder_arduino_test_B.Gain1, rtb_Sign_i);

  /* Gain: '<S9>/Minimum sampling to time constant ratio' */
  rtb_Integrator_n = encoder_arduino_test_P.FilteredDerivativeDiscreteorC_l *
    encoder_arduino_test_B.Probe_n[0];

  /* MinMax: '<S9>/MinMax' incorporates:
   *  Constant: '<S9>/Time constant'
   */
  if ((!(rtb_Integrator_n >
         encoder_arduino_test_P.FilteredDerivativeDiscreteorC_c)) && (!rtIsNaN
       (encoder_arduino_test_P.FilteredDerivativeDiscreteorC_c))) {
    rtb_Integrator_n = encoder_arduino_test_P.FilteredDerivativeDiscreteorC_c;
  }

  /* End of MinMax: '<S9>/MinMax' */

  /* DiscreteIntegrator: '<S13>/Integrator' incorporates:
   *  Constant: '<S3>/Constant'
   */
  if (encoder_arduino_test_DW.Integrator_IC_LOADING_e != 0) {
    encoder_arduino_test_DW.Integrator_DSTATE_o = rtb_Gain3;
    if (encoder_arduino_test_DW.Integrator_DSTATE_o >=
        encoder_arduino_test_P.Integrator_UpperSat_c) {
      encoder_arduino_test_DW.Integrator_DSTATE_o =
        encoder_arduino_test_P.Integrator_UpperSat_c;
    } else {
      if (encoder_arduino_test_DW.Integrator_DSTATE_o <=
          encoder_arduino_test_P.Integrator_LowerSat_o) {
        encoder_arduino_test_DW.Integrator_DSTATE_o =
          encoder_arduino_test_P.Integrator_LowerSat_o;
      }
    }
  }

  if ((encoder_arduino_test_P.Constant_Value_a != 0.0) ||
      (encoder_arduino_test_DW.Integrator_PrevResetState_e != 0)) {
    encoder_arduino_test_DW.Integrator_DSTATE_o = rtb_Gain3;
    if (encoder_arduino_test_DW.Integrator_DSTATE_o >=
        encoder_arduino_test_P.Integrator_UpperSat_c) {
      encoder_arduino_test_DW.Integrator_DSTATE_o =
        encoder_arduino_test_P.Integrator_UpperSat_c;
    } else {
      if (encoder_arduino_test_DW.Integrator_DSTATE_o <=
          encoder_arduino_test_P.Integrator_LowerSat_o) {
        encoder_arduino_test_DW.Integrator_DSTATE_o =
          encoder_arduino_test_P.Integrator_LowerSat_o;
      }
    }
  }

  if (encoder_arduino_test_DW.Integrator_DSTATE_o >=
      encoder_arduino_test_P.Integrator_UpperSat_c) {
    encoder_arduino_test_DW.Integrator_DSTATE_o =
      encoder_arduino_test_P.Integrator_UpperSat_c;
  } else {
    if (encoder_arduino_test_DW.Integrator_DSTATE_o <=
        encoder_arduino_test_P.Integrator_LowerSat_o) {
      encoder_arduino_test_DW.Integrator_DSTATE_o =
        encoder_arduino_test_P.Integrator_LowerSat_o;
    }
  }

  /* Saturate: '<S13>/Saturation' incorporates:
   *  DiscreteIntegrator: '<S13>/Integrator'
   */
  if (encoder_arduino_test_DW.Integrator_DSTATE_o >
      encoder_arduino_test_P.Saturation_UpperSat_n) {
    rtb_Sign_i = encoder_arduino_test_P.Saturation_UpperSat_n;
  } else if (encoder_arduino_test_DW.Integrator_DSTATE_o <
             encoder_arduino_test_P.Saturation_LowerSat_c) {
    rtb_Sign_i = encoder_arduino_test_P.Saturation_LowerSat_c;
  } else {
    rtb_Sign_i = encoder_arduino_test_DW.Integrator_DSTATE_o;
  }

  /* End of Saturate: '<S13>/Saturation' */

  /* Product: '<S3>/1//T' incorporates:
   *  Fcn: '<S9>/Avoid Divide by Zero'
   *  Sum: '<S3>/Sum1'
   */
  rtb_Integrator_n = 1.0 / ((real_T)(rtb_Integrator_n == 0.0) *
    2.2204460492503131e-16 + rtb_Integrator_n) * (rtb_Gain3 - rtb_Sign_i);

  /* Gain: '<S3>/Gain' */
  encoder_arduino_test_B.AB_e =
    encoder_arduino_test_P.FilteredDerivativeDiscreteorC_b * rtb_Integrator_n;

  /* Saturate: '<S3>/[A,B]' */
  if (encoder_arduino_test_B.AB_e >
      encoder_arduino_test_P.FilteredDerivativeDiscreteorC_e) {
    encoder_arduino_test_B.AB_e =
      encoder_arduino_test_P.FilteredDerivativeDiscreteorC_e;
  } else {
    if (encoder_arduino_test_B.AB_e <
        encoder_arduino_test_P.FilteredDerivativeDiscreteorC_n) {
      encoder_arduino_test_B.AB_e =
        encoder_arduino_test_P.FilteredDerivativeDiscreteorC_n;
    }
  }

  /* End of Saturate: '<S3>/[A,B]' */

  /* Gain: '<Root>/Gain' incorporates:
   *  Constant: '<Root>/Constant'
   *  Sum: '<Root>/Sum'
   */
  rtb_Saturation1 = (((encoder_arduino_test_P.refernce_values[0] - rtb_Gain3) *
                      encoder_arduino_test_P.K_final[0] +
                      (encoder_arduino_test_P.refernce_values[1] -
                       encoder_arduino_test_B.AB_e) *
                      encoder_arduino_test_P.K_final[1]) +
                     (encoder_arduino_test_P.refernce_values[2] -
                      encoder_arduino_test_B.Gain2) *
                     encoder_arduino_test_P.K_final[2]) +
    (encoder_arduino_test_P.refernce_values[3] - encoder_arduino_test_B.AB) *
    encoder_arduino_test_P.K_final[3];

  /* Saturate: '<Root>/Saturation1' incorporates:
   *  Gain: '<Root>/Gain'
   */
  if (rtb_Saturation1 > encoder_arduino_test_P.Saturation1_UpperSat) {
    rtb_Saturation1 = encoder_arduino_test_P.Saturation1_UpperSat;
  } else {
    if (rtb_Saturation1 < encoder_arduino_test_P.Saturation1_LowerSat) {
      rtb_Saturation1 = encoder_arduino_test_P.Saturation1_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation1' */

  /* Signum: '<Root>/Sign' */
  if (rtb_Saturation1 < 0.0) {
    rtb_Sign_i = -1.0;
  } else if (rtb_Saturation1 > 0.0) {
    rtb_Sign_i = 1.0;
  } else if (rtb_Saturation1 == 0.0) {
    rtb_Sign_i = 0.0;
  } else {
    rtb_Sign_i = (rtNaN);
  }

  /* End of Signum: '<Root>/Sign' */

  /* Switch: '<Root>/Switch' incorporates:
   *  Gain: '<Root>/Gain1'
   *  Gain: '<Root>/Gain2'
   *  Saturate: '<Root>/Saturation3'
   */
  if (rtb_Sign_i > encoder_arduino_test_P.Switch_Threshold_b) {
    /* Saturate: '<Root>/Saturation2' */
    if (rtb_Saturation1 > encoder_arduino_test_P.Saturation2_UpperSat) {
      rtb_Saturation1 = encoder_arduino_test_P.Saturation2_UpperSat;
    } else {
      if (rtb_Saturation1 < encoder_arduino_test_P.Saturation2_LowerSat) {
        rtb_Saturation1 = encoder_arduino_test_P.Saturation2_LowerSat;
      }
    }

    /* End of Saturate: '<Root>/Saturation2' */
    rtb_Saturation1 *= encoder_arduino_test_P.Gain1_Gain;
  } else {
    if (rtb_Saturation1 > encoder_arduino_test_P.Saturation3_UpperSat) {
      /* Saturate: '<Root>/Saturation3' */
      rtb_Saturation1 = encoder_arduino_test_P.Saturation3_UpperSat;
    } else {
      if (rtb_Saturation1 < encoder_arduino_test_P.Saturation3_LowerSat) {
        /* Saturate: '<Root>/Saturation3' */
        rtb_Saturation1 = encoder_arduino_test_P.Saturation3_LowerSat;
      }
    }

    rtb_Saturation1 *= encoder_arduino_test_P.Gain2_Gain;
  }

  /* End of Switch: '<Root>/Switch' */

  /* MATLABSystem: '<Root>/PWM1' */
  obj = &encoder_arduino_test_DW.obj;
  obj->MW_PWM_HANDLE = MW_PWM_GetHandle(encoder_arduino_test_DW.obj.PinPWM);

  /* Gain: '<Root>/Gain3' */
  rtb_Saturation1 *= encoder_arduino_test_P.Gain3_Gain_c;

  /* MATLABSystem: '<Root>/PWM1' */
  if (!(rtb_Saturation1 < 255.0)) {
    rtb_Saturation1 = 255.0;
  }

  if (!(rtb_Saturation1 > 0.0)) {
    rtb_Saturation1 = 0.0;
  }

  MW_PWM_SetDutyCycle(encoder_arduino_test_DW.obj.MW_PWM_HANDLE, rtb_Saturation1);

  /* Switch: '<Root>/Switch1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   */
  if (rtb_Sign_i > encoder_arduino_test_P.Switch1_Threshold_n) {
    rtb_Saturation1 = encoder_arduino_test_P.Constant1_Value;
  } else {
    rtb_Saturation1 = encoder_arduino_test_P.Constant2_Value;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* MATLABSystem: '<Root>/Digital Output' */
  rtb_Sign_i = rt_roundd_snf(rtb_Saturation1);
  if (rtb_Sign_i < 256.0) {
    if (rtb_Sign_i >= 0.0) {
      tmp = (uint8_T)rtb_Sign_i;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  writeDigitalPin(7, tmp);

  /* End of MATLABSystem: '<Root>/Digital Output' */

  /* MATLABSystem: '<Root>/Digital Output1' incorporates:
   *  Logic: '<Root>/NOT'
   */
  writeDigitalPin(8, (uint8_T)!(rtb_Saturation1 != 0.0));

  /* Outport: '<Root>/motor_speed' */
  encoder_arduino_test_Y.motor_speed = encoder_arduino_test_B.AB_e;

  /* Outport: '<Root>/motor_angle' */
  encoder_arduino_test_Y.motor_angle = rtb_Gain3;

  /* Outport: '<Root>/pendulum_speed' */
  encoder_arduino_test_Y.pendulum_speed = encoder_arduino_test_B.AB;

  /* Outport: '<Root>/pendulum_angle' */
  encoder_arduino_test_Y.pendulum_angle = encoder_arduino_test_B.Gain2;

  /* Update for DiscreteIntegrator: '<S8>/Integrator' incorporates:
   *  Constant: '<S2>/Constant'
   */
  encoder_arduino_test_DW.Integrator_IC_LOADING = 0U;
  if (encoder_arduino_test_P.Constant_Value_f == 0.0) {
    encoder_arduino_test_DW.Integrator_DSTATE +=
      encoder_arduino_test_P.Integrator_gainval * rtb_Integrator;
    if (encoder_arduino_test_DW.Integrator_DSTATE >=
        encoder_arduino_test_P.Integrator_UpperSat) {
      encoder_arduino_test_DW.Integrator_DSTATE =
        encoder_arduino_test_P.Integrator_UpperSat;
    } else {
      if (encoder_arduino_test_DW.Integrator_DSTATE <=
          encoder_arduino_test_P.Integrator_LowerSat) {
        encoder_arduino_test_DW.Integrator_DSTATE =
          encoder_arduino_test_P.Integrator_LowerSat;
      }
    }
  }

  if (encoder_arduino_test_P.Constant_Value_f > 0.0) {
    encoder_arduino_test_DW.Integrator_PrevResetState = 1;
  } else if (encoder_arduino_test_P.Constant_Value_f < 0.0) {
    encoder_arduino_test_DW.Integrator_PrevResetState = -1;
  } else if (encoder_arduino_test_P.Constant_Value_f == 0.0) {
    encoder_arduino_test_DW.Integrator_PrevResetState = 0;
  } else {
    encoder_arduino_test_DW.Integrator_PrevResetState = 2;
  }

  /* End of Update for DiscreteIntegrator: '<S8>/Integrator' */

  /* Update for DiscreteIntegrator: '<S13>/Integrator' incorporates:
   *  Constant: '<S3>/Constant'
   */
  encoder_arduino_test_DW.Integrator_IC_LOADING_e = 0U;
  if (encoder_arduino_test_P.Constant_Value_a == 0.0) {
    encoder_arduino_test_DW.Integrator_DSTATE_o +=
      encoder_arduino_test_P.Integrator_gainval_c * rtb_Integrator_n;
    if (encoder_arduino_test_DW.Integrator_DSTATE_o >=
        encoder_arduino_test_P.Integrator_UpperSat_c) {
      encoder_arduino_test_DW.Integrator_DSTATE_o =
        encoder_arduino_test_P.Integrator_UpperSat_c;
    } else {
      if (encoder_arduino_test_DW.Integrator_DSTATE_o <=
          encoder_arduino_test_P.Integrator_LowerSat_o) {
        encoder_arduino_test_DW.Integrator_DSTATE_o =
          encoder_arduino_test_P.Integrator_LowerSat_o;
      }
    }
  }

  if (encoder_arduino_test_P.Constant_Value_a > 0.0) {
    encoder_arduino_test_DW.Integrator_PrevResetState_e = 1;
  } else if (encoder_arduino_test_P.Constant_Value_a < 0.0) {
    encoder_arduino_test_DW.Integrator_PrevResetState_e = -1;
  } else if (encoder_arduino_test_P.Constant_Value_a == 0.0) {
    encoder_arduino_test_DW.Integrator_PrevResetState_e = 0;
  } else {
    encoder_arduino_test_DW.Integrator_PrevResetState_e = 2;
  }

  /* End of Update for DiscreteIntegrator: '<S13>/Integrator' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.005s, 0.0s] */
    rtExtModeUpload(0, (real_T)encoder_arduino_test_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.005s, 0.0s] */
    if ((rtmGetTFinal(encoder_arduino_test_M)!=-1) &&
        !((rtmGetTFinal(encoder_arduino_test_M)-
           encoder_arduino_test_M->Timing.taskTime0) >
          encoder_arduino_test_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(encoder_arduino_test_M, "Simulation finished");
    }

    if (rtmGetStopRequested(encoder_arduino_test_M)) {
      rtmSetErrorStatus(encoder_arduino_test_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  encoder_arduino_test_M->Timing.taskTime0 =
    ((time_T)(++encoder_arduino_test_M->Timing.clockTick0)) *
    encoder_arduino_test_M->Timing.stepSize0;
}

/* Model initialize function */
void encoder_arduino_test_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  encoder_arduino_test_P.FilteredDerivativeDiscreteorCon = rtMinusInf;
  encoder_arduino_test_P.FilteredDerivativeDiscreteorC_n = rtMinusInf;
  encoder_arduino_test_P.FilteredDerivativeDiscreteorC_k = rtInf;
  encoder_arduino_test_P.FilteredDerivativeDiscreteorC_e = rtInf;
  encoder_arduino_test_P.Integrator_UpperSat = rtInf;
  encoder_arduino_test_P.Integrator_LowerSat = rtMinusInf;
  encoder_arduino_test_P.Saturation_UpperSat = rtInf;
  encoder_arduino_test_P.Saturation_LowerSat = rtMinusInf;
  encoder_arduino_test_P.Integrator_UpperSat_c = rtInf;
  encoder_arduino_test_P.Integrator_LowerSat_o = rtMinusInf;
  encoder_arduino_test_P.Saturation_UpperSat_n = rtInf;
  encoder_arduino_test_P.Saturation_LowerSat_c = rtMinusInf;
  rtmSetTFinal(encoder_arduino_test_M, 10.0);
  encoder_arduino_test_M->Timing.stepSize0 = 0.005;

  /* External mode info */
  encoder_arduino_test_M->Sizes.checksums[0] = (2348332444U);
  encoder_arduino_test_M->Sizes.checksums[1] = (1122250824U);
  encoder_arduino_test_M->Sizes.checksums[2] = (2288700056U);
  encoder_arduino_test_M->Sizes.checksums[3] = (324912368U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[14];
    encoder_arduino_test_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
    systemRan[11] = &rtAlwaysEnabled;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(encoder_arduino_test_M->extModeInfo,
      &encoder_arduino_test_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(encoder_arduino_test_M->extModeInfo,
                        encoder_arduino_test_M->Sizes.checksums);
    rteiSetTPtr(encoder_arduino_test_M->extModeInfo, rtmGetTPtr
                (encoder_arduino_test_M));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    encoder_arduino_test_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 19;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    codertarget_arduinobase_inter_T *obj;

    /* Start for MATLABSystem: '<S1>/MATLAB System' */
    encoder_arduino_test_DW.obj_p.matlabCodegenIsDeleted = false;
    encoder_arduino_test_DW.obj_p.SampleTime =
      encoder_arduino_test_P.MATLABSystem_SampleTime;
    encoder_arduino_test_DW.obj_p.isInitialized = 1L;
    enc_init(0.0, 2.0, 3.0);
    encoder_arduino_test_DW.obj_p.isSetupComplete = true;

    /* Start for Probe: '<S4>/Probe' */
    encoder_arduino_test_B.Probe[0] = 0.005;
    encoder_arduino_test_B.Probe[1] = 0.0;

    /* Start for MATLABSystem: '<S1>/MATLAB System1' */
    encoder_arduino_test_DW.obj_h.matlabCodegenIsDeleted = false;
    encoder_arduino_test_DW.obj_h.SampleTime =
      encoder_arduino_test_P.MATLABSystem1_SampleTime;
    encoder_arduino_test_DW.obj_h.isInitialized = 1L;
    enc_init(0.0, 20.0, 21.0);
    encoder_arduino_test_DW.obj_h.isSetupComplete = true;

    /* Start for Probe: '<S9>/Probe' */
    encoder_arduino_test_B.Probe_n[0] = 0.005;
    encoder_arduino_test_B.Probe_n[1] = 0.0;

    /* Start for MATLABSystem: '<Root>/PWM1' */
    encoder_arduino_test_DW.obj.matlabCodegenIsDeleted = true;
    encoder_arduino_test_DW.obj.isInitialized = 0L;
    encoder_arduino_test_DW.obj.matlabCodegenIsDeleted = false;
    arduino_PWMOutput_set_pinNumber(&encoder_arduino_test_DW.obj,
      &encoder_arduino_test_DW.gobj_2);
    obj = &encoder_arduino_test_DW.obj;
    encoder_arduino_test_DW.obj.isSetupComplete = false;
    encoder_arduino_test_DW.obj.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(encoder_arduino_test_DW.obj.PinPWM, 0.0,
      0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(encoder_arduino_test_DW.obj.PinPWM);
    MW_PWM_Start(encoder_arduino_test_DW.obj.MW_PWM_HANDLE);
    encoder_arduino_test_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output' */
    encoder_arduino_test_DW.obj_i.matlabCodegenIsDeleted = false;
    encoder_arduino_test_DW.obj_i.isInitialized = 1L;
    digitalIOSetup(7, 1);
    encoder_arduino_test_DW.obj_i.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output1' */
    encoder_arduino_test_DW.obj_ix.matlabCodegenIsDeleted = false;
    encoder_arduino_test_DW.obj_ix.isInitialized = 1L;
    digitalIOSetup(8, 1);
    encoder_arduino_test_DW.obj_ix.isSetupComplete = true;

    /* InitializeConditions for DiscreteIntegrator: '<S8>/Integrator' */
    encoder_arduino_test_DW.Integrator_IC_LOADING = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S13>/Integrator' */
    encoder_arduino_test_DW.Integrator_IC_LOADING_e = 1U;
  }
}

/* Model terminate function */
void encoder_arduino_test_terminate(void)
{
  /* Terminate for MATLABSystem: '<S1>/MATLAB System' */
  matlabCodegenHandle_matlabC_kv3(&encoder_arduino_test_DW.obj_p);

  /* Terminate for MATLABSystem: '<S1>/MATLAB System1' */
  matlabCodegenHandle_matlabC_kv3(&encoder_arduino_test_DW.obj_h);

  /* Terminate for MATLABSystem: '<Root>/PWM1' */
  matlabCodegenHandle_matlabCo_kv(&encoder_arduino_test_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  matlabCodegenHandle_matlabCodeg(&encoder_arduino_test_DW.obj_i);

  /* Terminate for MATLABSystem: '<Root>/Digital Output1' */
  matlabCodegenHandle_matlabCodeg(&encoder_arduino_test_DW.obj_ix);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
