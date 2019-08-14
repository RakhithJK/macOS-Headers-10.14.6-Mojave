//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBox, NSButton, NSComboBox, NSMatrix, NSPopUpButton, NSProgressIndicator, NSSlider, NSTableView, NSTextField, NSView, SFEntropyBarView, SFPasswordAsstModel, SFPasswordErrorSource;

@interface SFPasswordAsstController : NSObject
{
    NSMatrix *_errorTable;
    SFPasswordAsstModel *_model;
    SFEntropyBarView *_entropyBar;
    NSTextField *_newPassword;
    NSTextField *_verifyPassword;
    NSTextField *_originalPassword;
    NSTextField *_hint;
    SFPasswordErrorSource *_errorSource;
    NSView *_view;
    NSButton *suggestButton;
    NSProgressIndicator *progressIndicator;
    NSSlider *lengthSlider;
    NSPopUpButton *algorithmPopup;
    NSTextField *lengthDisplayField;
    NSComboBox *choicesCombo;
    NSButton *suggestDiscloseButton;
    NSTableView *_tableView;
    int desiredLength;
    int previousDesiredLength;
    int desiredAlgorithm;
    int previousAlgorithmIndex;
    struct CGRect originalWindowFrame;
    BOOL _closingAssistant;
    NSBox *_box;
}

- (void)choicesComboChanged:(id)arg1;
- (void)algorithmPopupChanged:(id)arg1;
- (void)sliderChanged:(id)arg1;
- (void)suggestDiscloseTextClicked:(id)arg1;
- (void)suggestClicked:(id)arg1;
- (void)updateProgressBar:(double)arg1;
- (void)clearProgressBarToolTip;
- (void)setPassphraseInfoStrings:(int)arg1:(int)arg2:(double)arg3;
- (void)ourViewWasDisclosed:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)clearVerifyField;
- (void)updatePasswordField:(id)arg1;
- (void)refreshSuggestions;
- (double)refresh:(id)arg1;
- (void)clear;
- (double)entropy;
- (void)setOriginalPasswordField:(id)arg1;
- (void)setVerifyPasswordField:(id)arg1;
- (id)entryBar;
- (id)newPasswordField;
- (void)setNewPasswordField:(id)arg1;
- (void)setPasswordFields:(id)arg1 verify:(id)arg2 original:(id)arg3;
- (id)model;
- (id)passphrase;
- (void)controlTextDidChange:(id)arg1;
- (void)removeObserverTextField:(id)arg1;
- (void)addObserverTextField:(id)arg1;
- (void)closing;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithNib:(id)arg1;
- (id)init;
- (id)view;

@end

