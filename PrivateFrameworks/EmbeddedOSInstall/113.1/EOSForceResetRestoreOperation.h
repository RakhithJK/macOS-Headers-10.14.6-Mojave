//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EmbeddedOSInstall/EOSRestoreOperation.h>

@interface EOSForceResetRestoreOperation : EOSRestoreOperation
{
}

- (id)activityObject;
- (long long)restorePhase;
- (id)deviceConnectionTimeoutErrorDescription;
- (BOOL)waitForDeviceDisconnected;
- (double)deviceConnectionTimeout;
- (long long)expectedDeviceMode;
- (BOOL)preOperation;
- (id)initWithRestoreRequest:(id)arg1;

@end

