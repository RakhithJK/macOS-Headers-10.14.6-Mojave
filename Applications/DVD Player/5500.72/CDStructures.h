//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct NSEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct cssm_data {
    unsigned long long Length;
    char *Data;
};

struct cssm_date {
    unsigned char Year[4];
    unsigned char Month[2];
    unsigned char Day[2];
};

struct cssm_guid {
    unsigned int Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
};

struct cssm_key {
    struct cssm_keyheader KeyHeader;
    struct cssm_data KeyData;
};

struct cssm_keyheader {
    unsigned int HeaderVersion;
    struct cssm_guid CspId;
    unsigned int BlobType;
    unsigned int Format;
    unsigned int AlgorithmId;
    unsigned int KeyClass;
    unsigned int LogicalKeySizeInBits;
    unsigned int KeyAttr;
    unsigned int KeyUsage;
    struct cssm_date StartDate;
    struct cssm_date EndDate;
    unsigned int WrapAlgorithmId;
    unsigned int WrapMode;
    unsigned int Reserved;
};

