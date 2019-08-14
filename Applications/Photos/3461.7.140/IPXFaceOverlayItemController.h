//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXFacesOverlayContainerViewItem.h"

#import "IPXSearchViewControllerResultsDelegate-Protocol.h"
#import "IPXSearchViewControllerSizingDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"

@class IPXFacesOverlayController, IPXSearchField, NSArray, NSButton, NSLayoutConstraint, NSString, NSTextField, NSTrackingArea, NSView, RDFaceTile, RDPerson;

@interface IPXFaceOverlayItemController : IPXFacesOverlayContainerViewItem <NSTextFieldDelegate, IPXSearchViewControllerResultsDelegate, IPXSearchViewControllerSizingDelegate>
{
    RDPerson *_suggestedPerson;
    BOOL _isMouseInsideFaceCircle;
    BOOL _isMouseInsideNameLabel;
    NSTrackingArea *_faceViewTrackingArea;
    NSTrackingArea *_labelViewTrackingArea;
    NSButton *_acceptButton;
    NSButton *_rejectButton;
    BOOL _highlightsOnMouseOver;
    BOOL _highlighted;
    BOOL _untouchedByUser;
    RDFaceTile *_faceTile;
    IPXFacesOverlayController *_overlayController;
    unsigned long long _baseDisplayStyle;
    unsigned long long _highlightedDisplayStyle;
    IPXSearchField *_nameField;
    NSLayoutConstraint *_widthConstraint;
    NSArray *_confirmDenyButtonsConstraints;
    NSView *_searchView;
}

@property(nonatomic) __weak NSView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) NSArray *confirmDenyButtonsConstraints; // @synthesize confirmDenyButtonsConstraints=_confirmDenyButtonsConstraints;
@property(nonatomic) __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic) __weak IPXSearchField *nameField; // @synthesize nameField=_nameField;
@property(nonatomic) BOOL untouchedByUser; // @synthesize untouchedByUser=_untouchedByUser;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) BOOL highlightsOnMouseOver; // @synthesize highlightsOnMouseOver=_highlightsOnMouseOver;
@property(nonatomic) unsigned long long highlightedDisplayStyle; // @synthesize highlightedDisplayStyle=_highlightedDisplayStyle;
@property(nonatomic) unsigned long long baseDisplayStyle; // @synthesize baseDisplayStyle=_baseDisplayStyle;
@property(nonatomic) IPXFacesOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(retain, nonatomic) RDFaceTile *faceTile; // @synthesize faceTile=_faceTile;
- (void).cxx_destruct;
- (BOOL)_isiCPLFacesLocalModelEnabled;
- (double)searchViewControllerResultsWindowMaxHeight:(id)arg1 intercellSpasing:(double)arg2 withVerticalMargin:(double)arg3;
- (void)searchViewControllerDidEndFieldEditing:(id)arg1;
- (void)searchViewControllerWillBeginFieldEditing:(id)arg1;
- (BOOL)searchViewControllerDidCancelSearch:(id)arg1;
- (void)searchViewController:(id)arg1 didChangeSearchString:(id)arg2;
- (id)searchViewControllerNoResultsString:(id)arg1;
- (void)searchViewController:(id)arg1 selectedSuggestion:(id)arg2 row:(long long)arg3;
- (void)_finishEditing;
- (void)handleRightMouseDownEvent:(id)arg1;
- (void)updateLabelView;
- (void)_updateLabelViewWithPersonName:(id)arg1;
- (void)_labelBackgroundViewClicked:(id)arg1;
- (id)_unnamedFaceLabelString;
- (void)_rejectSuggestedName;
- (void)_acceptSuggestedName;
- (void)_resizeLabelView;
- (void)setNameFieldStringValue:(id)arg1;
- (struct CGRect)frameForFaceView;
- (void)_performFaceFrameAdjustments:(unsigned char)arg1;
- (struct CGRect)_convertedFaceRect:(struct CGRect)arg1 usingPointCoordinatesConverter:(CDUnknownBlockType)arg2;
- (void)faceViewDidFinishDragging;
- (void)faceViewDidFinishResizing;
- (void)a_rejectFaces:(id)arg1;
- (void)a_makeKeyPhoto:(id)arg1;
- (void)a_deleteFace:(id)arg1;
- (void)updateFromFaceTile;
- (id)_buttonWithImage:(id)arg1 action:(SEL)arg2;
- (void)_updateFaceVisibilityAnimated:(BOOL)arg1;
- (void)setHighlightsOnMouseOver:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)loadViews;
@property(readonly, nonatomic) __weak NSTextField *labelTextField;
- (void)dealloc;
- (id)init;
- (id)initWithOverlayController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

