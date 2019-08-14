//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface CameraController : NSObject
{
    BOOL _hasNoVideo;
    BOOL _receivedFirstLocalFrame;
    BOOL _previewStarted;
    BOOL _workspaceSessionIsActive;
    NSTimer *_noFramesTimer;
}

+ (void)setupLocalAspectRatiosForScreen:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) BOOL workspaceSessionIsActive; // @synthesize workspaceSessionIsActive=_workspaceSessionIsActive;
@property(retain, nonatomic) NSTimer *noFramesTimer; // @synthesize noFramesTimer=_noFramesTimer;
@property(nonatomic) BOOL previewStarted; // @synthesize previewStarted=_previewStarted;
@property(nonatomic) BOOL receivedFirstLocalFrame; // @synthesize receivedFirstLocalFrame=_receivedFirstLocalFrame;
@property(nonatomic) BOOL hasNoVideo; // @synthesize hasNoVideo=_hasNoVideo;
- (void).cxx_destruct;
- (void)_workspaceBecameActive:(id)arg1;
- (void)_workspaceResignedActive:(id)arg1;
- (void)_cameraChanged:(id)arg1;
- (void)_localPreviewClientFirstFrame:(id)arg1;
- (void)_noFramesTimeout:(id)arg1;
- (BOOL)_isCameraValid:(id)arg1;
- (void)updateStateForCall:(id)arg1 window:(id)arg2;
- (void)cleanupNoFramesTimer;
- (void)stopPreview;
- (BOOL)hasVideoCapability;
- (id)init;

@end

