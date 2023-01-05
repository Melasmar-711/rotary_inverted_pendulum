/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Tue Jan  3 09:58:17 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"
#include "untitled_dt.h"

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_untitled_T untitled_Y;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Forward declaration for local functions */
static void untitled_SystemCore_release(codertarget_arduinobase_inter_T *obj);
static void untitled_SystemCore_delete_b5(codertarget_arduinobase_inter_T *obj);
static void matlabCodegenHandle_matlabCo_b5(codertarget_arduinobase_inter_T *obj);
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_block_T *obj);
static void arduino_PWMOutput_set_pinNumber(codertarget_arduinobase_inter_T *obj,
  j_codertarget_arduinobase_int_T *iobj_0);
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

static void untitled_SystemCore_release(codertarget_arduinobase_inter_T *obj)
{
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_SetDutyCycle(obj->MW_PWM_HANDLE, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(obj->PinPWM);
    MW_PWM_Close(obj->MW_PWM_HANDLE);
  }
}

static void untitled_SystemCore_delete_b5(codertarget_arduinobase_inter_T *obj)
{
  untitled_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCo_b5(codertarget_arduinobase_inter_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    untitled_SystemCore_delete_b5(obj);
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
void untitled_step(void)
{
  codertarget_arduinobase_inter_T *obj;
  real_T rtb_Saturation;
  real_T rtb_Sign;
  uint8_T tmp;

  /* Gain: '<Root>/Gain' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant3'
   *  Sum: '<Root>/Sum'
   */
  rtb_Saturation = (((untitled_P.refernce_values[0] -
                      untitled_P.refernce_values[0]) * untitled_P.K_final[0] +
                     (untitled_P.refernce_values[1] -
                      untitled_P.refernce_values[1]) * untitled_P.K_final[1]) +
                    (untitled_P.refernce_values[2] - untitled_P.refernce_values
                     [2]) * untitled_P.K_final[2]) +
    (untitled_P.refernce_values[3] - untitled_P.refernce_values[3]) *
    untitled_P.K_final[3];

  /* Saturate: '<Root>/Saturation' incorporates:
   *  Gain: '<Root>/Gain'
   */
  if (rtb_Saturation > untitled_P.Saturation_UpperSat) {
    rtb_Saturation = untitled_P.Saturation_UpperSat;
  } else {
    if (rtb_Saturation < untitled_P.Saturation_LowerSat) {
      rtb_Saturation = untitled_P.Saturation_LowerSat;
    }
  }

  /* End of Saturate: '<Root>/Saturation' */

  /* Signum: '<Root>/Sign' */
  if (rtb_Saturation < 0.0) {
    rtb_Sign = -1.0;
  } else if (rtb_Saturation > 0.0) {
    rtb_Sign = 1.0;
  } else if (rtb_Saturation == 0.0) {
    rtb_Sign = 0.0;
  } else {
    rtb_Sign = (rtNaN);
  }

  /* End of Signum: '<Root>/Sign' */

  /* Switch: '<Root>/Switch' incorporates:
   *  Gain: '<Root>/Gain1'
   *  Gain: '<Root>/Gain2'
   *  Saturate: '<Root>/Saturation2'
   */
  if (rtb_Sign > untitled_P.Switch_Threshold) {
    /* Saturate: '<Root>/Saturation1' */
    if (rtb_Saturation > untitled_P.Saturation1_UpperSat) {
      rtb_Saturation = untitled_P.Saturation1_UpperSat;
    } else {
      if (rtb_Saturation < untitled_P.Saturation1_LowerSat) {
        rtb_Saturation = untitled_P.Saturation1_LowerSat;
      }
    }

    /* End of Saturate: '<Root>/Saturation1' */
    rtb_Saturation *= untitled_P.Gain1_Gain;
  } else {
    if (rtb_Saturation > untitled_P.Saturation2_UpperSat) {
      /* Saturate: '<Root>/Saturation2' */
      rtb_Saturation = untitled_P.Saturation2_UpperSat;
    } else {
      if (rtb_Saturation < untitled_P.Saturation2_LowerSat) {
        /* Saturate: '<Root>/Saturation2' */
        rtb_Saturation = untitled_P.Saturation2_LowerSat;
      }
    }

    rtb_Saturation *= untitled_P.Gain2_Gain;
  }

  /* End of Switch: '<Root>/Switch' */

  /* MATLABSystem: '<Root>/PWM' */
  obj = &untitled_DW.obj;
  obj->MW_PWM_HANDLE = MW_PWM_GetHandle(untitled_DW.obj.PinPWM);

  /* Gain: '<Root>/Gain3' */
  rtb_Saturation *= untitled_P.Gain3_Gain;

  /* MATLABSystem: '<Root>/PWM' */
  if (!(rtb_Saturation < 255.0)) {
    rtb_Saturation = 255.0;
  }

  if (!(rtb_Saturation > 0.0)) {
    rtb_Saturation = 0.0;
  }

  MW_PWM_SetDutyCycle(untitled_DW.obj.MW_PWM_HANDLE, rtb_Saturation);

  /* Switch: '<Root>/Switch1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  Constant: '<Root>/Constant2'
   */
  if (rtb_Sign > untitled_P.Switch1_Threshold) {
    rtb_Sign = untitled_P.Constant1_Value;
  } else {
    rtb_Sign = untitled_P.Constant2_Value;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* MATLABSystem: '<Root>/Digital Output' */
  rtb_Saturation = rt_roundd_snf(rtb_Sign);
  if (rtb_Saturation < 256.0) {
    if (rtb_Saturation >= 0.0) {
      tmp = (uint8_T)rtb_Saturation;
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
  writeDigitalPin(8, (uint8_T)!(rtb_Sign != 0.0));

  /* Outport: '<Root>/pendulum_angle' */
  untitled_Y.pendulum_angle = 0.0;

  /* Outport: '<Root>/pendulum_speed' */
  untitled_Y.pendulum_speed = 0.0;

  /* Outport: '<Root>/motor_angle' */
  untitled_Y.motor_angle = 0.0;

  /* Outport: '<Root>/motor_speed' */
  untitled_Y.motor_speed = 0.0;

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.2s, 0.0s] */
    rtExtModeUpload(0, (real_T)untitled_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(untitled_M)!=-1) &&
        !((rtmGetTFinal(untitled_M)-untitled_M->Timing.taskTime0) >
          untitled_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(untitled_M, "Simulation finished");
    }

    if (rtmGetStopRequested(untitled_M)) {
      rtmSetErrorStatus(untitled_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  untitled_M->Timing.taskTime0 =
    ((time_T)(++untitled_M->Timing.clockTick0)) * untitled_M->Timing.stepSize0;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(untitled_M, -1);
  untitled_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  untitled_M->Sizes.checksums[0] = (739715205U);
  untitled_M->Sizes.checksums[1] = (1964440623U);
  untitled_M->Sizes.checksums[2] = (601306640U);
  untitled_M->Sizes.checksums[3] = (3389210895U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[8];
    untitled_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(untitled_M->extModeInfo,
      &untitled_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(untitled_M->extModeInfo, untitled_M->Sizes.checksums);
    rteiSetTPtr(untitled_M->extModeInfo, rtmGetTPtr(untitled_M));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    untitled_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 17;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    codertarget_arduinobase_inter_T *obj;

    /* Start for MATLABSystem: '<Root>/PWM' */
    untitled_DW.obj.matlabCodegenIsDeleted = true;
    untitled_DW.obj.isInitialized = 0L;
    untitled_DW.obj.matlabCodegenIsDeleted = false;
    arduino_PWMOutput_set_pinNumber(&untitled_DW.obj, &untitled_DW.gobj_2);
    obj = &untitled_DW.obj;
    untitled_DW.obj.isSetupComplete = false;
    untitled_DW.obj.isInitialized = 1L;
    obj->MW_PWM_HANDLE = MW_PWM_Open(untitled_DW.obj.PinPWM, 0.0, 0.0);
    obj->MW_PWM_HANDLE = MW_PWM_GetHandle(untitled_DW.obj.PinPWM);
    MW_PWM_Start(untitled_DW.obj.MW_PWM_HANDLE);
    untitled_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output' */
    untitled_DW.obj_n.matlabCodegenIsDeleted = false;
    untitled_DW.obj_n.isInitialized = 1L;
    digitalIOSetup(7, 1);
    untitled_DW.obj_n.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output1' */
    untitled_DW.obj_g.matlabCodegenIsDeleted = false;
    untitled_DW.obj_g.isInitialized = 1L;
    digitalIOSetup(8, 1);
    untitled_DW.obj_g.isSetupComplete = true;
  }
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/PWM' */
  matlabCodegenHandle_matlabCo_b5(&untitled_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  matlabCodegenHandle_matlabCodeg(&untitled_DW.obj_n);

  /* Terminate for MATLABSystem: '<Root>/Digital Output1' */
  matlabCodegenHandle_matlabCodeg(&untitled_DW.obj_g);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
