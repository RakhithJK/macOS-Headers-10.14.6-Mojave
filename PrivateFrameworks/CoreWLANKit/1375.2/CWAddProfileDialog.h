//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <CoreWLANKit/NSCollectionViewDelegate-Protocol.h>
#import <CoreWLANKit/NSTextFieldDelegate-Protocol.h>

@class CWInterface, NSButton, NSData, NSImageView, NSPopUpButton, NSProgressIndicator, NSScrollView, NSSecureTextField, NSString, NSTextField, NSView, SFCertificateView;

@interface CWAddProfileDialog : NSWindowController <NSCollectionViewDelegate, NSTextFieldDelegate>
{
    CWInterface *_interface;
    NSData *_ssidData;
    unsigned long long _securityType;
    id _delegate;
    BOOL _showingOpen;
    BOOL _showingPassword;
    BOOL _showingPSK;
    BOOL _showingEnterprise;
    BOOL _showingCertificateSelector;
    BOOL _showingCertificate;
    BOOL _showingManual;
    BOOL _optionKey;
    BOOL _showingAutomaticEAP;
    BOOL _showingEAPTLS;
    BOOL _certificatesAvailable;
    SFCertificateView *certificateView;
    NSTextField *windowTitleLabel;
    NSTextField *windowDescriptionLabel;
    NSButton *okButton;
    NSButton *cancelButton;
    NSView *securityTypeView;
    NSPopUpButton *securityTypePopupButton;
    NSView *networkNameView;
    NSTextField *networkNameField;
    NSView *usernameView;
    NSTextField *usernameField;
    NSView *passwordView;
    NSSecureTextField *passwordField;
    NSTextField *revealedPasswordField;
    NSView *pskView;
    NSTextField *revealedPSKField;
    NSSecureTextField *pskField;
    NSView *certificateSelectorView;
    NSPopUpButton *certificatePopUpButton;
    NSButton *certificateDetailButton;
    NSScrollView *certificateDetailView;
    NSTextField *statusMessageLabel;
    NSButton *warningButton;
    NSProgressIndicator *progressIndicator;
    NSView *eapModeView;
    NSPopUpButton *eapModePopUpButton;
    NSView *showPasswordView;
    NSButton *showPasswordCheckboxButton;
    NSButton *chooseNetworkButton;
    NSButton *helpButton;
    NSImageView *imageView;
    NSTextField *pskHintText;
}

+ (id)addProfileDialogWithInterface:(id)arg1 ssid:(id)arg2 securityType:(unsigned long long)arg3;
@property unsigned long long securityType; // @synthesize securityType=_securityType;
@property(copy) NSData *ssidData; // @synthesize ssidData=_ssidData;
@property id delegate; // @synthesize delegate=_delegate;
@property(retain) CWInterface *interface; // @synthesize interface=_interface;
- (BOOL)eapCertificatesAvailable;
- (long long)securityTagForSecurityType:(unsigned long long)arg1;
- (void)populateEAPModes;
- (void)populateCertificates;
- (void)populateSecurityClasses;
- (void)populateSecurityTypes;
- (BOOL)validateSecurityTypeForTag:(long long)arg1;
- (BOOL)validateEntries;
- (void)resetSecurityEntries;
- (void)setSecurityTypeViewForTag:(long long)arg1;
- (id)localizedStringForKey:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)onChooseNetworkButton:(id)arg1;
- (void)onEAPModePopUpButton:(id)arg1;
- (void)onSecurityTypePopupButton:(id)arg1;
- (void)onCertificatePopUpButton:(id)arg1;
- (void)onCertificateDetailButton:(id)arg1;
- (void)onShowPasswordCheckboxButton:(id)arg1;
- (void)onCancelButton:(id)arg1;
- (void)onOKButton:(id)arg1;
- (void)onHelpButton:(id)arg1;
- (void)onHiddenNetworkCheckboxButton:(id)arg1;
- (void)onConnectAutomaticallyCheckboxButton:(id)arg1;
- (void)windowDidLoad;
- (void)close;
- (void)awakeFromNib;
- (void)__updateWindowFrame:(struct CGRect)arg1 complete:(CDUnknownBlockType)arg2;
- (void)removeEnterpriseViews:(struct CGRect *)arg1;
- (void)insertEnterpriseViews;
- (void)expandFrameForEnterpriseViews:(struct CGRect *)arg1;
- (void)removeCertificateDetailView:(struct CGRect *)arg1;
- (void)insertCertificateDetailView;
- (void)expandFrameForCertificateDetailView:(struct CGRect *)arg1;
- (void)removePSKView:(struct CGRect *)arg1;
- (void)insertPSKView;
- (void)expandFrameForPSKView:(struct CGRect *)arg1;
- (void)removePasswordView:(struct CGRect *)arg1;
- (void)insertPasswordView;
- (void)expandFrameForPasswordView:(struct CGRect *)arg1;
- (void)insertManualConnectView;
- (void)removeManualConnectView:(struct CGRect *)arg1;
- (void)expandFrameForManualConnectView:(struct CGRect *)arg1;
- (void)insertOpenView;
- (void)removeOpenView:(struct CGRect *)arg1;
- (void)expandFrameForOpenView:(struct CGRect *)arg1;
- (id)initWithInterface:(id)arg1 ssid:(id)arg2 securityType:(unsigned long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

