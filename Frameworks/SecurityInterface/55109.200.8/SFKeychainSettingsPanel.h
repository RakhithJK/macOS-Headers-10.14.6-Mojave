//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@interface SFKeychainSettingsPanel : NSPanel
{
    id _reserved_SFKeychainSettingsPanel;
}

+ (id)dotMacPrefPanePath;
+ (id)sharedKeychainSettingsPanel;
- (void)beginSheetForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4 settings:(struct SecKeychainSettings *)arg5 keychain:(struct OpaqueSecKeychainRef *)arg6;
- (long long)runModalForSettings:(struct SecKeychainSettings *)arg1 keychain:(struct OpaqueSecKeychainRef *)arg2;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;
- (void)_setRunAsSheet:(BOOL)arg1;
- (void)_setParentWindowForSheet:(id)arg1;
- (void)_setKeychainRef:(struct OpaqueSecKeychainRef *)arg1;
- (void)_setKeychainName:(id)arg1;
- (void)set_progressCtrl:(id)arg1;
- (void)set_syncDotMacCtrl:(id)arg1;
- (void)set_dotMacButton:(id)arg1;
- (void)set_panel:(id)arg1;
- (void)set_saveButton:(id)arg1;
- (void)set_cancelButton:(id)arg1;
- (void)set_lockOnSleepCtrl:(id)arg1;
- (void)set_autoLockCtrl:(id)arg1;
- (void)set_autoLockStepper:(id)arg1;
- (void)set_autoLockValue:(id)arg1;
- (void)set_syncStateMessage:(id)arg1;
- (void)set_panelMessage:(id)arg1;
- (void)setRef:(id *)arg1 toObj:(id)arg2;
- (BOOL)_runAsSheet;
- (id)_parentWindowForSheet;
- (id)_progressCtrl;
- (id)_syncDotMacCtrl;
- (id)_dotMacButton;
- (id)_panel;
- (id)_saveButton;
- (id)_cancelButton;
- (id)_lockOnSleepCtrl;
- (id)_autoLockCtrl;
- (id)_autoLockStepper;
- (id)_autoLockValue;
- (id)_syncStateMessage;
- (id)_panelMessage;
- (void)dotMacClicked:(id)arg1;
- (void)syncClicked:(id)arg1;
- (void)lockAfterClicked:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)okClicked:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_setDidEndSelector:(SEL)arg1;
- (void)_setSavedDelegate:(id)arg1;
- (void)_setContextInfo:(void *)arg1;
- (long long)runModalForSettingsDictionary:(id)arg1 keychain:(struct OpaqueSecKeychainRef *)arg2;
- (void)_chSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void *)_getClientContext;
- (SEL)_getDidEndSelector;
- (id)_getClientDelegate;
- (long long)_runFullDialog;
- (void)_runFullDialogSheet;
- (int)_updateSyncState;
- (void)_syncSheetDidDismiss:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (BOOL)_updateSettings;
- (unsigned int)_lockInterval;
- (void)_prepPanel:(struct SecKeychainSettings *)arg1 keychain:(struct OpaqueSecKeychainRef *)arg2;
- (id)_initWithNib:(id)arg1;
- (id)_ivars;

@end

