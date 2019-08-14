//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKit/NSObject-Protocol.h>

@class HMCameraSnapshot, HMCameraSnapshotControl, NSError;

@protocol HMCameraSnapshotControlDelegate <NSObject>

@optional
- (void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(HMCameraSnapshotControl *)arg1;
- (void)cameraSnapshotControl:(HMCameraSnapshotControl *)arg1 didTakeSnapshot:(HMCameraSnapshot *)arg2 error:(NSError *)arg3;
@end

