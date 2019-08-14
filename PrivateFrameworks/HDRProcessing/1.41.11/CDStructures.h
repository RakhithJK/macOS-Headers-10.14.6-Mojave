//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ChromaScaling_t {
    unsigned short hscaleMode;
    unsigned char hscaleNumTaps;
    float hscaleCoefficents[15][32];
    unsigned short vscaleMode;
    unsigned char vscaleNumTaps;
    float vscaleCoefficents[9][32];
};

struct ChromaticAdaptation_t {
    _Bool fixedPQRegamma_Enable;
    unsigned int mode1;
    struct MSRCSC_t cacsc1;
    int toneMapMode_Enable;
    union {
        struct {
            unsigned int precision;
        } toneMapMode0;
        struct {
            unsigned char type;
            unsigned char scaleShiftBits;
            unsigned char lumaShiftBits;
            unsigned char mixLookupBasis;
            unsigned char lumaOutputSel;
            int lumaAvgCoeff[3];
            int lumaAvgOffset;
            int lumaMaxCoeff[3];
            unsigned int histBinLimit[8];
        } toneMapMode1;
        struct {
            unsigned char msbPos0;
            unsigned char msbPos1;
            unsigned char msbPos2;
            unsigned char spacingComp0;
            unsigned char spacingComp1;
            unsigned char spacingComp2;
        } toneMapMode2;
    } ;
    unsigned int toneMapLUT[4][513];
    unsigned int detailPres_Mode;
    float detailPrsvHCoeff[11];
    float detailPrsvVCoeff[5];
    float detailPrsvHV0Coeff[5];
    float detailPrsvHV1Coeff[5];
    float detailPrsvVHCoeff[11];
    float detailPrsvWeight;
    float detailPrsvEdgeWeight;
    unsigned int mode2;
    struct MSRCSC_t cacsc2;
    _Bool fixedPQDegamma_Enable;
};

struct ColorspaceAToCommonColorspace_t {
    unsigned int mode;
    struct MSRCSC_t a2c;
};

struct CommonColorspaceToColorspaceB_t {
    unsigned int mode;
    struct MSRCSC_t c2b;
};

struct DMAConfig_t {
    unsigned char inputBitDepth;
    int inputColorSpace;
    int inputChromaFmt;
    unsigned char outputBitDepth;
    int outputColorSpace;
};

struct EDRMetaData_RBSP {
    unsigned long long _field1;
    int _field2;
    unsigned int _field3;
    unsigned int _field4;
    char *_field5;
    char *_field6;
    char *_field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned int _field10;
    int _field11;
    unsigned long long _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    unsigned int _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    unsigned int _field39;
    unsigned int _field40;
    unsigned int _field41;
    unsigned int _field42;
    unsigned int _field43;
    unsigned int _field44;
    unsigned int _field45;
    unsigned int _field46;
    unsigned int _field47;
    unsigned int _field48[3];
    unsigned int _field49[3];
    unsigned int _field50;
    unsigned int _field51;
    unsigned int _field52;
    unsigned int _field53;
    unsigned int _field54;
    unsigned int _field55;
    unsigned int _field56[3];
    unsigned int _field57[3][9];
    unsigned int _field58[3][18];
    unsigned int _field59;
    unsigned int _field60[3];
    unsigned int _field61;
    unsigned int _field62[3];
    unsigned int _field63;
    unsigned int _field64;
    unsigned int _field65[9];
    unsigned int _field66[9];
    unsigned int _field67;
    unsigned int _field68;
    unsigned int _field69;
    unsigned int _field70;
    unsigned int _field71[1][1][3][9];
    unsigned int _field72[4][1][1][3][9];
    unsigned int _field73[1][1][3][9];
    unsigned int _field74[1][1][3][9];
    unsigned int _field75[4][3][9];
    unsigned int _field76[1][1][3][9];
    unsigned int _field77[1][1][3][9];
    unsigned int _field78[1][1][3][9];
    unsigned int _field79[1][1][3][9];
    int _field80[1][1][3][9][3];
    unsigned int _field81[1][1][3][9][3];
    unsigned int _field82[1][1][3][9];
    int _field83[1][1][3][9];
    unsigned int _field84[1][1][3][9];
    int _field85[1][1][9][9][4][7];
    unsigned int _field86[1][1][3][9][4][7];
    int _field87[1][1][3][9][6];
    unsigned int _field88[1][1][3][9][6];
    unsigned int _field89[1][1][3][16384];
    unsigned int _field90[1][1][3][16384];
    unsigned int _field91[1][1][2];
    unsigned int _field92[2];
    unsigned int _field93[1][1][2];
    unsigned int _field94[1][1][3];
    unsigned int _field95[1][1][2][2][8][8];
    unsigned int _field96[1][1][2][2];
    unsigned int _field97[2][2];
    unsigned int _field98[1][1][2][2];
    unsigned int _field99[1][1][2][2];
    unsigned int _field100[1][1][2][2][12];
    unsigned int _field101[4];
    int _field102[2][2][4][8];
    unsigned int _field103[2][2][4][8];
    unsigned int _field104[1][1][9][3];
    unsigned int _field105[1][1][9][3];
    unsigned int _field106[1][1][9][3];
    unsigned int _field107[9][3];
    unsigned int _field108[1][1][9][3];
    unsigned int _field109[1][1][9][3];
    unsigned int _field110[1][1][9][3];
    unsigned int _field111[1][1][9][3];
    unsigned int _field112[1][1][9][3];
    unsigned int _field113[1][1][9][3];
    unsigned int _field114[1][1][9][3];
    unsigned int _field115[1][1][9][3];
    unsigned int _field116[1][1][9][3];
    unsigned int _field117[2][2][17];
    unsigned int _field118;
    unsigned int _field119;
    unsigned int _field120;
    int _field121[9];
    unsigned int _field122[3];
    int _field123[9];
    unsigned int _field124;
    unsigned int _field125;
    unsigned int _field126;
    unsigned int _field127;
    unsigned int _field128;
    unsigned int _field129;
    unsigned int _field130;
    unsigned int _field131;
    unsigned int _field132;
    unsigned int _field133;
    unsigned int _field134;
    unsigned int _field135;
    unsigned int _field136;
    CDStruct_e7effd28 _field137;
    CDStruct_59f4615e _field138[16];
    CDStruct_d32a9130 _field139;
    struct {
        unsigned short _field1;
        unsigned short _field2;
        unsigned short _field3;
        unsigned short _field4;
        unsigned short _field5;
    } _field140;
    struct {
        unsigned short _field1;
        unsigned short _field2;
        unsigned short _field3;
        unsigned short _field4;
        unsigned short _field5;
    } _field141;
    int _field142[9];
    unsigned int _field143[3];
    int _field144[9];
    int _field145[1][1][3][9][3];
    unsigned int _field146[3][18];
    unsigned int _field147[1][1][3][9];
    unsigned int _field148[3];
};

struct GammaEncoding_t {
    unsigned int mode;
    float gamma_LUT[3][706];
};

struct HDRFrameProcessingControl_t {
    union {
        unsigned int all[9216];
        struct ProcessingControlV0_t processingControl;
    } ;
};

struct Linearization_t {
    unsigned int mode;
    unsigned int deGammaLUT[3][514];
};

struct MSRCSC_t {
    unsigned int precision;
    float inputMinClip[3];
    float inputMaxClip[3];
    float offsetIn[3];
    int coeff[3][3];
    float offsetOut[3];
    float outputMinClip[3];
    float outputMaxClip[3];
};

struct MSRHDRContext {
    unsigned int contentType;
    unsigned int displayType;
    int processingType;
    unsigned int operation;
    unsigned int inputFormat;
    unsigned int outputFormat;
    unsigned int inputColorSpace;
    unsigned int outputColorSpace;
    long long inputTransferFunctionType;
    long long outputTransferFunctionType;
    char enableReshaping;
    char enableToneMapping;
    struct _HDR10DpcParam dpcParam;
};

struct ProcessingControlV0_t {
    struct DMAConfig_t dmaConfig;
    struct Reshaping_t reshaping;
    struct ChromaScaling_t chormaScaling;
    struct SourceToRGB_t sourceToRGB;
    struct Linearization_t linearization;
    struct ColorspaceAToCommonColorspace_t colorAtoCommonSpace;
    struct ChromaticAdaptation_t chromaticAdaption;
    struct CommonColorspaceToColorspaceB_t commonSpaceToColorB;
    struct GammaEncoding_t gammaEncoding;
    struct RGBtoYCC_t rgb2ycc;
};

struct RGBtoYCC_t {
    unsigned int mode;
    struct MSRCSC_t rgb2ycc;
};

struct Reshaping_t {
    unsigned short mode;
    unsigned short reshapeData[3][1024];
};

struct RgbHistogram_t {
    unsigned int _field1;
    unsigned int _field2[128];
    unsigned int _field3[128];
    unsigned int _field4[128];
};

struct SourceToRGB_t {
    unsigned int mode;
    struct MSRCSC_t src2rgb;
};

struct ToneCurve_Control {
    double targetMaxLinear;
    double targetMinLinear;
    float maxEDRValue;
    float EDRFactor;
    float AmbientLight;
    float sdrMaxBrightnessInNits;
    _Bool HDRProcessingFullAmbientAdaptation;
    struct __CFString *targetColorPrimaries;
    unsigned int outputPixelFormat;
    int hdr10_tm_mode;
    unsigned int operationFromDict;
    float forwardDM_tMaxPq;
    float forwardDM_tMinPq;
    float mid;
    float crush;
    float clip;
    _Bool passThroughTM;
    struct _HDR10AuxData auxData;
    struct _HDR10TMParam tmParam;
    struct _HDR10AmbAdaptationParam ambAdaptationParam;
};

struct _HDR10AmbAdaptationParam {
    unsigned short numPs;
    float AsC[3];
    float PsC[3];
    float MsC[3];
    float aL;
    float bL;
};

struct _HDR10AuxData {
    unsigned int processingType;
    unsigned int tm_preset;
    int tm_mode;
    int tm_curve_type;
    float EDRFactor;
    float maxEDRValue;
    int amb_adaptation_mode;
    float amb_adaptation_lux2nits_ratio;
    float ambientNits;
    float target_display_contrast_ratio;
    float target_display_reflection_ratio;
    unsigned int dpc_mode;
    float dpc_gain;
    float Smin_nits;
    float Smax_nits;
    float Tmin_nits;
    float targetMaxLinear;
    float Send_nits;
    float tm_Send_nits;
};

struct _HDR10DpcParam {
    float alpha;
    float alpha_prime;
    float gain;
};

struct _HDR10TMParam {
    float tm_Smin_nits;
    float tm_Smax_nits;
    float tm_Send_nits;
    float tm_Tmin_nits;
    float tm_Tmax_nits;
    float tm_Tend_nits;
    float tm_Smin_C;
    float tm_Smax_C;
    float tm_Send_C;
    float tm_Tmin_C;
    float tm_Tmax_C;
    float tm_Tend_C;
    int tm_curve_type;
    unsigned short numPs;
    float AsC[4];
    float PsC[4];
    float MsC[4];
    unsigned short n;
    float XsC[4];
    float YsC[4];
    unsigned short ms[3];
    float arrPsC[3][14];
};

struct __CFString;

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int BL_bit_depth_minus8;
    unsigned int EL_bit_depth_minus8;
    unsigned int vdr_bit_depth;
    unsigned int EL_chroma_format_idc;
    unsigned int BL_chroma_format_idc;
    unsigned int mapping_chroma_format_idc;
    unsigned int num_x_partitions;
    unsigned int num_y_partitions;
    unsigned int overlapped_prediction_method;
    unsigned int el_spatial_resampling_filter_flag;
    unsigned int coefficient_data_type;
    unsigned int coefficient_log2_denom;
    unsigned int num_pivots[3];
    unsigned int pivot_value[3][18];
    unsigned int mapping_idc[1][1][3][9];
    unsigned int poly_order[1][1][3][9];
    unsigned int linear_interp_flag[1][1][3][9];
    unsigned int pred_linear_interp_value_int[1][1][3][9];
    unsigned int pred_linear_interp_value[1][1][3][9];
    int poly_coef_int[1][1][3][9][3];
    unsigned int poly_coef[1][1][3][9][3];
    long long fp_poly_coef[1][1][3][9][6];
    float fp_poly_coef_float[1][1][3][9][6];
    unsigned int mmr_order[1][1][3][9];
    int mmr_constant_int[1][1][3][9];
    unsigned int mmr_constant[1][1][3][9];
    int mmr_coef_int[1][1][3][9][4][7];
    unsigned int mmr_coef[1][1][3][9][4][7];
    long long fp_mmr_coef[1][1][3][9][4][7];
    float fp_mmr_coef_float[1][1][3][9][4][7];
    int pow_coef_int[1][1][3][9][6];
    unsigned int pow_coef[1][1][3][9][6];
    unsigned int disable_residual_flag;
    unsigned int nlq_method_idc;
    unsigned int nlq_num_pivots;
    unsigned int nlq_pivot_value[9];
    unsigned int nlq_offset[1][1][9][3];
    unsigned int vdr_in_max_int[1][1][9][3];
    unsigned int vdr_in_max[1][1][9][3];
    long long fp_vdr_in_max[1][1][9][3];
    unsigned int linear_deadzone_slope_int[1][1][9][3];
    unsigned int linear_deadzone_slope[1][1][9][3];
    long long linear_dz_slope[1][1][9][3];
    unsigned int linear_deadzone_threshold_int[1][1][9][3];
    unsigned int linear_deadzone_threshold[1][1][9][3];
    long long linear_dz_th[1][1][9][3];
    unsigned int mu_law_levels[1][1][9][3];
    unsigned int mu_law_mu[1][1][9][3];
    unsigned int pred_LUT_value_int[1][1][3][16384];
    unsigned int pred_LUT_value[1][1][3][16384];
    unsigned int el_frame_crop_bottom_offset;
} CDStruct_895ff2bf;

typedef struct {
    unsigned int hdrContent;
    unsigned int hwType;
    unsigned int bitDepth;
    unsigned int displayType;
    unsigned int displayDiagonalSize;
    unsigned int maxDisplayBrightnessNits;
    float minDisplayBrightnessNits;
    unsigned int videoFullRangeFlag;
    unsigned int colourPrimaries;
    unsigned int transferFunction;
    float YCCtoRGB_coef[9];
    float RGBtoLMS_coef[9];
    unsigned int maxMasteringNits;
    float minMasteringNits;
    unsigned int transferFunction_RGhA;
    unsigned int source_RGhA;
    unsigned int displayPipelineCompensationType;
    float displayPipelineGammaValue;
} CDStruct_d76a58a8;

typedef struct {
    unsigned short display_primaries_xg;
    unsigned short display_primaries_yg;
    unsigned short display_primaries_xb;
    unsigned short display_primaries_yb;
    unsigned short display_primaries_xr;
    unsigned short display_primaries_yr;
    unsigned short white_point_x;
    unsigned short white_point_y;
    unsigned int max_display_mastering_luminance;
    unsigned int min_display_mastering_luminance;
} CDStruct_5b5de198;

typedef struct {
    unsigned short valid;
    unsigned short target_max_PQ;
    unsigned short trim_slope;
    unsigned short trim_offset;
    unsigned short trim_power;
    unsigned short trim_chroma_weight;
    unsigned short trim_saturation_gain;
    short ms_weight;
} CDStruct_59f4615e;

typedef struct {
    unsigned short valid;
    unsigned short min_PQ;
    unsigned short max_PQ;
    unsigned short avg_PQ;
} CDStruct_e7effd28;

typedef struct {
    unsigned short valid;
    unsigned short anchor_PQ;
    unsigned short anchor_power;
} CDStruct_d32a9130;

typedef struct {
    unsigned short max_content_light_level;
    unsigned short max_frame_average_light_level;
} CDStruct_3ad9644f;

typedef struct {
    float parameter[3][3];
} CDStruct_e50908d0;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    unsigned char dm_metadata_id;
    unsigned char scene_refresh_flag;
    unsigned char YCCtoRGB_coef0_hi;
    unsigned char YCCtoRGB_coef0_lo;
    unsigned char YCCtoRGB_coef1_hi;
    unsigned char YCCtoRGB_coef1_lo;
    unsigned char YCCtoRGB_coef2_hi;
    unsigned char YCCtoRGB_coef2_lo;
    unsigned char YCCtoRGB_coef3_hi;
    unsigned char YCCtoRGB_coef3_lo;
    unsigned char YCCtoRGB_coef4_hi;
    unsigned char YCCtoRGB_coef4_lo;
    unsigned char YCCtoRGB_coef5_hi;
    unsigned char YCCtoRGB_coef5_lo;
    unsigned char YCCtoRGB_coef6_hi;
    unsigned char YCCtoRGB_coef6_lo;
    unsigned char YCCtoRGB_coef7_hi;
    unsigned char YCCtoRGB_coef7_lo;
    unsigned char YCCtoRGB_coef8_hi;
    unsigned char YCCtoRGB_coef8_lo;
    unsigned char YCCtoRGB_offset0_byte3;
    unsigned char YCCtoRGB_offset0_byte2;
    unsigned char YCCtoRGB_offset0_byte1;
    unsigned char YCCtoRGB_offset0_byte0;
    unsigned char YCCtoRGB_offset1_byte3;
    unsigned char YCCtoRGB_offset1_byte2;
    unsigned char YCCtoRGB_offset1_byte1;
    unsigned char YCCtoRGB_offset1_byte0;
    unsigned char YCCtoRGB_offset2_byte3;
    unsigned char YCCtoRGB_offset2_byte2;
    unsigned char YCCtoRGB_offset2_byte1;
    unsigned char YCCtoRGB_offset2_byte0;
    unsigned char RGBtoLMS_coef0_hi;
    unsigned char RGBtoLMS_coef0_lo;
    unsigned char RGBtoLMS_coef1_hi;
    unsigned char RGBtoLMS_coef1_lo;
    unsigned char RGBtoLMS_coef2_hi;
    unsigned char RGBtoLMS_coef2_lo;
    unsigned char RGBtoLMS_coef3_hi;
    unsigned char RGBtoLMS_coef3_lo;
    unsigned char RGBtoLMS_coef4_hi;
    unsigned char RGBtoLMS_coef4_lo;
    unsigned char RGBtoLMS_coef5_hi;
    unsigned char RGBtoLMS_coef5_lo;
    unsigned char RGBtoLMS_coef6_hi;
    unsigned char RGBtoLMS_coef6_lo;
    unsigned char RGBtoLMS_coef7_hi;
    unsigned char RGBtoLMS_coef7_lo;
    unsigned char RGBtoLMS_coef8_hi;
    unsigned char RGBtoLMS_coef8_lo;
    unsigned char signal_eotf_hi;
    unsigned char signal_eotf_lo;
    unsigned char signal_eotf_param0_hi;
    unsigned char signal_eotf_param0_lo;
    unsigned char signal_eotf_param1_hi;
    unsigned char signal_eotf_param1_lo;
    unsigned char signal_eotf_param2_byte3;
    unsigned char signal_eotf_param2_byte2;
    unsigned char signal_eotf_param2_byte1;
    unsigned char signal_eotf_param2_byte0;
    unsigned char signal_bit_depth;
    unsigned char signal_color_space;
    unsigned char signal_chroma_format;
    unsigned char signal_full_range_flag;
    unsigned char source_min_PQ_hi;
    unsigned char source_min_PQ_lo;
    unsigned char source_max_PQ_hi;
    unsigned char source_max_PQ_lo;
    unsigned char source_diagonal_hi;
    unsigned char source_diagonal_lo;
    unsigned char num_ext_blocks;
    struct {
        unsigned char ext_block1_length_byte3;
        unsigned char ext_block1_length_byte2;
        unsigned char ext_block1_length_byte1;
        unsigned char ext_block1_length_byte0;
        unsigned char ext_block1_level;
        unsigned char min_PQ_hi;
        unsigned char min_PQ_lo;
        unsigned char max_PQ_hi;
        unsigned char max_PQ_lo;
        unsigned char avg_PQ_hi;
        unsigned char avg_PQ_lo;
    } L1;
    unsigned char extendedBlock[339];
} CDStruct_f6fd16b9;

typedef struct {
    unsigned int _field1;
    _Bool _field2;
    unsigned int _field3;
    int _field4;
    int _field5;
    unsigned int _field6;
    unsigned int _field7;
    _Bool _field8;
    _Bool _field9;
    unsigned int _field10;
    float _field11;
    float _field12[22];
    float _field13[22];
    float _field14;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
    } _field15[3];
    _Bool _field16;
} CDStruct_0259fb3e;

typedef struct {
    unsigned int width;
    unsigned int height;
    unsigned int usage;
    unsigned int targetNits;
    unsigned int outputPixelFormat;
    struct __CFString *targetColorPrimaries;
    unsigned int outputMetaDataFormat;
    unsigned int hardwareType;
} CDStruct_26384d64;

typedef struct {
    unsigned int vdr_dm_metadata_present_flag;
    unsigned int affected_dm_metadata_id;
    unsigned int current_dm_metadata_id;
    unsigned int scene_refresh_flag;
    int YCCtoRGB_coef[9];
    unsigned int YCCtoRGB_offset[3];
    int RGBtoLMS_coef[9];
    unsigned int signal_eotf;
    unsigned int signal_eotf_param0;
    unsigned int signal_eotf_param1;
    unsigned int signal_eotf_param2;
    unsigned int signal_bit_depth;
    unsigned int signal_color_space;
    unsigned int signal_chroma_format;
    unsigned int signal_full_range_flag;
    unsigned int source_min_PQ;
    unsigned int source_max_PQ;
    unsigned int source_diagonal;
    unsigned int num_ext_blocks;
    CDStruct_e7effd28 L1;
    CDStruct_59f4615e L2[16];
    CDStruct_d32a9130 L4;
    struct {
        unsigned short valid;
        unsigned short active_area_left_offset;
        unsigned short active_area_right_offset;
        unsigned short active_area_top_offset;
        unsigned short active_area_bottom_offset;
    } L5;
    struct {
        unsigned short valid;
        unsigned short max_display_mastering_luminance;
        unsigned short min_display_mastering_luminance;
        unsigned short max_content_light_level;
        unsigned short max_frame_average_light_level;
    } L6;
} CDStruct_f4857302;

typedef struct {
    float ycc_to_rgb_offset__r_scale__g_scale__b_scale__LMStoRGB_coef0__LMStoRGB_coef1__LMStoRGB_coef2__RGBtoLMS_coef0__RGBtoLMS_coef1__RGBtoLMS_coef2__rangeInv;
    float rangeMinTimesInvRange;
    unsigned int signal_eotf;
    float signal_eotf_gamma;
    float signal_eotf_a;
    float signal_eotf_b;
    float signal_eotf_cbt;
    float sl;
    float c_1;
    float c_2;
    float c_3;
    unsigned int signal_oetf;
    float signal_oetf_gamma;
    float signal_oetf_a;
    float signal_oetf_b;
    float signal_oetf_cbt;
    float l2pq_mid_point;
    float l2pq_max_point;
    float l2pq_normalize_low;
    float l2pq_normalize_high;
    float OutputScale;
    float narrow_range_scale;
    float narrow_range_offset;
    float Saturation;
    float Boost;
    float Anchor;
    float maxEDRValue;
    unsigned int maxMasteringNits;
    float targetMaxNits;
    float targetMaxPq;
    float trim_slope;
    float trim_offset;
    float trim_power;
    float trim_sat;
    float s2t_ratio;
    float sat2_p1;
    float sat2_p2;
    float sat2_p3;
    float sat2_p4;
    float sat2_p5;
    float brightAdjBySat2;
    float tonemap_target_brightness;
    float gamma;
    float ambientNits;
    _Bool apply_macos_gamma;
    float macos_gamma;
    float edrFactor;
    _Bool target_p3_d65;
    float sourceContentSDRMaxBrightnessInNits;
    int transfer_function_input;
    _Bool force_passthrough;
    _Bool apply_lldovi;
    int src_content_type;
    _Bool disable_hlg_headroom;
    _Bool force_srgb_engamma;
    int input_texture_format;
    _Bool hdr10_applyDPCompensationS;
    struct _HDR10DpcParam preRGBtoRGB_coef0__preRGBtoRGB_coef1__preRGBtoRGB_coef2__RGBtoY_coefs__postRGBtoRGB_coef0__postRGBtoRGB_coef1__postRGBtoRGB_coef2__dpcParam;
    _Bool llUseDM31;
    _Bool forceReCreateLUT;
} CDStruct_5b04813a;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5[9];
    float _field6[9];
    float _field7[9];
    float _field8[9];
    float _field9[9];
    float _field10[3];
    float _field11[3];
    float _field12;
    unsigned int _field13;
    unsigned int _field14;
    float _field15;
    unsigned int _field16;
    float _field17;
    CDStruct_5b5de198 _field18;
    CDStruct_3ad9644f _field19;
    int _field20;
} CDStruct_096ecdcf;

typedef struct {
    struct {
        unsigned int x;
        unsigned int y;
    } origin;
    struct {
        unsigned int width;
        unsigned int height;
    } size;
} CDStruct_8e61eb45;

typedef struct {
    CDStruct_5b5de198 sei;
    CDStruct_3ad9644f ll;
} CDStruct_52986d3b;

typedef struct {
    CDStruct_895ff2bf composerData;
    CDStruct_f4857302 dmData;
    struct ToneCurve_Control tcControl;
    CDStruct_d76a58a8 hdrControl;
    CDStruct_52986d3b infoFrameData;
} CDStruct_a3fd48ff;

typedef struct {
    int version;
    unsigned int size;
    struct HDRFrameProcessingControl_t hdrFrameControl;
} CDStruct_481e6fe2;

// Ambiguous groups
typedef struct {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
} CDStruct_9d3ac55b;

