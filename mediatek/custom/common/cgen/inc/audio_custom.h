/*******************************************************************************
 *
 * Filename:
 * ---------
 * aud_custom_exp.h
 *
 * Project:
 * --------
 *   DUMA
 *
 * Description:
 * ------------
 * This file is the header of audio customization related function or definition.
 *
 * Author:
 * -------
 * JY Huang
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 * 05 26 2010 chipeng.chang
 * [ALPS00002287][Need Patch] [Volunteer Patch] ALPS.10X.W10.11 Volunteer patch for audio paramter
 * modify audio parameter.
 *
 * 05 26 2010 chipeng.chang
 * [ALPS00002287][Need Patch] [Volunteer Patch] ALPS.10X.W10.11 Volunteer patch for audio paramter
 * modify for Audio parameter
 *
 *    mtk80306
 * [DUMA00132370] waveform driver file re-structure.
 * waveform driver file re-structure.
 *
 * Jul 28 2009 mtk01352
 * [DUMA00009909] Check in TWO_IN_ONE_SPEAKER and rearrange
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_CUSTOM_H
#define AUDIO_CUSTOM_H

/* define Gain For Normal */
/* Normal volume: TON, SPK, MIC, FMR, SPH, SID, MED */

#define GAIN_NOR_TON_VOL      8
#define GAIN_NOR_KEY_VOL      43
#define GAIN_NOR_MIC_VOL      26
#define GAIN_NOR_FMR_VOL      0
#define GAIN_NOR_SPH_VOL      20
#define GAIN_NOR_SID_VOL      100
#define GAIN_NOR_MED_VOL      25


/* define Gain For Headset */
/* Headset volume: TON, SPK, MIC, FMR, SPH, SID, MED */

#define GAIN_HED_TON_VOL      8
#define GAIN_HED_KEY_VOL      24
#define GAIN_HED_MIC_VOL      20
#define GAIN_HED_FMR_VOL      24
#define GAIN_HED_SPH_VOL      12
#define GAIN_HED_SID_VOL      100
#define GAIN_HED_MED_VOL      12

/* define Gain For Handfree */
/* Handfree volume: TON, SPK, MIC, FMR, SPH, SID, MED */

#define GAIN_HND_TON_VOL      8
#define GAIN_HND_KEY_VOL      24
#define GAIN_HND_MIC_VOL      20
#define GAIN_HND_FMR_VOL      24
#define GAIN_HND_SPH_VOL      12
#define GAIN_HND_SID_VOL      100
#define GAIN_HND_MED_VOL      12

/* 0: Input FIR coefficients for 2G/3G Normal mode */
/* 1: Input FIR coefficients for 2G/3G/VoIP Headset mode */
/* 2: Input FIR coefficients for 2G/3G Handfree mode */
/* 3: Input FIR coefficients for 2G/3G/VoIP BT mode */
/* 4: Input FIR coefficients for VoIP Normal mode */
/* 5: Input FIR coefficients for VoIP Handfree mode */
#define SPEECH_INPUT_FIR_COEFF \
     32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0

/* 0: Output FIR coefficients for 2G/3G Normal mode */
/* 1: Output FIR coefficients for 2G/3G/VoIP Headset mode */
/* 2: Output FIR coefficients for 2G/3G Handfree mode */
/* 3: Output FIR coefficients for 2G/3G/VoIP BT mode */
/* 4: Output FIR coefficients for VoIP Normal mode */
/* 5: Output FIR coefficients for VoIP Handfree mode */
#define SPEECH_OUTPUT_FIR_COEFF \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
                                       \
    32767,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0

#define   DG_DL_Speech    0xE3D
#define   DG_Microphone   0x1400
#define   FM_Record_Vol   6     /* 0 is smallest. each step increase 1dB.
                                    Be careful of distortion when increase too much.
                                    Generally, it's not suggested to tune this parameter */

/* 0: Input FIR coefficients for 2G/3G Normal mode */
/* 1: Input FIR coefficients for 2G/3G/VoIP Headset mode */
/* 2: Input FIR coefficients for 2G/3G Handfree mode */
/* 3: Input FIR coefficients for 2G/3G/VoIP BT mode */
/* 4: Input FIR coefficients for VoIP Normal mode */
/* 5: Input FIR coefficients for VoIP Handfree mode */
#define WB_Speech_Input_FIR_Coeff \
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,  \
\
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,  \
\
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,  \
\
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,  \
\
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0,  \
\
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0

/* 0: Output FIR coefficients for 2G/3G Normal mode */
/* 1: Output FIR coefficients for 2G/3G/VoIP Headset mode */
/* 2: Output FIR coefficients for 2G/3G Handfree mode */
/* 3: Output FIR coefficients for 2G/3G/VoIP BT mode */
/* 4: Output FIR coefficients for VoIP Normal mode */
/* 5: Output FIR coefficients for VoIP Handfree mode */

#define WB_Speech_Output_FIR_Coeff \
       81,     7,  -148,   -31,  -155,    18,    22,   -29,    32,  -105,\
       17,  -117,    96,  -112,    98,   -78,   -23,   -58,   -76,   -27,\
      -64,    49,  -102,   395,  -223,   496,  -533,    27,  -547,  -143,\
      266,   490,  1025,  -226,   358, -2323,   -74, -2602,  2664,  -919,\
     6212, -2966,  7500,-13319, 32767, 32767,-13319,  7500, -2966,  6212,\
     -919,  2664, -2602,   -74, -2323,   358,  -226,  1025,   490,   266,\
     -143,  -547,    27,  -533,   496,  -223,   395,  -102,    49,   -64,\
      -27,   -76,   -58,   -23,   -78,    98,  -112,    96,  -117,    17,\
     -105,    32,   -29,    22,    18,  -155,   -31,  -148,     7,    81,\
\
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
\
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
\
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
\
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
\
    32767,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0, \
        0,     0,     0,     0,     0,     0,     0,     0,     0,     0

/*
 * The Bluetooth DAI Hardware COnfiguration Parameter
 */
#define DEFAULT_BLUETOOTH_SYNC_TYPE               0
#define DEFAULT_BLUETOOTH_SYNC_LENGTH             1

#endif