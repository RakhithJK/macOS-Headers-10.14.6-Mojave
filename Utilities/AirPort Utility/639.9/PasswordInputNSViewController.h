//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSImageView, NSSecureTextField, NSString, NSTextField, NSView, SFPasswordAssistantInspectorController;

@interface PasswordInputNSViewController : NSViewController
{
    BOOL allowMultiplePasswords;
    BOOL showGuestView;
    BOOL showAirPlayView;
    BOOL showDiskPasswords;
    BOOL showAirPlayPassword;
    BOOL showSeparateDiskPasswordCheckbox;
    long long resizableHeightOffset;
    BOOL enableGuestNetwork;
    BOOL enableGuestNetworkSecurity;
    BOOL useSinglePassword;
    BOOL useSeparateDiskPassword;
    BOOL validateSinglePasswordAsWifi;
    BOOL devicePasswordValid;
    BOOL devicePasswordConfirmed;
    BOOL wifiPasswordValid;
    BOOL wifiPasswordConfirmed;
    BOOL diskPasswordValid;
    BOOL diskPasswordConfirmed;
    BOOL guestNetworkNameValid;
    BOOL guestPasswordValid;
    BOOL guestPasswordConfirmed;
    BOOL airplayPasswordValid;
    BOOL airplayPasswordConfirmed;
    BOOL airplayPasswordEmpty;
    BOOL airplayPasswordConfirmationEmpty;
    NSString *devicePassword;
    NSString *wifiPassword;
    NSString *diskPassword;
    NSString *guestPassword;
    NSString *airplayPassword;
    NSString *guestNetworkName;
    NSString *inputPrompt;
    NSString *devicePasswordConfirmation;
    NSString *wifiPasswordConfirmation;
    NSString *diskPasswordConfirmation;
    NSString *airplayPasswordConfirmation;
    NSString *guestPasswordConfirmation;
    NSSecureTextField *devicePasswordField;
    NSImageView *devicePasswordErrow;
    NSSecureTextField *airplayPasswordField;
    NSImageView *airplayPasswordErrow;
    NSSecureTextField *wifiPasswordField;
    NSImageView *wifiPasswordErrow;
    NSSecureTextField *diskPasswordField;
    NSImageView *diskPasswordErrow;
    NSSecureTextField *devicePasswordConfirmationField;
    NSImageView *devicePasswordConfirmationErrow;
    NSSecureTextField *airplayPasswordConfirmationField;
    NSImageView *airplayPasswordConfirmationErrow;
    NSSecureTextField *wifiPasswordConfirmationField;
    NSImageView *wifiPasswordConfirmationErrow;
    NSSecureTextField *diskPasswordConfirmationField;
    NSImageView *diskPasswordConfirmationErrow;
    NSSecureTextField *wifiPasswordFieldAlt;
    NSImageView *wifiPasswordAltErrow;
    NSSecureTextField *wifiPasswordConfirmationFieldAlt;
    NSImageView *wifiPasswordConfirmationAltErrow;
    NSSecureTextField *guestPasswordField;
    NSImageView *guestPasswordErrow;
    NSSecureTextField *guestPasswordConfirmationField;
    NSImageView *guestPasswordConfirmationErrow;
    NSTextField *guestNetworkNameField;
    NSImageView *guestNetworkNameErrow;
    NSTextField *guestPasswordCueLabelField;
    NSButton *guestNetworkSecureCheck;
    NSString *passwordPlaceholder;
    NSString *wifiPasswordLabel;
    NSString *airplayPasswordLabel;
    NSString *wifiPasswordCueLabel;
    NSString *guestPasswordCueLabel;
    NSView *singlePasswordView;
    NSView *multiplePasswordView;
    NSView *guestPasswordView;
    NSView *airplayPasswordView;
    SFPasswordAssistantInspectorController *passwordAssistantController;
}

@property(retain) NSString *guestPasswordCueLabel; // @synthesize guestPasswordCueLabel;
@property(retain) NSString *wifiPasswordCueLabel; // @synthesize wifiPasswordCueLabel;
@property(retain) NSString *airplayPasswordLabel; // @synthesize airplayPasswordLabel;
@property(retain) NSString *wifiPasswordLabel; // @synthesize wifiPasswordLabel;
@property(retain) NSString *passwordPlaceholder; // @synthesize passwordPlaceholder;
@property NSView *airplayPasswordView; // @synthesize airplayPasswordView;
@property NSView *guestPasswordView; // @synthesize guestPasswordView;
@property(retain) NSView *multiplePasswordView; // @synthesize multiplePasswordView;
@property(retain) NSView *singlePasswordView; // @synthesize singlePasswordView;
@property(readonly, nonatomic) BOOL devicePasswordValid; // @synthesize devicePasswordValid;
@property(readonly, nonatomic) BOOL devicePasswordConfirmed; // @synthesize devicePasswordConfirmed;
@property(readonly, nonatomic) BOOL airplayPasswordValid; // @synthesize airplayPasswordValid;
@property(readonly, nonatomic) BOOL airplayPasswordConfirmed; // @synthesize airplayPasswordConfirmed;
@property(readonly, nonatomic) BOOL diskPasswordValid; // @synthesize diskPasswordValid;
@property(readonly, nonatomic) BOOL diskPasswordConfirmed; // @synthesize diskPasswordConfirmed;
@property(readonly, nonatomic) BOOL wifiPasswordValid; // @synthesize wifiPasswordValid;
@property(readonly, nonatomic) BOOL wifiPasswordConfirmed; // @synthesize wifiPasswordConfirmed;
@property(readonly, nonatomic) BOOL guestPasswordConfirmed; // @synthesize guestPasswordConfirmed;
@property(readonly, nonatomic) BOOL guestPasswordValid; // @synthesize guestPasswordValid;
@property(readonly, nonatomic) BOOL guestNetworkNameValid; // @synthesize guestNetworkNameValid;
@property NSButton *guestNetworkSecureCheck; // @synthesize guestNetworkSecureCheck;
@property NSTextField *guestPasswordCueLabelField; // @synthesize guestPasswordCueLabelField;
@property NSTextField *guestNetworkNameField; // @synthesize guestNetworkNameField;
@property NSSecureTextField *guestPasswordConfirmationField; // @synthesize guestPasswordConfirmationField;
@property NSSecureTextField *guestPasswordField; // @synthesize guestPasswordField;
@property NSSecureTextField *wifiPasswordConfirmationFieldAlt; // @synthesize wifiPasswordConfirmationFieldAlt;
@property NSSecureTextField *wifiPasswordFieldAlt; // @synthesize wifiPasswordFieldAlt;
@property NSSecureTextField *airplayPasswordConfirmationField; // @synthesize airplayPasswordConfirmationField;
@property NSSecureTextField *diskPasswordConfirmationField; // @synthesize diskPasswordConfirmationField;
@property NSSecureTextField *wifiPasswordConfirmationField; // @synthesize wifiPasswordConfirmationField;
@property NSSecureTextField *devicePasswordConfirmationField; // @synthesize devicePasswordConfirmationField;
@property NSSecureTextField *airplayPasswordField; // @synthesize airplayPasswordField;
@property NSSecureTextField *diskPasswordField; // @synthesize diskPasswordField;
@property NSSecureTextField *wifiPasswordField; // @synthesize wifiPasswordField;
@property NSSecureTextField *devicePasswordField; // @synthesize devicePasswordField;
@property(retain, nonatomic) NSString *inputPrompt; // @synthesize inputPrompt;
@property(nonatomic) BOOL enableGuestNetworkSecurity; // @synthesize enableGuestNetworkSecurity;
@property(nonatomic) BOOL enableGuestNetwork; // @synthesize enableGuestNetwork;
@property(retain, nonatomic) NSString *guestNetworkName; // @synthesize guestNetworkName;
@property(retain, nonatomic) NSString *guestPasswordConfirmation; // @synthesize guestPasswordConfirmation;
@property(retain, nonatomic) NSString *guestPassword; // @synthesize guestPassword;
@property(retain, nonatomic) NSString *diskPasswordConfirmation; // @synthesize diskPasswordConfirmation;
@property(retain, nonatomic) NSString *diskPassword; // @synthesize diskPassword;
@property(retain, nonatomic) NSString *wifiPasswordConfirmation; // @synthesize wifiPasswordConfirmation;
@property(retain, nonatomic) NSString *wifiPassword; // @synthesize wifiPassword;
@property(retain, nonatomic) NSString *airplayPasswordConfirmation; // @synthesize airplayPasswordConfirmation;
@property(retain, nonatomic) NSString *airplayPassword; // @synthesize airplayPassword;
@property(retain, nonatomic) NSString *devicePasswordConfirmation; // @synthesize devicePasswordConfirmation;
@property(retain, nonatomic) NSString *devicePassword; // @synthesize devicePassword;
@property(nonatomic) BOOL showSeparateDiskPasswordCheckbox; // @synthesize showSeparateDiskPasswordCheckbox;
@property(nonatomic) BOOL useSeparateDiskPassword; // @synthesize useSeparateDiskPassword;
@property(nonatomic) BOOL useSinglePassword; // @synthesize useSinglePassword;
- (void)adjustFormatters;
- (void)setValidationOutputForVariable:(int)arg1 valid:(BOOL)arg2;
@property(readonly, nonatomic) BOOL passwordsValid;
- (BOOL)validateGuestNetworkName:(id *)arg1 error:(id *)arg2;
- (BOOL)validateGuestPasswordConfirmation:(id *)arg1 error:(id *)arg2;
- (BOOL)validateGuestPassword:(id *)arg1 error:(id *)arg2;
- (void)revalidateGuestPassword;
- (BOOL)validateDiskPasswordConfirmation:(id *)arg1 error:(id *)arg2;
- (BOOL)validateDiskPassword:(id *)arg1 error:(id *)arg2;
- (BOOL)validateDevicePasswordConfirmation:(id *)arg1 error:(id *)arg2;
- (BOOL)validateDevicePassword:(id *)arg1 error:(id *)arg2;
- (BOOL)validateWifiPasswordConfirmation:(id *)arg1 error:(id *)arg2;
- (BOOL)validateWifiPassword:(id *)arg1 error:(id *)arg2;
- (BOOL)coreValidateAirPlayPassword:(const char *)arg1;
- (BOOL)validateAirplayPasswordConfirmation:(id *)arg1 error:(id *)arg2;
- (BOOL)validateAirplayPassword:(id *)arg1 error:(id *)arg2;
- (BOOL)coreValidateWifiPassword:(const char *)arg1;
- (void)revalidateMultiPassword;
- (void)revalidateSinglePassword;
- (void)resizeToMinimumDisplaySize:(id)arg1;
- (void)toggleGuestNetwork:(id)arg1;
- (struct CGSize)viewMinimumSize;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initAirPlayPasswordView;
- (id)initGuestPasswordView;
- (id)initWithDevicePasswordOnly;
- (id)initWithMultiplePasswordsEnabled:(BOOL)arg1 showDiskPasswords:(BOOL)arg2;
- (id)init;

@end

