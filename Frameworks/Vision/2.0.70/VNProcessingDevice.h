//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>

@interface VNProcessingDevice : NSObject <NSCopying>
{
}

+ (void)forcedCleanup;
+ (id)directANEDevice;
+ (id)defaultANEDevice;
+ (id)deviceForMetalDevice:(id)arg1;
+ (id)defaultMetalDevice;
+ (id)defaultCPUDevice;
+ (id)defaultDevice;
+ (id)allDevices;
+ (void)_unlockOnceTokensLock;
+ (void)_lockOnceTokensLock;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)espressoStorageType;
- (int)espressoEngine;
- (int)espressoDeviceID;
- (id)metalDevice;
- (BOOL)targetsANE;
- (BOOL)targetsGPU;
- (BOOL)targetsCPU;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

