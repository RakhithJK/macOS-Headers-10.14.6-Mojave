//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HFHomeManagerObserver-Protocol.h"
#import "HFHomeObserver-Protocol.h"
#import "HUIncomingInvitationResponseControllerDelegate-Protocol.h"

@class CNAvatarView, CNContact, HMIncomingHomeInvitation, HUColoredButton, HUIncomingInvitationResponseController, NSString, UIActivityIndicatorView, UIButton, UILabel;
@protocol HOOnboardingIncomingInvitationViewControllerDelegate, NACancelable;

@interface HOOnboardingIncomingInvitationViewController : UIViewController <HFHomeManagerObserver, HFHomeObserver, HUIncomingInvitationResponseControllerDelegate>
{
    id <HOOnboardingIncomingInvitationViewControllerDelegate> _delegate;
    HMIncomingHomeInvitation *_invitation;
    CNContact *_contact;
    id <NACancelable> _acceptedPendingAddHomeTimeoutCancellationToken;
    HUIncomingInvitationResponseController *_responseController;
    CNAvatarView *_avatarView;
    UILabel *_homeNameLabel;
    UILabel *_acceptInfoLabel;
    UILabel *_infoLabel;
    HUColoredButton *_declineButton;
    HUColoredButton *_acceptButton;
    UIButton *_decideLaterButton;
    UIActivityIndicatorView *_spinner;
}

+ (id)_requiredKeyDescriptors;
+ (id)_formatDate:(id)arg1;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIButton *decideLaterButton; // @synthesize decideLaterButton=_decideLaterButton;
@property(retain, nonatomic) HUColoredButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) HUColoredButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *acceptInfoLabel; // @synthesize acceptInfoLabel=_acceptInfoLabel;
@property(retain, nonatomic) UILabel *homeNameLabel; // @synthesize homeNameLabel=_homeNameLabel;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) HUIncomingInvitationResponseController *responseController; // @synthesize responseController=_responseController;
@property(retain, nonatomic) id <NACancelable> acceptedPendingAddHomeTimeoutCancellationToken; // @synthesize acceptedPendingAddHomeTimeoutCancellationToken=_acceptedPendingAddHomeTimeoutCancellationToken;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) HMIncomingHomeInvitation *invitation; // @synthesize invitation=_invitation;
@property(nonatomic) __weak id <HOOnboardingIncomingInvitationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setNavigationBarVisibility;
- (void)_showSpinner;
- (void)_hideSpinner;
- (void)_acceptInvitation:(id)arg1;
- (void)_rejectInvitation:(id)arg1;
- (void)_decideLater:(id)arg1;
- (void)_createSubview;
- (void)invitationResponseController:(id)arg1 stateDidChange:(unsigned long long)arg2;
- (void)invitationResponseController:(id)arg1 presentViewController:(id)arg2;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (id)initWithIncomingInvitation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
