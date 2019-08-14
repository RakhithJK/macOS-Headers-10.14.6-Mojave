//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Silex/STTextCanvasRenderSource-Protocol.h>
#import <Silex/STTextTangierRepAccessibilityDataSource-Protocol.h>
#import <Silex/TSDRepDirectLayerHosting-Protocol.h>

@class CALayer, NSString, STTextTangierContainerInfo, STTextTangierFlowRep, SXTextLayouter, SXTextSource, TSDCanvas, TSDLayoutController;
@protocol STTextTangierRepAccessibilityElement, SXTextViewDelegate;

@interface SXTextView : UIView <STTextTangierRepAccessibilityDataSource, TSDRepDirectLayerHosting, STTextCanvasRenderSource>
{
    BOOL _isSelectable;
    BOOL _shouldHyphenate;
    BOOL _mightBeVisuallyMisplaced;
    SXTextLayouter *_textLayouter;
    id <SXTextViewDelegate> _delegate;
    SXTextSource *_textSource;
    STTextTangierContainerInfo *_textInfo;
    STTextTangierFlowRep<STTextTangierRepAccessibilityElement> *_rep;
    TSDLayoutController *_layoutController;
    CALayer *_repContainerLayer;
    CALayer *_overlayContainerLayer;
    TSDCanvas *_canvas;
    struct CGRect _frameInCanvas;
    struct CGRect _parentFrame;
}

@property(nonatomic) __weak TSDCanvas *canvas; // @synthesize canvas=_canvas;
@property(retain, nonatomic) CALayer *overlayContainerLayer; // @synthesize overlayContainerLayer=_overlayContainerLayer;
@property(retain, nonatomic) CALayer *repContainerLayer; // @synthesize repContainerLayer=_repContainerLayer;
@property(readonly, nonatomic) TSDLayoutController *layoutController; // @synthesize layoutController=_layoutController;
@property(nonatomic) __weak STTextTangierFlowRep<STTextTangierRepAccessibilityElement> *rep; // @synthesize rep=_rep;
@property(nonatomic) BOOL mightBeVisuallyMisplaced; // @synthesize mightBeVisuallyMisplaced=_mightBeVisuallyMisplaced;
@property(readonly, nonatomic) STTextTangierContainerInfo *textInfo; // @synthesize textInfo=_textInfo;
@property(nonatomic) BOOL shouldHyphenate; // @synthesize shouldHyphenate=_shouldHyphenate;
@property(nonatomic) BOOL isSelectable; // @synthesize isSelectable=_isSelectable;
@property(nonatomic) struct CGRect parentFrame; // @synthesize parentFrame=_parentFrame;
@property(readonly, nonatomic) SXTextSource *textSource; // @synthesize textSource=_textSource;
@property(nonatomic) __weak id <SXTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SXTextLayouter *textLayouter; // @synthesize textLayouter=_textLayouter;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)accessibilityElements;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityCustomRotorMembershipForRep:(id)arg1;
- (BOOL)accessibilityRepIsSelectable:(id)arg1;
- (void)provideInfosLayoutTo:(id)arg1;
- (id)infoGeometry;
@property(nonatomic) struct CGRect frameInCanvas; // @synthesize frameInCanvas=_frameInCanvas;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsLayout;
- (void)directLayerHostUpdateOverlayLayers:(id)arg1 forRep:(id)arg2;
- (void)_updateOverlayTransform;
- (void)directLayerhostUpdateTopLevelTilingLayers:(id)arg1 forRep:(id)arg2;
- (void)directLayerHostUpdateWithContainerLayer:(id)arg1 forRep:(id)arg2;
- (void)directLayerHostRemoveIfMatchingContainerLayer:(id)arg1 forRep:(id)arg2;
- (void)invalidate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

