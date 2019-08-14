//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAVCamera, NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IMAVCameraController : NSObject
{
    NSMutableArray *_cameras;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IMAVCamera *currentCamera;
- (void)_loadSavedCamera;
- (void)cameraListDidChange;
- (void)_rebuildCameraList;
- (id)cameraWithDeviceID:(unsigned int)arg1;
@property(readonly, retain, nonatomic) NSArray *cameras;
- (void)dealloc;
- (id)init;

@end
