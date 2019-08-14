//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BOMCopierHelper : NSObject
{
    int _srcFD;
    unsigned long long _srcSizeInBytes;
    unsigned long long _srcForkCount;
    unsigned long long _srcDirCount;
    id _delegate;
    unsigned long long _bytesCopied;
    struct BOMSys *_bomSysPtr;
    struct _BOMCopier *_copier;
    NSMutableDictionary *_copyOptions;
    int _copyError;
    NSString *_srcPath;
    BOOL _srcIsDirectory;
    NSString *_srcMountPoint;
    NSString *_dstPath;
    BOOL _dstIsDirectory;
    NSString *_problemPath;
    int _srcDev;
    BOOL _checkedOptions;
    BOOL _checkStandardRootList;
    BOOL _checkStandardList;
    BOOL _checkCrossPlatformRootList;
    BOOL _checkCrossPlatformList;
    BOOL _checkDevNodeCrossing;
    BOOL _checkDevNodeCrossingButCreateDirectories;
    BOOL _checkInvisibles;
    BOOL _checkDotDSStore;
    BOOL _checkSkipUnreadable;
    BOOL _manuallyCopyQuarantineInfo;
    int _nLinks;
    int _maxLinks;
    struct _LinkedFileInfo *_hardlinkList;
    unsigned char _memberEUIDUUID[16];
    int _memberErr;
    struct __CFDictionary *_memberCache;
    unsigned int _memberGIDToCheck;
    BOOL _memberEUIDIsMember;
    BOOL _debug;
    BOOL _verbose;
}

+ (id)bomCopierHelper;
+ (int)copyFrom:(id)arg1 to:(id)arg2 withOptions:(id)arg3 andDelegate:(id)arg4;
+ (void)initialize;
@property(nonatomic) unsigned long long bytesCopied; // @synthesize bytesCopied=_bytesCopied;
@property(nonatomic) unsigned long long srcDirCount; // @synthesize srcDirCount=_srcDirCount;
@property(nonatomic) unsigned long long srcForkCount; // @synthesize srcForkCount=_srcForkCount;
@property(nonatomic) int srcFD; // @synthesize srcFD=_srcFD;
@property(nonatomic) unsigned long long srcSizeInBytes; // @synthesize srcSizeInBytes=_srcSizeInBytes;
@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *problemPath; // @synthesize problemPath=_problemPath;
@property(nonatomic) int srcDev; // @synthesize srcDev=_srcDev;
@property(readonly, nonatomic) BOOL manuallyCopyQuarantineInfo; // @synthesize manuallyCopyQuarantineInfo=_manuallyCopyQuarantineInfo;
@property(nonatomic) int copyError; // @synthesize copyError=_copyError;
@property(nonatomic) BOOL verbose; // @synthesize verbose=_verbose;
@property(nonatomic) BOOL debug; // @synthesize debug=_debug;
- (void).cxx_destruct;
- (id)_askForArchivePassword:(id)arg1;
- (int)performCopy;
- (void)setupmem;
- (void)freemem;
- (void)reset;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSString *dstPath;
@property(retain, nonatomic) NSString *srcMountPoint;
@property(retain, nonatomic) NSString *srcPath;
@property(nonatomic) struct BOMSys *bomSys;
@property(nonatomic) struct _BOMCopier *copier;
- (void)setCopyOption:(id)arg1 forKey:(id)arg2;
- (void)setCopyOptions:(id)arg1;
- (id)copyOptions;
- (unsigned long long)addBytesCopied:(unsigned long long)arg1;
- (unsigned long long)incrementSrcForkCount;
- (int)applyInternalFilters:(id)arg1 objectType:(int)arg2 andSize:(long long)arg3 withCachedStatInfo:(struct stat *)arg4 needToCreateSuppressedDirectory:(char *)arg5;
- (void)copyQuarantineInfoFrom:(id)arg1 to:(id)arg2;
- (id)canonicizeDstPath:(const char *)arg1;
- (id)canonicizeSrcPath:(const char *)arg1;
- (int)estimateSizeReturning:(unsigned long long *)arg1 andItems:(unsigned long long *)arg2;
- (int)estimateSizeWithFilteringReturning:(unsigned long long *)arg1 andItems:(unsigned long long *)arg2 andNeedsAuthentication:(char *)arg3;
- (BOOL)isMember:(unsigned int)arg1;
- (BOOL)isAlreadyHardlinked:(struct _ftsent *)arg1 returningError:(int *)arg2;
- (int)setVisibility:(id)arg1 to:(BOOL)arg2;
- (BOOL)visibility:(id)arg1;
- (void)checkGIDMembership:(id)arg1;
- (int)onMainThreadCheckGID:(unsigned int)arg1 forMembership:(char *)arg2;
- (void)getEUIDUUID:(id)arg1;
- (int)onMainThreadGetEUIDUUID;

@end

