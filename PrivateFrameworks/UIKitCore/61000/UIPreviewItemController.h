//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteractionProgressObserver-Protocol.h>
#import <UIKitCore/UIPreviewInteractionControllerDelegate-Protocol.h>

@class CADisplayLink, NSArray, NSDictionary, NSString, UIGestureRecognizer, UIImageView, UIPreviewInteractionController, UIView, UIViewController;
@protocol UIPreviewItemDelegate;

@interface UIPreviewItemController : NSObject <UIPreviewInteractionControllerDelegate, UIInteractionProgressObserver>
{
    struct NSObject *_lookupItem;
    UIPreviewInteractionController *_previewInteractionController;
    UIView *_previewIndicatorView;
    UIImageView *_previewIndicatorImageView;
    UIView *_previewIndicatorSnapshotView;
    CADisplayLink *_previewIndicatorDisplayLink;
    double _lastPreviewIndicatorAnimationTimestamp;
    double _previewIndicatorAnimationTargetAlpha;
    struct CGRect _previewIndicatorBoundingRect;
    BOOL _previewIndicatorUsesStandardAnimation;
    BOOL _contentManagedByClient;
    UIPreviewItemController *_strongSelf;
    BOOL _interactionInProgress;
    id <UIPreviewItemDelegate> _delegate;
    long long _type;
    NSDictionary *_previewData;
    UIViewController *_presentedViewController;
    UIViewController *_presentingViewController;
    UIView *_view;
}

@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) BOOL interactionInProgress; // @synthesize interactionInProgress=_interactionInProgress;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(readonly, nonatomic) NSDictionary *previewData; // @synthesize previewData=_previewData;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <UIPreviewItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopInteraction;
- (void)startInteraction;
- (void)setupPreviewIndicatorInSourceView:(id)arg1;
- (void)preparePreviewIndicatorViewInSourceView:(id)arg1 updateScreen:(BOOL)arg2;
- (void)clearPreviewIndicator;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(struct CGPoint)arg3 inSourceView:(id)arg4;
- (void)updatePreviewIndicatorAnimation:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)previewInteractionController:(id)arg1 interactionProgress:(id)arg2 forRevealAtLocation:(struct CGPoint)arg3 inSourceView:(id)arg4 containerView:(id)arg5;
- (BOOL)previewInteractionController:(id)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint)arg2 inView:(id)arg3 presentingViewController:(id *)arg4;
- (BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;
- (void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
- (id)previewViewControllerForPosition:(struct CGPoint)arg1 inSourceView:(id)arg2 documentProperties:(id)arg3;
- (BOOL)_isMobileSafariRestricted;
- (BOOL)_shouldCancelPreviewWithNegativeFeedback;
@property(readonly, nonatomic) UIGestureRecognizer *presentationSecondaryGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *presentationGestureRecognizer;
@property(readonly, nonatomic) NSArray *gestureRecognizers;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

