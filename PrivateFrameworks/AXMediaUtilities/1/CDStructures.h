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

struct CGVector {
    double _field1;
    double _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct mach_task_basic_info {
    unsigned long long virtual_size;
    unsigned long long resident_size;
    unsigned long long resident_size_max;
    struct time_value user_time;
    struct time_value system_time;
    int policy;
    int suspend_count;
};

struct task_vm_info {
    unsigned long long virtual_size;
    int region_count;
    int page_size;
    unsigned long long resident_size;
    unsigned long long resident_size_peak;
    unsigned long long device;
    unsigned long long device_peak;
    unsigned long long internal;
    unsigned long long internal_peak;
    unsigned long long external;
    unsigned long long external_peak;
    unsigned long long reusable;
    unsigned long long reusable_peak;
    unsigned long long purgeable_volatile_pmap;
    unsigned long long purgeable_volatile_resident;
    unsigned long long purgeable_volatile_virtual;
    unsigned long long compressed;
    unsigned long long compressed_peak;
    unsigned long long compressed_lifetime;
    unsigned long long phys_footprint;
    unsigned long long min_address;
    unsigned long long max_address;
};

struct time_value {
    int seconds;
    int microseconds;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    struct {
        long long location;
        long long length;
    } range;
    unsigned long long attributes;
} CDStruct_573f6e06;

