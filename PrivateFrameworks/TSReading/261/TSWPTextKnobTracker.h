//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSDKnobTracker.h>

@class NSTimer, TSWPEditingController, TSWPTextMagnifierRanged;

@interface TSWPTextKnobTracker : TSDKnobTracker
{
    TSWPEditingController *_editingController;
    struct _NSRange _rangeAtStart;
    int _selectionType;
    unsigned long long _headCharAtStart;
    unsigned long long _tailCharAtStart;
    BOOL _multiTap;
    NSTimer *_textMagnifierTimer;
    TSWPTextMagnifierRanged *_magnifier;
    BOOL _doneTracking;
    BOOL _knobMoved;
    BOOL _didShowMagnifier;
    BOOL _ignoreNextCall;
}

+ (const struct TSWPLineFragment *)p_lineFragmentForCharIndex:(unsigned long long)arg1 knobTag:(unsigned long long)arg2 selectionType:(int)arg3 rep:(id)arg4;
@property(nonatomic) BOOL ignoreNextCall; // @synthesize ignoreNextCall=_ignoreNextCall;
@property(readonly, nonatomic) BOOL didShowMagnifier; // @synthesize didShowMagnifier=_didShowMagnifier;
@property(retain, nonatomic) TSWPEditingController *editingController; // @synthesize editingController=_editingController;
- (double)unscaledStartAutoscrollThreshold;
- (void)autoscrollWillNotStart;
- (void)updateAfterAutoscroll:(id)arg1;
- (id)icc;
- (void)updateAfterAutoscroll:(id)arg1 atPoint:(struct CGPoint)arg2;
- (struct _NSRange)adjustSelectionRange:(struct _NSRange)arg1 forStorage:(id)arg2;
- (BOOL)fixupWordSelection;
- (BOOL)shouldHideOtherKnobs;
- (unsigned long long)p_charIndexForKnob:(unsigned long long)arg1 selection:(id)arg2;
- (void)p_fixUpWordSelection;
- (BOOL)p_newTailCharIndex:(unsigned long long)arg1 isPastHeadCharIndex:(unsigned long long)arg2 rep:(id)arg3;
- (BOOL)p_newHeadCharIndex:(unsigned long long)arg1 isPastTailCharIndex:(unsigned long long)arg2 rep:(id)arg3;
- (void)p_setSelectionFromPoint:(struct CGPoint)arg1;
- (void)p_stopMagnifyingWithAnimation:(BOOL)arg1;
- (void)p_magnifyWithTarget:(id)arg1 magnificationPoint:(struct CGPoint)arg2 offset:(struct CGPoint)arg3 animated:(BOOL)arg4 delayed:(BOOL)arg5;
- (void)p_startMagnifying;
- (id)p_rangedMagnifier;
- (_Bool)p_isMagnifyingVerticalText;
- (void)p_cleanupWhenDone;
- (void)endMovingKnob;
- (void)moveKnobToCanvasPosition:(struct CGPoint)arg1;
- (double)delay;
- (void)dealloc;
- (id)initWithRep:(id)arg1 knob:(id)arg2;

@end
