//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSTextField;

@interface FBADebugPrivilegedWindowController : NSWindowController
{
    NSTextField *_samplerPID;
}

@property __weak NSTextField *samplerPID; // @synthesize samplerPID=_samplerPID;
- (void).cxx_destruct;
- (void)gatherInstallLogs:(id)arg1;
- (void)gatherSyslogs:(id)arg1;
- (void)bluetoothDiagnose:(id)arg1;
- (void)wifiDiagnose:(id)arg1;
- (void)mdDiagnose:(id)arg1;
- (void)tmDiagnose:(id)arg1;
- (void)sysDiagnose:(id)arg1;
- (void)sampleProcess:(id)arg1;
- (void)mobilityReport:(id)arg1;
- (void)showCookies:(id)arg1;
- (void)pingDaemon:(id)arg1;
- (void)uninstallDaemon:(id)arg1;
- (void)stopDaemon:(id)arg1;
- (void)makeDaemonReady:(id)arg1;

@end

