//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct PLPeripheralDeviceState {
    unsigned long long _field1;
    char *_field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    _Bool _field8;
    _Bool _field9;
};

struct SMCAccumPlatformInfo;

struct coalition_resource_usage {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    unsigned long long _field16;
    unsigned long long _field17;
    unsigned long long _field18;
    unsigned long long _field19;
    unsigned long long _field20;
    unsigned long long _field21[7];
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    unsigned int _field2;
    unsigned char _field3;
} CDStruct_7f7d6714;

typedef struct {
    unsigned int _field1;
    struct {
        int _field1;
        int _field2;
        union {
            struct {
                int _field1;
                _Bool _field2;
                unsigned short _field3;
                unsigned char _field4;
            } _field1;
            char _field2[5];
        } _field3;
        unsigned int _field4;
    } _field2;
    CDUnion_18b537cf _field3;
    CDUnion_18b537cf _field4;
    CDUnion_18b537cf _field5;
} CDStruct_2c9214e4;

typedef struct {
    unsigned int _field1;
    _Bool _field2;
    struct SMCAccumPlatformInfo *_field3;
    CDStruct_2c9214e4 _field4[4];
    CDStruct_2c9214e4 _field5[4];
    unsigned char _field6;
    unsigned char _field7;
    _Bool _field8;
    _Bool _field9;
    _Bool _field10;
    struct {
        unsigned int _field1[4];
        unsigned int _field2[4];
        unsigned char _field3;
        unsigned char _field4;
    } _field11;
    _Bool _field12;
} CDStruct_3d4409aa;

#pragma mark Typedef'd Unions

typedef union {
    unsigned long long _field1;
    long long _field2;
    double _field3;
} CDUnion_18b537cf;

