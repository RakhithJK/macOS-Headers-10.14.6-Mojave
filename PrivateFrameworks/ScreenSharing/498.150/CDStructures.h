//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct Point {
    short _field1;
    short _field2;
};

struct RFBAssistCursorV2Info {
    unsigned char _field1;
    unsigned char _field2;
    double _field3;
    double _field4;
};

struct RFBScreenSizeInfo {
    unsigned short _field1;
    unsigned short _field2;
};

struct RFBUserBitmap {
    unsigned short _field1;
    unsigned short _field2;
    char _field3[0];
};

struct Rect {
    short _field1;
    short _field2;
    short _field3;
    short _field4;
};

struct SSOrientationDetails {
    unsigned long long time_received;
    _Bool disable_J99_hack;
    struct CGSize dimensions;
    int orientation;
};

struct SSPoint {
    long long x;
    long long y;
};

struct SSRect {
    struct SSPoint origin;
    struct SSSize size;
};

struct SSSize {
    unsigned long long width;
    unsigned long long height;
};

struct ServerDisplayInfo {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned int _field5;
    unsigned short _field6;
    struct {
        unsigned int _field1;
        unsigned short _field2;
        unsigned short _field3;
        unsigned int _field4;
        CDStruct_2ad129e7 _field5;
    } _field7[0];
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct in6_addr {
    union {
        unsigned char __u6_addr8[16];
        unsigned short __u6_addr16[8];
        unsigned int __u6_addr32[4];
    } __u6_addr;
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned short _field5;
    unsigned short _field6;
    unsigned short _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
} CDStruct_2ad129e7;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
} CDStruct_250aeff3;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    char _field4[0];
} CDStruct_aa3d5a88;

typedef struct {
    unsigned int _field1;
    double _field2;
} CDStruct_e4886f83;

typedef struct {
    unsigned int _field1;
    int _field2;
    unsigned int _field3;
    char _field4[0];
} CDStruct_73c81737;

typedef struct {
    unsigned int _field1;
    short _field2;
    unsigned char _field3;
    unsigned char _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned int _field10;
} CDStruct_ea3b5b84;

typedef struct {
    unsigned int _field1;
    short _field2;
    unsigned short _field3;
    char _field4[0];
} CDStruct_c0c3f3c9;

typedef struct {
    int _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned int _field4;
    unsigned int _field5;
    char _field6[0];
} CDStruct_bebb5871;

typedef struct {
    int _field1;
    char _field2[0];
} CDStruct_82b15bee;

typedef struct {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned short _field8;
    struct {
        double _field1;
        double _field2;
        unsigned int _field3;
        struct Rect _field4;
        struct Rect _field5;
        unsigned int _field6;
        CDStruct_2ad129e7 _field7;
    } _field9[0];
} CDStruct_2f05c45a;

