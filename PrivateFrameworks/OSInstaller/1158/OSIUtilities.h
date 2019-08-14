//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OSIUtilities : NSObject
{
}

+ (id)serialNumber;
+ (BOOL)shouldAllowInsecureCollections;
+ (BOOL)isNetBooted;
+ (id)mountDiskImageWithPath:(id)arg1 withError:(id *)arg2;
+ (void)rebootNow;
+ (void)enableDarkReboot;
+ (void)muteBootChimeForNextReboot;
+ (id)allDiskUUIDs:(id)arg1;
+ (BOOL)stopAutomationOnDisk:(id)arg1 reblessUUID:(id)arg2;
+ (int)promoteImgsrcDisk:(id)arg1;
+ (id)getEFIVersion;
+ (BOOL)isCSFusion:(id)arg1;
+ (BOOL)isAPFSFusion:(id)arg1;
+ (BOOL)isVirtualMachine;

@end
