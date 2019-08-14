//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface _NSFullScreenTransitionOverlayWindow : NSPanel
{
    struct CGRect _transitionedWindowTargetFrame;
    id _transitionedWindowBeforeContents;
    id _transitionedWindowAfterContents;
    struct CGRect _windowSnapshotStartFrame;
    struct CGRect shadowDeltaRect;
    struct CGRect _shadowAfterDeltaRect;
    CALayer *rootLayer;
    CALayer *_transitionedWindowBeforeLayer;
    CALayer *_transitionedWindowAfterLayer;
}

@property(nonatomic) struct CGRect shadowAfterDeltaRect; // @synthesize shadowAfterDeltaRect=_shadowAfterDeltaRect;
@property(nonatomic) struct CGRect shadowDeltaRect; // @synthesize shadowDeltaRect;
@property(nonatomic) struct CGRect windowSnapshotStartFrame; // @synthesize windowSnapshotStartFrame=_windowSnapshotStartFrame;
@property(retain, nonatomic) id transitionedWindowAfterContents; // @synthesize transitionedWindowAfterContents=_transitionedWindowAfterContents;
@property(retain, nonatomic) id transitionedWindowBeforeContents; // @synthesize transitionedWindowBeforeContents=_transitionedWindowBeforeContents;
@property(nonatomic) struct CGRect transitionedWindowTargetFrame; // @synthesize transitionedWindowTargetFrame=_transitionedWindowTargetFrame;
- (BOOL)_hostsLayersInWindowServer;
- (void)dealloc;
- (void)disableAutomaticTermination;
- (void)enableAutomaticTermination;
- (void)startExitFullScreenAnimationWithDuration:(double)arg1 reduced:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startEnterFullScreenAnimationWithDuration:(double)arg1 reduced:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct CGRect)_adjustedWindowEndFrame;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (void)positionLayersForEnter:(BOOL)arg1 reduced:(BOOL)arg2;
- (struct CGRect)adjustedStartFrame;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (void)_setWindowTag;
- (BOOL)_shouldAutoFlattenLayerTree;
- (id)initWithScreen:(id)arg1;

@end

