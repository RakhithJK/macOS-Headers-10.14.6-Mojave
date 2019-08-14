//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDLayoutManipulatingTracker-Protocol.h>

@class TSDAutoscroll, TSDInteractiveCanvasController, TSDKnob, TSDRep;

@interface TSDKnobTracker : NSObject <TSDLayoutManipulatingTracker>
{
    TSDRep *mRep;
    TSDKnob *mKnob;
    struct CGPoint mCurrentPosition;
    struct CGPoint mKnobOffset;
    BOOL mDidBegin;
    BOOL mDidDrag;
    BOOL mDragEnding;
    BOOL mEndedOperationDueToESC;
    BOOL mIsInspectorDrivenTracking;
    TSDAutoscroll *mAutoscroll;
}

@property(retain, nonatomic) TSDAutoscroll *autoscroll; // @synthesize autoscroll=mAutoscroll;
@property(readonly, nonatomic) struct CGPoint knobOffset; // @synthesize knobOffset=mKnobOffset;
@property(readonly, nonatomic) BOOL endedOperationDueToESC; // @synthesize endedOperationDueToESC=mEndedOperationDueToESC;
@property(nonatomic) BOOL dragEnding; // @synthesize dragEnding=mDragEnding;
@property(nonatomic) struct CGPoint currentPosition; // @synthesize currentPosition=mCurrentPosition;
@property(nonatomic) BOOL didDrag; // @synthesize didDrag=mDidDrag;
@property(readonly, nonatomic) BOOL didBegin; // @synthesize didBegin=mDidBegin;
@property(retain, nonatomic) TSDKnob *knob; // @synthesize knob=mKnob;
@property(nonatomic) BOOL isInspectorDrivenTracking; // @synthesize isInspectorDrivenTracking=mIsInspectorDrivenTracking;
@property(retain, nonatomic) TSDRep *rep; // @synthesize rep=mRep;
- (BOOL)operationShouldBeDynamic;
- (BOOL)supportsAlignmentGuides;
- (void)commitChangesForReps:(id)arg1;
- (BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;
- (void)changeDynamicLayoutsForReps:(id)arg1;
- (int)allowedAutoscrollDirections;
- (double)unscaledStartAutoscrollThreshold;
- (void)autoscrollWillNotStart;
- (void)updateAfterAutoscroll:(id)arg1;
- (BOOL)wantsAutoscroll;
- (void)i_resetCurrentPositionToKnobPositionIfAppropriate;
- (void)i_setKnobOffset:(struct CGPoint)arg1;
- (void)willEndMovingKnobDueToESC;
- (BOOL)shouldEndMovingKnobOnESC;
- (BOOL)shouldUseKnobOffset;
- (BOOL)allowHUDToDisplay;
- (BOOL)shouldHideSelectionHighlight;
- (BOOL)shouldHideOtherKnobs;
- (unsigned long long)enabledKnobMask;
- (struct CGAffineTransform)transformInRootForStandardKnobs;
- (struct CGRect)currentBoundsForStandardKnobs;
- (void)endMovingKnob;
- (void)beginMovingKnob;
- (struct CGPoint)convertKnobPositionToUnscaledCanvas:(struct CGPoint)arg1;
- (void)moveKnobToCanvasPosition:(struct CGPoint)arg1;
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;
@property(readonly, nonatomic) double delay;
@property(readonly, nonatomic) TSDInteractiveCanvasController *icc;
- (void)dealloc;
- (id)initWithRep:(id)arg1 knob:(id)arg2;

@end

