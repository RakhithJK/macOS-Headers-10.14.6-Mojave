//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedOSInstall/EmbeddedOSInstallServiceClientProtocol-Protocol.h>

@class NSMutableDictionary, NSXPCConnection;

@interface EOSRestoreServiceController : NSObject <EmbeddedOSInstallServiceClientProtocol>
{
    NSXPCConnection *_serviceConnection;
    NSMutableDictionary *_progressHandlersDictionary;
}

+ (id)sharedController;
@property(retain) NSMutableDictionary *progressHandlersDictionary; // @synthesize progressHandlersDictionary=_progressHandlersDictionary;
@property(retain) NSXPCConnection *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
- (void).cxx_destruct;
- (void)_setProgressHandler:(CDUnknownBlockType)arg1 forUUID:(id)arg2;
- (void)reportRestoreProgressForUUID:(id)arg1 restorePhase:(long long)arg2 restoreAfterBootFailure:(BOOL)arg3 percentComplete:(float)arg4 timeRemaining:(double)arg5;
- (void)lockRestoreQueueForCLIRestoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getLocalFDRDataFromESPWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)shouldHealEmbeddedDeviceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)restoreDeviceWithBundleSpecifier:(id)arg1 options:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)preflightBundleForHealingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)preflightPackageSpecifiers:(id)arg1 options:(id)arg2 tagPrefix:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)restoreServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

