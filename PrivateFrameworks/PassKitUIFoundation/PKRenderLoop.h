//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PKRenderLoopDelegate;

@interface PKRenderLoop : NSObject
{
    unsigned int _activeDisplay;
    struct __CVDisplayLink *_displayLink;
    _Bool _effectivePaused;
    _Bool _background;
    _Bool _invalidated;
    _Bool _drawing;
    _Bool _inApplicationContext;
    _Bool _paused;
    long long _preferredFramesPerSecond;
    id <PKRenderLoopDelegate> _delegate;
}

@property(nonatomic) __weak id <PKRenderLoopDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(nonatomic) _Bool inApplicationContext; // @synthesize inApplicationContext=_inApplicationContext;
@property(readonly, nonatomic, getter=isDrawing) _Bool drawing; // @synthesize drawing=_drawing;
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void).cxx_destruct;
- (void)_updateEffectivePausedState;
- (_Bool)_subclassPreferredPauseState;
- (void)_drawAtTime:(double)arg1;
- (void)_didDraw;
- (void)_willDraw;
- (void)invalidate;
- (void)attachToDisplay:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

