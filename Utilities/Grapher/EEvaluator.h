//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CPInspector.h"

@class CPViewController, ECurveDisplay, EDisplayView, EInputView, EOutputView, EScalarFieldDisplay, ESurfaceDisplay, ETableOutput, EVectorFieldDisplay, GGraph, GView, NSArray, NSMutableArray, NSView;

@interface EEvaluator : CPInspector
{
    EInputView *mSingleInput;
    EInputView *mDoubleInput;
    EInputView *mTripleInput;
    EInputView *mMultipleInput;
    ETableOutput *mMultipleOutput;
    ECurveDisplay *mCurveDisplay;
    ESurfaceDisplay *mSurfaceDisplay;
    EVectorFieldDisplay *mVectorFieldDisplay;
    EScalarFieldDisplay *mScalarFieldDisplay;
    NSView *mCloseView;
    CPViewController *mViewController;
    GView *mDataView;
    NSView *mView;
    GGraph *mGraph;
    NSArray *mInput;
    NSArray *mOutput;
    NSMutableArray *mEvaluations;
    EInputView *mInputView;
    EOutputView *mOutputView;
    EDisplayView *mDisplayView;
}

+ (void)current:(double *)arg1 before:(double *)arg2 after:(double *)arg3 variable:(id)arg4 resolution:(double)arg5;
+ (id)outputForGraph:(id)arg1 derivatives:(unsigned long long *)arg2;
+ (id)inputForGraph:(id)arg1;
+ (id)sharedInspector;
- (BOOL)removeSubviewsBeforeResizingWindow;
- (BOOL)resizeSubviewWidths;
- (id)evaluations;
- (void)evaluate;
- (id)view;
- (id)dataView;
- (id)graph;
- (void)stopEvaluation;
- (void)startEvaluationWithViewController:(id)arg1;
- (BOOL)canStartEvaluationWithViewController:(id)arg1;
- (BOOL)handleMouseDown:(id)arg1 inView:(id)arg2 controller:(id)arg3;
- (BOOL)setGraph:(id)arg1;
- (id)viewsToBeDisplayed;
- (id)displayViewForGraph:(id)arg1;
- (id)outputViewForGraph:(id)arg1;
- (void)updateOutputViewWithDefinition:(id)arg1;
- (BOOL)removeInputFromOutput;
- (BOOL)acceptDerivativeOf:(id)arg1 order:(unsigned long long)arg2;
- (id)inputViewForGraph:(id)arg1;
- (void)dealloc;
- (id)windowNibName;

@end

