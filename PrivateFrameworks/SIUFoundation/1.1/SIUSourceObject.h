//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface SIUSourceObject : NSObject
{
    NSArray *_supportedModels;
    NSDictionary *_contentRecord;
    NSDictionary *_mountRecord;
    NSDictionary *_sourceAttributes;
    NSString *_basePath;
    NSString *_mountPoint;
    long long _sourceType;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _mountLock;
    long long _mountCounter;
}

@property(readonly) long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain) NSDictionary *sourceAttributes; // @synthesize sourceAttributes=_sourceAttributes;
@property(retain) NSDictionary *mountRecord; // @synthesize mountRecord=_mountRecord;
@property(retain, nonatomic) NSString *mountPoint; // @synthesize mountPoint=_mountPoint;
@property(retain, nonatomic) NSDictionary *contentRecord; // @synthesize contentRecord=_contentRecord;
@property(readonly, retain, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
- (BOOL)unmountDiskImage:(id)arg1;
- (id)mountDiskImage:(id)arg1 error:(id *)arg2;
- (void)unmountESDContent;
- (id)mountESDContent;
- (id)retrieveModelsFromBaseSystemAtPath:(id)arg1;
- (id)modelIDsFromPlatformSupport:(id)arg1;
- (id)modelIDsFromFilePath:(id)arg1;
- (id)supportedModels;
- (id)sourceMountPoint;
- (void)relinquishMount;
- (id)mount;
- (void)fetchSupportedModels;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

