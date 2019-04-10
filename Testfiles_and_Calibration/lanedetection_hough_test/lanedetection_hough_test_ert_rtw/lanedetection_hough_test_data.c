/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: lanedetection_hough_test_data.c
 *
 * Code generated for Simulink model 'lanedetection_hough_test'.
 *
 * Model version                  : 1.28
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Wed Apr 10 14:46:09 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "lanedetection_hough_test.h"
#include "lanedetection_hough_test_private.h"

/* Block parameters (default storage) */
P_lanedetection_hough_test_T lanedetection_hough_test_P = {
  /* Mask Parameter: DrawShapes_lineWidth
   * Referenced by: '<Root>/Draw Shapes'
   */
  1,

  /* Mask Parameter: FindLocalMaxima_threshold
   * Referenced by: '<Root>/Find Local Maxima'
   */
  10.0F,

  /* Mask Parameter: DrawShapes_color
   * Referenced by: '<Root>/Draw Shapes'
   */
  { 0U, 255U, 0U },

  /* Computed Parameter: Threshold_Value
   * Referenced by: '<Root>/Threshold'
   */
  40U
};

/* Constant parameters (default storage) */
const ConstP_lanedetection_hough_te_T lanedetection_hough_test_ConstP = {
  /* Computed Parameter: HoughTransform_SINE_TABLE_RTP
   * Referenced by: '<Root>/Hough Transform'
   */
  { -1.0F, -0.99984771F, -0.999390841F, -0.99862951F, -0.997564077F,
    -0.99619472F, -0.994521916F, -0.992546141F, -0.990268052F, -0.987688363F,
    -0.98480773F, -0.981627166F, -0.978147626F, -0.974370062F, -0.970295727F,
    -0.965925813F, -0.96126169F, -0.956304729F, -0.95105654F, -0.945518553F,
    -0.939692616F, -0.933580399F, -0.927183867F, -0.920504868F, -0.91354543F,
    -0.906307817F, -0.898794055F, -0.891006529F, -0.882947564F, -0.874619722F,
    -0.866025388F, -0.857167304F, -0.848048091F, -0.838670552F, -0.829037547F,
    -0.819152057F, -0.809017F, -0.798635483F, -0.788010776F, -0.777146F,
    -0.766044438F, -0.754709601F, -0.74314481F, -0.7313537F, -0.719339788F,
    -0.707106769F, -0.694658399F, -0.681998372F, -0.669130623F, -0.656059F,
    -0.642787635F, -0.629320383F, -0.615661502F, -0.601815045F, -0.587785244F,
    -0.57357645F, -0.559192896F, -0.544639051F, -0.529919267F, -0.515038073F,
    -0.5F, -0.484809607F, -0.469471574F, -0.453990489F, -0.438371152F,
    -0.42261827F, -0.406736642F, -0.390731126F, -0.37460658F, -0.35836795F,
    -0.342020154F, -0.325568169F, -0.309017F, -0.29237169F, -0.275637358F,
    -0.258819044F, -0.241921902F, -0.224951059F, -0.207911685F, -0.190809F,
    -0.173648179F, -0.156434461F, -0.139173105F, -0.121869341F, -0.104528464F,
    -0.0871557444F, -0.0697564706F, -0.0523359552F, -0.0348994955F,
    -0.0174524058F, 0.0F },

  /* Computed Parameter: HoughTransform_FIRSTRHO_RTP
   * Referenced by: '<Root>/Hough Transform'
   */
  -199.0F,

  /* Expression: devName
   * Referenced by: '<Root>/V4L2 Video Capture'
   */
  { 47U, 100U, 101U, 118U, 47U, 118U, 105U, 100U, 101U, 111U, 48U, 0U }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */