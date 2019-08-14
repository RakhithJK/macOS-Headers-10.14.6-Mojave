//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNAvatarCardActionsViewDelegate-Protocol.h>
#import <ContactsUI/CNCardTransitioning-Protocol.h>
#import <ContactsUI/CNContactActionsControllerDelegate-Protocol.h>
#import <ContactsUI/UIGestureRecognizerDelegate-Protocol.h>

@class CNAvatarCardActionsView, CNAvatarCardController, CNContactActionsController, NSArray, NSLayoutConstraint, NSString, UIImage, UIView;
@protocol CNAvatarCardActionListController, CNAvatarCardActionListOrbSupport, CNAvatarCardViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarCardViewController : UIViewController <CNAvatarCardActionsViewDelegate, CNContactActionsControllerDelegate, CNCardTransitioning, UIGestureRecognizerDelegate>
{
    BOOL _visible;
    BOOL _hasHeader;
    BOOL _headerOnTop;
    CNAvatarCardController *_cardController;
    id <CNAvatarCardViewControllerDelegate> _delegate;
    UIView *_sourceView;
    CNAvatarCardActionsView *_legacyContactActionsView;
    CNContactActionsController *_actionsController;
    NSLayoutConstraint *_actionsViewControllerHeightConstraint;
    UIView *_effectView;
    NSArray *_verticalConstraints;
    double _borderMargin;
    UIView *_headerContainerView;
    UIView *_actionsListView;
}

@property(retain, nonatomic) UIView *actionsListView; // @synthesize actionsListView=_actionsListView;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(nonatomic) double borderMargin; // @synthesize borderMargin=_borderMargin;
@property(retain, nonatomic) NSArray *verticalConstraints; // @synthesize verticalConstraints=_verticalConstraints;
@property(retain, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) NSLayoutConstraint *actionsViewControllerHeightConstraint; // @synthesize actionsViewControllerHeightConstraint=_actionsViewControllerHeightConstraint;
@property(retain, nonatomic) CNContactActionsController *actionsController; // @synthesize actionsController=_actionsController;
@property(retain, nonatomic) CNAvatarCardActionsView *legacyContactActionsView; // @synthesize legacyContactActionsView=_legacyContactActionsView;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) BOOL headerOnTop; // @synthesize headerOnTop=_headerOnTop;
@property(nonatomic) BOOL hasHeader; // @synthesize hasHeader=_hasHeader;
@property(nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <CNAvatarCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak CNAvatarCardController *cardController; // @synthesize cardController=_cardController;
- (void).cxx_destruct;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
@property BOOL transitioningImageVisible;
@property(readonly, nonatomic) struct CGRect transitioningImageFrame;
@property(readonly, nonatomic) UIImage *transitioningImage;
@property(readonly, nonatomic) struct CGRect transitioningContentFrame;
@property(readonly, nonatomic) struct CGRect transitioningFrame;
@property(readonly, nonatomic) UIView *transitioningView;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dismissViewControllerForCardActionsView:(id)arg1 animated:(BOOL)arg2;
- (id)viewControllerForCardActionsView:(id)arg1;
- (void)cardActionsView:(id)arg1 didShowActions:(id)arg2;
- (id)cardActionsView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (void)refreshActions;
- (void)_updatePreferredSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)updateActionsViewBackgroundColor;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateActionsControllerHeightConstraint;
- (void)didAddActionsViewToHierarchy;
- (void)willAddActionsViewToHierarchy;
@property(readonly, nonatomic) id <CNAvatarCardActionListController> actionListController;
@property(readonly, nonatomic) id <CNAvatarCardActionListOrbSupport> actionListViewController;
- (id)viewForTouchContinuation;
- (id)actionsView;
@property(nonatomic) BOOL bypassActionValidation;
@property(copy, nonatomic) NSArray *actionCategories;
- (struct CGRect)_photoFrameInView:(id)arg1;
@property(nonatomic) BOOL dismissesBeforePerforming;
@property(nonatomic) BOOL actionsReversed;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContacts:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *transitioningContentView;

@end
