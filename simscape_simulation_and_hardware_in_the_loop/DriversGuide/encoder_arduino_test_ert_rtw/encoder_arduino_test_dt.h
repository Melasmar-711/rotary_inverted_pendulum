/*
 * encoder_arduino_test_dt.h
 *
 * Code generation for model "encoder_arduino_test".
 *
 * Model version              : 1.7
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Tue Jan  3 10:07:41 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(int32_T),
  sizeof(codertarget_arduinobase_block_T),
  sizeof(codertarget_arduinobase_inter_T),
  sizeof(j_codertarget_arduinobase_int_T),
  sizeof(Encoder_arduino_encoder_ardui_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "int32_T",
  "codertarget_arduinobase_block_T",
  "codertarget_arduinobase_inter_T",
  "j_codertarget_arduinobase_int_T",
  "Encoder_arduino_encoder_ardui_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&encoder_arduino_test_B.Gain), 0, 0, 6 },

  { (char_T *)(&encoder_arduino_test_B.MATLABSystem), 6, 0, 1 }
  ,

  { (char_T *)(&encoder_arduino_test_DW.obj), 16, 0, 1 },

  { (char_T *)(&encoder_arduino_test_DW.obj_p), 18, 0, 2 },

  { (char_T *)(&encoder_arduino_test_DW.gobj_1), 17, 0, 4 },

  { (char_T *)(&encoder_arduino_test_DW.obj_i), 15, 0, 2 },

  { (char_T *)(&encoder_arduino_test_DW.Integrator_DSTATE), 0, 0, 2 },

  { (char_T *)(&encoder_arduino_test_DW.Scope2_PWORK.LoggedData), 11, 0, 3 },

  { (char_T *)(&encoder_arduino_test_DW.Integrator_PrevResetState), 2, 0, 2 },

  { (char_T *)(&encoder_arduino_test_DW.Integrator_IC_LOADING), 3, 0, 2 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  10U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&encoder_arduino_test_P.K_final[0]), 0, 0, 54 },

  { (char_T *)(&encoder_arduino_test_P.Gain_Gain), 14, 0, 2 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  2U,
  rtPTransitions
};

/* [EOF] encoder_arduino_test_dt.h */
