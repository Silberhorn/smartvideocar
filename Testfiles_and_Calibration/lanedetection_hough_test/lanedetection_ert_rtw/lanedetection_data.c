/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: lanedetection_data.c
 *
 * Code generated for Simulink model 'lanedetection'.
 *
 * Model version                  : 1.212
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Thu Apr 11 10:22:41 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "lanedetection.h"
#include "lanedetection_private.h"

/* Block parameters (default storage) */
P_lanedetection_T lanedetection_P = {
  /* Mask Parameter: DrawShapes_lineWidth
   * Referenced by: '<Root>/Draw Shapes'
   */
  2,

  /* Mask Parameter: FindLocalMaxima_threshold
   * Referenced by: '<Root>/Find Local Maxima'
   */
  10.0F,

  /* Mask Parameter: DrawShapes_color
   * Referenced by: '<Root>/Draw Shapes'
   */
  { 255U, 0U, 0U },

  /* Computed Parameter: Threshold_Value
   * Referenced by: '<Root>/Threshold'
   */
  60U
};

/* Constant parameters (default storage) */
const ConstP_lanedetection_T lanedetection_ConstP = {
  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<Root>/Resize'
   *   '<Root>/Resize1'
   */
  { 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11,
    11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20,
    21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30,
    30, 31, 31, 32, 32, 33, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 39,
    40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45, 46, 46, 47, 47, 48, 48, 49,
    49, 50, 50, 51, 51, 52, 52, 53, 53, 54, 54, 55, 55, 56, 56, 57, 57, 58, 58,
    59, 59, 60, 60, 61, 61, 62, 62, 63, 63, 64, 64, 65, 65, 66, 66, 67, 67, 68,
    68, 69, 69, 70, 70, 71, 71, 72, 72, 73, 73, 74, 74, 75, 75, 76, 76, 77, 77,
    78, 78, 79, 79, 80, 80, 81, 81, 82, 82, 83, 83, 84, 84, 85, 85, 86, 86, 87,
    87, 88, 88, 89, 89, 90, 90, 91, 91, 92, 92, 93, 93, 94, 94, 95, 95, 96, 96,
    97, 97, 98, 98, 99, 99, 100, 100, 101, 101, 102, 102, 103, 103, 104, 104,
    105, 105, 106, 106, 107, 107, 108, 108, 109, 109, 110, 110, 111, 111, 112,
    112, 113, 113, 114, 114, 115, 115, 116, 116, 117, 117, 118, 118, 119, 119,
    120, 120, 121, 121, 122, 122, 123, 123, 124, 124, 125, 125, 126, 126, 127,
    127, 128, 128, 129, 129, 130, 130, 131, 131, 132, 132, 133, 133, 134, 134,
    135, 135, 136, 136, 137, 137, 138, 138, 139, 139, 140, 140, 141, 141, 142,
    142, 143, 143, 144, 144, 145, 145, 146, 146, 147, 147, 148, 148, 149, 149,
    150, 150, 151, 151, 152, 152, 153, 153, 154, 154, 155, 155, 156, 156, 157,
    157, 158, 158, 159, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9,
    10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19,
    19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28,
    29, 29, 30, 30, 31, 31, 32, 32, 33, 33, 34, 34, 35, 35, 36, 36, 37, 37, 38,
    38, 39, 39, 40, 40, 41, 41, 42, 42, 43, 43, 44, 44, 45, 45, 46, 46, 47, 47,
    48, 48, 49, 49, 50, 50, 51, 51, 52, 52, 53, 53, 54, 54, 55, 55, 56, 56, 57,
    57, 58, 58, 59, 59, 60, 60, 61, 61, 62, 62, 63, 63, 64, 64, 65, 65, 66, 66,
    67, 67, 68, 68, 69, 69, 70, 70, 71, 71, 72, 72, 73, 73, 74, 74, 75, 75, 76,
    76, 77, 77, 78, 78, 79, 79, 80, 80, 81, 81, 82, 82, 83, 83, 84, 84, 85, 85,
    86, 86, 87, 87, 88, 88, 89, 89, 90, 90, 91, 91, 92, 92, 93, 93, 94, 94, 95,
    95, 96, 96, 97, 97, 98, 98, 99, 99, 100, 100, 101, 101, 102, 102, 103, 103,
    104, 104, 105, 105, 106, 106, 107, 107, 108, 108, 109, 109, 110, 110, 111,
    111, 112, 112, 113, 113, 114, 114, 115, 115, 116, 116, 117, 117, 118, 118,
    119, 119, 120, 120, 121, 121, 122, 122, 123, 123, 124, 124, 125, 125, 126,
    126, 127, 127, 128, 128, 129, 129, 130, 130, 131, 131, 132, 132, 133, 133,
    134, 134, 135, 135, 136, 136, 137, 137, 138, 138, 139, 139, 140, 140, 141,
    141, 142, 142, 143, 143, 144, 144, 145, 145, 146, 146, 147, 147, 148, 148,
    149, 149, 150, 150, 151, 151, 152, 152, 153, 153, 154, 154, 155, 155, 156,
    156, 157, 157, 158, 158, 159, 159, 159 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<Root>/Resize'
   *   '<Root>/Resize1'
   */
  { 0, 1, 4, 6, 8, 11, 13, 16, 18, 20, 23, 25, 28, 30, 32, 35, 37, 40, 42, 44,
    47, 49, 52, 54, 56, 59, 61, 64, 66, 68, 71, 73, 76, 78, 80, 83, 85, 88, 90,
    92, 95, 97, 100, 102, 104, 107, 109, 112, 114, 116, 119, 121, 124, 126, 128,
    131, 133, 136, 138, 140, 143, 145, 148, 150, 152, 155, 157, 160, 162, 164,
    167, 169, 172, 174, 176, 179, 181, 184, 186, 188, 191, 193, 196, 198, 200,
    203, 205, 208, 210, 212, 215, 217, 220, 222, 224, 227, 229, 232, 234, 236, 0,
    2, 5, 7, 9, 12, 14, 17, 19, 21, 24, 26, 29, 31, 33, 36, 38, 41, 43, 45, 48,
    50, 53, 55, 57, 60, 62, 65, 67, 69, 72, 74, 77, 79, 81, 84, 86, 89, 91, 93,
    96, 98, 101, 103, 105, 108, 110, 113, 115, 117, 120, 122, 125, 127, 129, 132,
    134, 137, 139, 141, 144, 146, 149, 151, 153, 156, 158, 161, 163, 165, 168,
    170, 173, 175, 177, 180, 182, 185, 187, 189, 192, 194, 197, 199, 201, 204,
    206, 209, 211, 213, 216, 218, 221, 223, 225, 228, 230, 233, 235, 237, 1, 3,
    6, 8, 10, 13, 15, 18, 20, 22, 25, 27, 30, 32, 34, 37, 39, 42, 44, 46, 49, 51,
    54, 56, 58, 61, 63, 66, 68, 70, 73, 75, 78, 80, 82, 85, 87, 90, 92, 94, 97,
    99, 102, 104, 106, 109, 111, 114, 116, 118, 121, 123, 126, 128, 130, 133,
    135, 138, 140, 142, 145, 147, 150, 152, 154, 157, 159, 162, 164, 166, 169,
    171, 174, 176, 178, 181, 183, 186, 188, 190, 193, 195, 198, 200, 202, 205,
    207, 210, 212, 214, 217, 219, 222, 224, 226, 229, 231, 234, 236, 238, 2, 4,
    7, 9, 11, 14, 16, 19, 21, 23, 26, 28, 31, 33, 35, 38, 40, 43, 45, 47, 50, 52,
    55, 57, 59, 62, 64, 67, 69, 71, 74, 76, 79, 81, 83, 86, 88, 91, 93, 95, 98,
    100, 103, 105, 107, 110, 112, 115, 117, 119, 122, 124, 127, 129, 131, 134,
    136, 139, 141, 143, 146, 148, 151, 153, 155, 158, 160, 163, 165, 167, 170,
    172, 175, 177, 179, 182, 184, 187, 189, 191, 194, 196, 199, 201, 203, 206,
    208, 211, 213, 215, 218, 220, 223, 225, 227, 230, 232, 235, 237, 239, 3, 5,
    8, 10, 12, 15, 17, 20, 22, 24, 27, 29, 32, 34, 36, 39, 41, 44, 46, 48, 51,
    53, 56, 58, 60, 63, 65, 68, 70, 72, 75, 77, 80, 82, 84, 87, 89, 92, 94, 96,
    99, 101, 104, 106, 108, 111, 113, 116, 118, 120, 123, 125, 128, 130, 132,
    135, 137, 140, 142, 144, 147, 149, 152, 154, 156, 159, 161, 164, 166, 168,
    171, 173, 176, 178, 180, 183, 185, 188, 190, 192, 195, 197, 200, 202, 204,
    207, 209, 212, 214, 216, 219, 221, 224, 226, 228, 231, 233, 236, 238, 239 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<Root>/Resize2'
   *   '<Root>/Resize3'
   */
  { 0, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39,
    41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77,
    79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99, 101, 103, 105, 107, 109, 111,
    113, 115, 117, 119, 121, 123, 125, 127, 129, 131, 133, 135, 137, 139, 141,
    143, 145, 147, 149, 151, 153, 155, 157, 159, 161, 163, 165, 167, 169, 171,
    173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193, 195, 197, 199, 201,
    203, 205, 207, 209, 211, 213, 215, 217, 219, 221, 223, 225, 227, 229, 231,
    233, 235, 237, 239, 241, 243, 245, 247, 249, 251, 253, 255, 257, 259, 261,
    263, 265, 267, 269, 271, 273, 275, 277, 279, 281, 283, 285, 287, 289, 291,
    293, 295, 297, 299, 301, 303, 305, 307, 309, 311, 313, 315, 317, 0, 2, 4, 6,
    8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44,
    46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82,
    84, 86, 88, 90, 92, 94, 96, 98, 100, 102, 104, 106, 108, 110, 112, 114, 116,
    118, 120, 122, 124, 126, 128, 130, 132, 134, 136, 138, 140, 142, 144, 146,
    148, 150, 152, 154, 156, 158, 160, 162, 164, 166, 168, 170, 172, 174, 176,
    178, 180, 182, 184, 186, 188, 190, 192, 194, 196, 198, 200, 202, 204, 206,
    208, 210, 212, 214, 216, 218, 220, 222, 224, 226, 228, 230, 232, 234, 236,
    238, 240, 242, 244, 246, 248, 250, 252, 254, 256, 258, 260, 262, 264, 266,
    268, 270, 272, 274, 276, 278, 280, 282, 284, 286, 288, 290, 292, 294, 296,
    298, 300, 302, 304, 306, 308, 310, 312, 314, 316, 318, 1, 3, 5, 7, 9, 11, 13,
    15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51,
    53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89,
    91, 93, 95, 97, 99, 101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121,
    123, 125, 127, 129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151,
    153, 155, 157, 159, 161, 163, 165, 167, 169, 171, 173, 175, 177, 179, 181,
    183, 185, 187, 189, 191, 193, 195, 197, 199, 201, 203, 205, 207, 209, 211,
    213, 215, 217, 219, 221, 223, 225, 227, 229, 231, 233, 235, 237, 239, 241,
    243, 245, 247, 249, 251, 253, 255, 257, 259, 261, 263, 265, 267, 269, 271,
    273, 275, 277, 279, 281, 283, 285, 287, 289, 291, 293, 295, 297, 299, 301,
    303, 305, 307, 309, 311, 313, 315, 317, 319, 2, 4, 6, 8, 10, 12, 14, 16, 18,
    20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56,
    58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94,
    96, 98, 100, 102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126,
    128, 130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152, 154, 156,
    158, 160, 162, 164, 166, 168, 170, 172, 174, 176, 178, 180, 182, 184, 186,
    188, 190, 192, 194, 196, 198, 200, 202, 204, 206, 208, 210, 212, 214, 216,
    218, 220, 222, 224, 226, 228, 230, 232, 234, 236, 238, 240, 242, 244, 246,
    248, 250, 252, 254, 256, 258, 260, 262, 264, 266, 268, 270, 272, 274, 276,
    278, 280, 282, 284, 286, 288, 290, 292, 294, 296, 298, 300, 302, 304, 306,
    308, 310, 312, 314, 316, 318, 319 },

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
  -335.0F,

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<Root>/Resize'
   *   '<Root>/Resize1'
   */
  { 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32,
    96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96,
    32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32, 96, 32 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<Root>/Resize'
   *   '<Root>/Resize1'
   */
  { 16, 7, 21, 11, 2, 16, 7, 21, 11, 2, 16, 7, 21, 11, 2, 16, 7, 21, 11, 2, 16,
    7, 21, 11, 2, 16, 7, 21, 11, 2, 16, 7, 21, 11, 2, 16, 7, 21, 11, 2, 16, 7,
    21, 11, 2, 16, 7, 21, 11, 2, 16, 7, 21, 11, 2, 16, 7, 21, 11, 2, 16, 7, 21,
    11, 2, 16, 7, 21, 11, 2, 16, 7, 21, 11, 2, 16, 7, 21, 11, 2, 16, 7, 21, 11,
    2, 16, 7, 21, 11, 2, 16, 7, 21, 11, 2, 16, 7, 21, 11, 2, 38, 28, 43, 33, 25,
    38, 28, 43, 33, 25, 38, 28, 43, 33, 25, 38, 28, 43, 33, 25, 38, 28, 43, 33,
    25, 38, 28, 43, 33, 25, 38, 28, 43, 33, 25, 38, 28, 43, 33, 25, 38, 28, 43,
    33, 25, 38, 28, 43, 33, 25, 38, 28, 43, 33, 25, 38, 28, 43, 33, 25, 38, 28,
    43, 33, 25, 38, 28, 43, 33, 25, 38, 28, 43, 33, 25, 38, 28, 43, 33, 25, 38,
    28, 43, 33, 25, 38, 28, 43, 33, 25, 38, 28, 43, 33, 25, 38, 28, 43, 33, 25,
    47, 50, 43, 50, 47, 47, 50, 43, 50, 47, 47, 50, 43, 50, 47, 47, 50, 43, 50,
    47, 47, 50, 43, 50, 47, 47, 50, 43, 50, 47, 47, 50, 43, 50, 47, 47, 50, 43,
    50, 47, 47, 50, 43, 50, 47, 47, 50, 43, 50, 47, 47, 50, 43, 50, 47, 47, 50,
    43, 50, 47, 47, 50, 43, 50, 47, 47, 50, 43, 50, 47, 47, 50, 43, 50, 47, 47,
    50, 43, 50, 47, 47, 50, 43, 50, 47, 47, 50, 43, 50, 47, 47, 50, 43, 50, 47,
    47, 50, 43, 50, 47, 25, 33, 21, 28, 38, 25, 33, 21, 28, 38, 25, 33, 21, 28,
    38, 25, 33, 21, 28, 38, 25, 33, 21, 28, 38, 25, 33, 21, 28, 38, 25, 33, 21,
    28, 38, 25, 33, 21, 28, 38, 25, 33, 21, 28, 38, 25, 33, 21, 28, 38, 25, 33,
    21, 28, 38, 25, 33, 21, 28, 38, 25, 33, 21, 28, 38, 25, 33, 21, 28, 38, 25,
    33, 21, 28, 38, 25, 33, 21, 28, 38, 25, 33, 21, 28, 38, 25, 33, 21, 28, 38,
    25, 33, 21, 28, 38, 25, 33, 21, 28, 38, 2, 11, 0, 7, 16, 2, 11, 0, 7, 16, 2,
    11, 0, 7, 16, 2, 11, 0, 7, 16, 2, 11, 0, 7, 16, 2, 11, 0, 7, 16, 2, 11, 0, 7,
    16, 2, 11, 0, 7, 16, 2, 11, 0, 7, 16, 2, 11, 0, 7, 16, 2, 11, 0, 7, 16, 2,
    11, 0, 7, 16, 2, 11, 0, 7, 16, 2, 11, 0, 7, 16, 2, 11, 0, 7, 16, 2, 11, 0, 7,
    16, 2, 11, 0, 7, 16, 2, 11, 0, 7, 16, 2, 11, 0, 7, 16, 2, 11, 0, 7, 16 },

  /* Pooled Parameter (Expression: )
   * Referenced by:
   *   '<Root>/Resize2'
   *   '<Root>/Resize3'
   */
  { 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48,
    48, 48, 48, 48, 48, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16 },

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
