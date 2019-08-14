//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, UICalloutBarBackground, UICalloutBarButton, UIResponder, UIScrollView, UIStackView;

@interface UICalloutBar : UIView
{
    id m_delegate;
    struct CGPoint m_pointBelowControls;
    struct CGPoint m_pointAboveControls;
    struct CGPoint m_pointLeftOfControls;
    struct CGPoint m_pointRightOfControls;
    struct CGPoint m_targetPoint;
    int m_targetDirection;
    BOOL m_targetHorizontal;
    BOOL m_fadeAfterCommand;
    BOOL m_recalcVisibleItems;
    int m_pageCount;
    int m_currentPage;
    BOOL m_supressesHorizontalMovement;
    struct CGRect m_controlFrame;
    struct CGRect m_targetRect;
    UIView *m_targetView;
    struct CGRect m_supressesHorizontalMovementFrame;
    double m_supressedHorizontalMovementX;
    int m_arrowDirection;
    double m_availableSpaceOnLeft;
    double m_availableSpaceOnRight;
    NSArray *m_systemButtonDescriptions;
    NSMutableArray *m_currentSystemButtons;
    NSMutableArray *m_extraButtons;
    UICalloutBarButton *m_nextButton;
    UICalloutBarButton *m_previousButton;
    NSMutableArray *m_rectsToEvade;
    UICalloutBarBackground *m_overlay;
    double m_fadedTime;
    NSDictionary *m_currentAppearOrFadeContext;
    id m_responderTarget;
    NSArray *m_replacements;
    NSArray *m_extraItems;
    NSString *m_untruncatedString;
    BOOL m_didPromptForReplace;
    BOOL m_showAllReplacements;
    BOOL m_ignoreFade;
    BOOL m_suppressesAppearance;
    BOOL m_isDisplayingVertically;
    UIScrollView *m_verticalScrollView;
    UIStackView *m_verticalStackView;
    NSMutableArray *m_axSeparatorViews;
}

+ (void)hideSharedCalloutBarIfTargetView:(id)arg1;
+ (void)hideSharedCalloutBar;
+ (void)fadeSharedCalloutBarIfTargetView:(id)arg1;
+ (void)fadeSharedCalloutBar;
+ (BOOL)sharedCalloutBarIsVisible;
+ (void)_releaseSharedInstance;
+ (id)activeCalloutBar;
+ (id)sharedCalloutBar;
+ (void)performWithoutAffectingSharedCalloutBar:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIStackView *verticalStackView; // @synthesize verticalStackView=m_verticalStackView;
@property(readonly, nonatomic) UIScrollView *verticalScrollView; // @synthesize verticalScrollView=m_verticalScrollView;
@property(readonly, nonatomic) BOOL isDisplayingVertically; // @synthesize isDisplayingVertically=m_isDisplayingVertically;
@property(nonatomic) BOOL suppressesAppearance; // @synthesize suppressesAppearance=m_suppressesAppearance;
@property(retain, nonatomic) NSDictionary *currentAppearOrFadeContext; // @synthesize currentAppearOrFadeContext=m_currentAppearOrFadeContext;
@property(nonatomic) BOOL supressesHorizontalMovement; // @synthesize supressesHorizontalMovement=m_supressesHorizontalMovement;
@property(copy, nonatomic) NSString *untruncatedString; // @synthesize untruncatedString=m_untruncatedString;
@property(copy, nonatomic) NSArray *extraItems; // @synthesize extraItems=m_extraItems;
@property(nonatomic) BOOL showAllReplacements; // @synthesize showAllReplacements=m_showAllReplacements;
@property(copy, nonatomic) NSArray *replacements; // @synthesize replacements=m_replacements;
@property(nonatomic) __weak UIResponder *responderTarget; // @synthesize responderTarget=m_responderTarget;
@property(nonatomic) int arrowDirection; // @synthesize arrowDirection=m_arrowDirection;
@property(nonatomic) __weak UIView *targetView; // @synthesize targetView=m_targetView;
@property(nonatomic) struct CGRect targetRect; // @synthesize targetRect=m_targetRect;
@property(readonly, nonatomic) NSArray *rectsToEvade; // @synthesize rectsToEvade=m_rectsToEvade;
@property(nonatomic) __weak id delegate; // @synthesize delegate=m_delegate;
@property(nonatomic) struct CGRect controlFrame; // @synthesize controlFrame=m_controlFrame;
@property(nonatomic) BOOL targetHorizontal; // @synthesize targetHorizontal=m_targetHorizontal;
@property(nonatomic) int targetDirection; // @synthesize targetDirection=m_targetDirection;
@property(nonatomic) struct CGPoint targetPoint; // @synthesize targetPoint=m_targetPoint;
@property(nonatomic) struct CGPoint pointRightOfControls; // @synthesize pointRightOfControls=m_pointRightOfControls;
@property(nonatomic) struct CGPoint pointLeftOfControls; // @synthesize pointLeftOfControls=m_pointLeftOfControls;
@property(nonatomic) struct CGPoint pointBelowControls; // @synthesize pointBelowControls=m_pointBelowControls;
@property(nonatomic) struct CGPoint pointAboveControls; // @synthesize pointAboveControls=m_pointAboveControls;
- (void).cxx_destruct;
- (void)clearSupressesHorizontalMovementFrame;
- (void)clearReplacements;
- (BOOL)hasReplacements;
- (void)clearEvadeRects;
- (void)addRectToEvade:(struct CGRect)arg1;
- (void)fadeAnimationDidStopWithContext:(id)arg1 finished:(BOOL)arg2;
- (void)appearAnimationDidStopWithContext:(id)arg1;
- (BOOL)recentlyFaded;
- (void)updateAnimated:(BOOL)arg1;
- (void)update;
- (void)hide;
- (void)hideIfTargetView:(id)arg1;
- (void)fade;
- (void)fadeIfTargetView:(id)arg1;
- (void)_fadeAfterCommand:(SEL)arg1;
- (void)_showAsContextMenuSharingObjects:(id)arg1;
- (void)_endOngoingAppearOrFadeAnimations;
- (void)appear;
- (void)show;
- (void)buttonHighlighted:(id)arg1 highlighted:(BOOL)arg2;
- (void)setTargetRect:(struct CGRect)arg1 view:(id)arg2 arrowDirection:(int)arg3;
- (void)setTargetRect:(struct CGRect)arg1 view:(id)arg2 pointLeftOfControls:(struct CGPoint)arg3 pointRightOfControls:(struct CGPoint)arg4;
- (void)setTargetRect:(struct CGRect)arg1 view:(id)arg2 pointBelowControls:(struct CGPoint)arg3 pointAboveControls:(struct CGPoint)arg4;
- (SEL)_actionForButton:(id)arg1;
- (id)_visibleButtons;
- (BOOL)_updateVisibleItemsAnimated:(BOOL)arg1;
- (void)adjustFrameToAvoidDividerOnArrow;
- (void)addVerticalSeparatorAfterButton:(id)arg1;
- (void)updateForCurrentVerticalPage;
- (void)updateForCurrentHorizontalPage;
- (void)updateForCurrentPage;
- (void)configureButtons:(double)arg1;
- (void)configureButtonsForVerticalView:(double)arg1;
- (void)shrinkButtonTextSize:(id)arg1;
- (BOOL)setFrameForSize:(struct CGSize)arg1;
- (void)updateAvailableButtons;
- (BOOL)calculateControlFrameInsideTargetRect:(struct CGSize)arg1;
- (BOOL)calculateControlFrameForCalloutSize:(struct CGSize)arg1 right:(BOOL)arg2;
- (BOOL)calculateControlFrameForCalloutSize:(struct CGSize)arg1 below:(BOOL)arg2;
- (double)maxVerticalCalloutHeightForMinButtonHeight:(double)arg1;
- (double)supressHorizontalXMovementIfNeededForPoint:(struct CGPoint)arg1 proposedX:(double)arg2;
- (BOOL)rectClear:(struct CGRect)arg1;
- (void)resetPage;
- (struct CGRect)textEffectsWindowSafeArea;
- (int)textEffectsVisibilityLevel;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;
- (void)_showNextItems:(id)arg1;
- (void)_showPreviousItems:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (id)_targetForAction:(SEL)arg1;
- (BOOL)_touchesInsideShouldHideCalloutBar;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) BOOL visible;
- (void)applicationDidAddDeactivationReason:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

