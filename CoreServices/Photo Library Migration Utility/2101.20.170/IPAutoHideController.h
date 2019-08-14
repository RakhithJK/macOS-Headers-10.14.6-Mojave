//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSTimer;

@interface IPAutoHideController : NSObject
{
    BOOL _paused;
    int _state;
    double _timeToWaitBeforeShowing;
    NSTimer *_showTimer;
    double _timeToWaitBeforeWantingToHide;
    double _timeToWaitBeforeHiding;
    NSTimer *_hideTimer;
    CDUnknownBlockType _hideBlock;
    CDUnknownBlockType _showBlock;
    CDUnknownBlockType _canUnpausePredicate;
}

@property(nonatomic) double timeToWaitBeforeShowing; // @synthesize timeToWaitBeforeShowing=_timeToWaitBeforeShowing;
@property(nonatomic) double timeToWaitBeforeHiding; // @synthesize timeToWaitBeforeHiding=_timeToWaitBeforeHiding;
@property(nonatomic) double timeToWaitBeforeWantingToHide; // @synthesize timeToWaitBeforeWantingToHide=_timeToWaitBeforeWantingToHide;
@property(copy, nonatomic) CDUnknownBlockType canUnpausePredicate; // @synthesize canUnpausePredicate=_canUnpausePredicate;
@property(copy, nonatomic) CDUnknownBlockType showBlock; // @synthesize showBlock=_showBlock;
@property(copy, nonatomic) CDUnknownBlockType hideBlock; // @synthesize hideBlock=_hideBlock;
- (void)_setToolbarsVisible:(BOOL)arg1 allowAnimation:(BOOL)arg2 successState:(int)arg3 failState:(int)arg4;
- (void)_wantToHide;
- (void)_enterState:(int)arg1;
- (id)_nameForState:(int)arg1;
- (void)unpause;
- (void)pause;
- (void)setPaused:(BOOL)arg1;
- (void)_delayTimer:(id)arg1 byTimeInterval:(double)arg2;
- (void)_invalidateTimer:(id *)arg1;
- (void)cancelRequest;
- (void)requestToShow;
- (void)setToolbarVisible:(BOOL)arg1 allowAnimation:(BOOL)arg2;
- (void)forceHidden;
- (void)forceVisible;
- (void)dealloc;

@end

