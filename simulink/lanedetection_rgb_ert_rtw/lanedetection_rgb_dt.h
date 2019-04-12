/*
 * lanedetection_rgb_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "lanedetection_rgb".
 *
 * Model version              : 1.508
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Fri Apr 12 17:03:12 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
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
  sizeof(int8_T),
  sizeof(codertarget_linux_blocks_SDLV_T),
  sizeof(int32_T),
  sizeof(int32_T),
  sizeof(int16_T),
  sizeof(int16_T)
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
  "int8_T",
  "codertarget_linux_blocks_SDLV_T",
  "int32_T",
  "int32_T",
  "int16_T",
  "int16_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&lanedetection_rgb_B.HoughTransform_o1[0]), 1, 0, 14670 },

  { (char_T *)(&lanedetection_rgb_B.HoughTransform_o2[0]), 1, 0, 253 },

  { (char_T *)(&lanedetection_rgb_B.Transpose[0]), 8, 0, 44240 },

  { (char_T *)(&lanedetection_rgb_B.FindLocalMaxima_o2), 1, 0, 5 },

  { (char_T *)(&lanedetection_rgb_B.HoughLines[0]), 6, 0, 8 },

  { (char_T *)(&lanedetection_rgb_B.V4L2VideoCapture_o1[0]), 3, 0, 296760 }
  ,

  { (char_T *)(&lanedetection_rgb_DW.obj), 15, 0, 1 },

  { (char_T *)(&lanedetection_rgb_DW.FindLocalMaxima_TEMP_IN_DWORKS[0]), 1, 0,
    14670 },

  { (char_T *)(&lanedetection_rgb_DW.EdgeDetection_VO_DW[0]), 6, 0, 108 },

  { (char_T *)(&lanedetection_rgb_DW.ColorSpaceConversion_DWORK1[0]), 3, 0,
    22120 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  10U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&lanedetection_rgb_P.DrawShapes_lineWidth), 6, 0, 1 },

  { (char_T *)(&lanedetection_rgb_P.FindLocalMaxima_threshold), 1, 0, 1 },

  { (char_T *)(&lanedetection_rgb_P.DrawShapes_color[0]), 3, 0, 4 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  3U,
  rtPTransitions
};

/* [EOF] lanedetection_rgb_dt.h */
