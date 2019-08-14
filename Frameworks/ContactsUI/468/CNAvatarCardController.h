//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNAvatarCardControllerOrbTransitionDelegate-Protocol.h>
#import <ContactsUI/CNAvatarCardViewControllerDelegate-Protocol.h>

@class CNAvatarCardViewController, CNAvatarView, CNContact, CNContactOrbHeaderView, NSArray, NSString, UIAlertController, UIGestureRecognizer, UIPreviewInteraction, UITapGestureRecognizer, UIView, UIViewController;
@protocol CNAvatarCardControllerDelegate;

@interface CNAvatarCardController : NSObject <CNAvatarCardViewControllerDelegate, CNAvatarCardControllerOrbTransitionDelegate>
{
    BOOL _visible;
    BOOL _actionsNeedRefresh;
    BOOL _bypassActionValidation;
    NSArray *_contacts;
    NSArray *_actionCategories;
    id <CNAvatarCardControllerDelegate> _delegate;
    UIView *_sourceView;
    UIView *_highlightView;
    UIAlertController *_alertController;
    CNAvatarCardViewController *_cardViewController;
    UIPreviewInteraction *_previewInteraction;
    long long _presentationResult;
    NSArray *_cardControllerConstraints;
    UITapGestureRecognizer *_tapGestureRecognizer;
    CNAvatarView *_avatarView;
    CNContactOrbHeaderView *_headerView;
    UIGestureRecognizer *_rolloverGestureRecognizer;
    struct CGRect _sourceRect;
}

+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(BOOL)arg1;
+ (id)descriptorForRequiredKeys;
+ (BOOL)avatarCardEnabled;
+ (BOOL)showsWithTapAndHold;
@property(nonatomic) BOOL bypassActionValidation; // @synthesize bypassActionValidation=_bypassActionValidation;
@property(nonatomic) BOOL actionsNeedRefresh; // @synthesize actionsNeedRefresh=_actionsNeedRefresh;
@property(retain, nonatomic) UIGestureRecognizer *rolloverGestureRecognizer; // @synthesize rolloverGestureRecognizer=_rolloverGestureRecognizer;
@property(retain, nonatomic) CNContactOrbHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSArray *cardControllerConstraints; // @synthesize cardControllerConstraints=_cardControllerConstraints;
@property(nonatomic) long long presentationResult; // @synthesize presentationResult=_presentationResult;
@property(retain, nonatomic) UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
@property(retain, nonatomic) CNAvatarCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <CNAvatarCardControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *actionCategories; // @synthesize actionCategories=_actionCategories;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (void).cxx_destruct;
- (id)preparedViewControllerForPresentationWithGestureRecognizer:(id)arg1;
- (BOOL)_previewInteractionShouldFinishTransitionToPreview:(id)arg1;
- (id)_previewInteraction:(id)arg1 viewControllerPresentationForPresentingViewController:(id)arg2;
- (id)_previewInteractionHighlighterForPreviewTransition:(id)arg1;
- (BOOL)previewInteractionShouldBegin:(id)arg1;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3;
- (void)orbTransitionDidEndTransition:(id)arg1;
- (void)orbTransitionDidPrepareTransition:(id)arg1 withContainerView:(id)arg2;
- (void)presentAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentAnimated:(BOOL)arg1;
- (void)cardViewControllerDidDismiss:(id)arg1;
- (void)cardViewControllerWillDismiss:(id)arg1;
- (id)cardViewController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (void)_updateHeaderViewFrame;
- (void)_setupForCardControllerPresentation;
- (void)_setupAlertController;
- (void)_setupCardViewControllerWithContacts:(id)arg1;
- (void)showContact:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(BOOL)arg1;
@property(readonly, nonatomic) UIViewController *presentingViewController;
- (void)showContact;
- (void)_updateCard;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) CNContact *contact;
- (void)configurePreviewInteraction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

