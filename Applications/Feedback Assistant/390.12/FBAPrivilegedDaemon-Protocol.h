//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL;

@protocol FBAPrivilegedDaemon <NSObject>
- (void)gatherInstallLogsWithDestination:(NSURL *)arg1;
- (void)gatherSyslogsWithDestination:(NSURL *)arg1;
- (void)sampleProcessWithPID:(unsigned long long)arg1 withDestination:(NSURL *)arg2;
- (void)runMDSDiagnoseWithDestination:(NSURL *)arg1;
- (void)runTMDiagnoseWithDestination:(NSURL *)arg1;
- (void)runBluetoothDiagnoseWithDestination:(NSURL *)arg1 shortUserName:(NSString *)arg2;
- (void)runWifiDiagnoseWithDestination:(NSURL *)arg1;
- (void)runSysdiagnoseWithDestination:(NSURL *)arg1 arguments:(NSArray *)arg2;
- (void)runSysdiagnoseWithDestination:(NSURL *)arg1;
- (void)runMobilityReportWithDestination:(NSURL *)arg1;
- (void)runSystemProfileWithDetailLevel:(NSString *)arg1 destination:(NSURL *)arg2;
- (void)stopDaemon;
- (void)showPrivileges;
- (void)performReadyCheck;
- (void)addFBASymlink;
@end
