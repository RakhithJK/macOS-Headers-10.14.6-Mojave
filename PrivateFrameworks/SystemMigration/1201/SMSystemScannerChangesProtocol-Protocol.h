//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/NSObject-Protocol.h>

@class NSString, SMSystem_Daemon;

@protocol SMSystemScannerChangesProtocol <NSObject>
- (void)systemScannerSystemChanged:(NSString *)arg1 onSystem:(SMSystem_Daemon *)arg2;
- (void)systemScannerRemovedSystem:(SMSystem_Daemon *)arg1;
- (void)systemScannerAddedSystem:(SMSystem_Daemon *)arg1;

@optional
- (void)systemScannerRequestsHighlightOfSystem:(SMSystem_Daemon *)arg1;
@end
