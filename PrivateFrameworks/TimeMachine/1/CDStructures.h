//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _TMRulesEngineStatistics {
    unsigned long long urlQueryCount;
    unsigned long long pathQueryCount;
    unsigned long long rawPathQueryCount;
    unsigned long long deviceIDFaults;
    unsigned long long isDirectoryFaults;
    unsigned long long contentsExcludedHits;
    unsigned long long fileContentsExcludedHits;
    unsigned long long spotlightMisses;
    unsigned long long stickyXattrFaults;
};

struct _TMRulesQueryDetails {
    char _field1;
    char _field2;
    char _field3;
    char _field4;
    unsigned long long _field5;
};

struct _TMRulesQueryHints {
    unsigned short _field1;
    int _field2;
    char _field3;
};

struct fsid {
    int val[2];
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct statfs {
    unsigned int f_bsize;
    int f_iosize;
    unsigned long long f_blocks;
    unsigned long long f_bfree;
    unsigned long long f_bavail;
    unsigned long long f_files;
    unsigned long long f_ffree;
    struct fsid f_fsid;
    unsigned int f_owner;
    unsigned int f_type;
    unsigned int f_flags;
    unsigned int f_fssubtype;
    char f_fstypename[16];
    char f_mntonname[1024];
    char f_mntfromname[1024];
    unsigned int f_reserved[8];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned char _field2;
} CDStruct_51293ebd;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned short _field6;
    unsigned short _field7;
    unsigned short _field8;
} CDStruct_b7969f8e;

typedef struct {
    unsigned long long _field1[32];
    id _field2;
} CDStruct_bcaf8faf;

