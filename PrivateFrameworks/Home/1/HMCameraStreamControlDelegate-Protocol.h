//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HMCameraStreamControl, NSError;

@protocol HMCameraStreamControlDelegate <NSObject>

@optional
- (void)cameraStreamControl:(HMCameraStreamControl *)arg1 didStopStreamWithError:(NSError *)arg2;
- (void)cameraStreamControlDidStartStream:(HMCameraStreamControl *)arg1;
@end
