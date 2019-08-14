//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AFAssistantPane.h"

@class CAExpirationDateFormatter, CALearnMoreSheetWindowController, CASerialNumberFormatter, MyCAAddNSTextField, NSArray, NSButton, NSImageView, NSObjectController, NSTextField;

@interface CAAdditionalCertInfoPane : AFAssistantPane
{
    NSObjectController *_panelObjectController;
    NSTextField *_caCurrDate;
    NSTextField *_caExpDate;
    NSButton *_caWebSiteLocationPopup;
    NSButton *_caCreateCAWebSiteCheckBox;
    NSImageView *_caInvalidDataIconForValidityPeriod;
    NSImageView *_caInvalidDataIconForSerialNumber;
    NSButton *_caSignInvitesCheckBox;
    NSButton *_caSignInvitesWithDotMacIdentityCheckbox;
    NSTextField *_uiPathToAlternateWebLocation;
    NSArray *_caSigningIdentities;
    CASerialNumberFormatter *_serialNumFormatter;
    CAExpirationDateFormatter *_expirationDateFormatter;
    BOOL _dotMacEnabled;
    long long _rememberCellSelected;
    MyCAAddNSTextField *_serialNumTextField;
    MyCAAddNSTextField *_caValidityPeriodTextField;
    CALearnMoreSheetWindowController *_learnMoreWindowController;
}

- (void)_specifyAdditionalWebSiteLocationMenuItemSelected:(id)arg1;
- (void)_openSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_askSheetDidDismiss:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_learnMoreClicked:(id)arg1;
- (void)_signCAInvitationCheckBoxClicked:(id)arg1;
- (void)_createCAWebSiteCheckBoxClicked:(id)arg1;
- (id)nextPane;
- (void)chooseIdentitySheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_rememberSelectedTextField:(long long)arg1;
- (BOOL)shouldExitPane:(unsigned int)arg1;
- (void)didEnterPane:(unsigned int)arg1;
- (BOOL)_validate:(id *)arg1;
- (void)_redrawValidityPeriodInformation:(BOOL)arg1;
- (BOOL)_isExpirationPeriodValid;
- (id)formatDate:(id)arg1;
- (void)_doSheet:(id)arg1;
- (void)_errorSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_doContinueSheet;
- (void)_continueSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (id)_nextPane;
- (void)willEnterPane:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end

