//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _NSExtraPropertyIVars {
    id _field1;
    long long _field2;
    long long _field3;
};

struct _NSFaultingMutableArrayFlags {
    unsigned int _isFault:1;
    unsigned int _reserved:31;
};

struct _NSFaultingMutableOrderedSetFlags {
    unsigned int _isFault:1;
    unsigned int _mustPropagateDelete:1;
    unsigned int _ignoringIdempotentKVO:1;
    unsigned int _mustCopyOnWrite:1;
    unsigned int _isImmutableCopy:1;
    unsigned int _reserved:11;
    unsigned int _relationship:16;
};

struct _NSFaultingMutableSetFlags {
    unsigned int _isFault:1;
    unsigned int _mustPropagateDelete:1;
    unsigned int _reserved:14;
    unsigned int _relationship:16;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _NSSQLMigrationContext {
    id _field1;
};

struct _NSScalarObjectID {
    Class _field1;
};

struct _PFArrayFlags {
    unsigned int shouldRetain:1;
    unsigned int shouldRelease:1;
    unsigned int useExtendedRelease:1;
    unsigned int freeBackingArray:1;
    unsigned int copyBackingArray:1;
    unsigned int managedObjects:1;
    unsigned int _RESERVED:27;
};

struct _PFBatchFaultingArrayFlags {
    unsigned int _LRUIndex:8;
    unsigned int _uniformEntity:1;
    unsigned int _RESERVED:23;
};

struct _moFactoryClassFlags {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :26;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct persistentStoreCacheFlags {
    unsigned int _preserveToManyRelationships:1;
    unsigned int _reserved:31;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    SEL _field2;
    void *_field3;
} CDStruct_f8f0024c;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

typedef struct {
    int _field1;
    void *_field2;
    id _field3;
    unsigned long long _field4;
    unsigned char _field5;
    unsigned long long _field6;
    void *_field7;
    id _field8;
    char *_field9;
    struct _moFactoryClassFlags _field10;
} CDStruct_977f6bcf;

typedef struct {
    int _field1;
    void *_field2;
    id _field3;
    unsigned long long _field4;
    unsigned char _field5;
    unsigned long long _field6;
    void *_field7;
    unsigned char _field8[32];
    char *_field9;
    struct _moFactoryClassFlags _field10;
} CDStruct_1e30fb15;

