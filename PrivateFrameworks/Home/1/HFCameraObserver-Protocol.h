//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HMCameraSnapshotControlDelegate-Protocol.h>
#import <Home/HMCameraStreamControlDelegate-Protocol.h>

@class HMCameraStream, HMCameraStreamControl, NSError;

@protocol HFCameraObserver <HMCameraSnapshotControlDelegate, HMCameraStreamControlDelegate>

@optional
- (void)cameraStream:(HMCameraStream *)arg1 didUpdateAudioStreamSettingWithError:(NSError *)arg2;
- (void)cameraStreamControlDidUpdateManagerState:(HMCameraStreamControl *)arg1;
- (void)cameraStreamControlDidUpdateStreamState:(HMCameraStreamControl *)arg1;
@end

