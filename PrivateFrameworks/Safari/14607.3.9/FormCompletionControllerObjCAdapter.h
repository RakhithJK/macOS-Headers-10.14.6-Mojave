//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/FormAutoFillCompletionControllerObjCAdapter.h>

#import <Safari/LAUIDelegate-Protocol.h>
#import <Safari/WBSOneTimeCodeMonitorObserver-Protocol.h>

@class AutoFillAuthorizationController, LAContext, NSString, WBSOneTimeCodeMonitor;

__attribute__((visibility("hidden")))
@interface FormCompletionControllerObjCAdapter : FormAutoFillCompletionControllerObjCAdapter <LAUIDelegate, WBSOneTimeCodeMonitorObserver>
{
    WBSOneTimeCodeMonitor *_cachedOneTimeCodeMonitor;
    AutoFillAuthorizationController *_autoFillAuthorizationController;
    LAContext *_currentLAContext;
    BOOL _hasUserInteractedWithTouchID;
    BOOL _isBiometricAuthenticationAvailable;
    BOOL __biometricAuthenticationStillInUse;
}

@property(nonatomic) BOOL _biometricAuthenticationStillInUse; // @synthesize _biometricAuthenticationStillInUse=__biometricAuthenticationStillInUse;
@property(nonatomic, getter=isBiometricAuthenticationAvailable, setter=setIsBiometricAuthenticationAvailable:) BOOL _isBiometricAuthenticationAvailable; // @synthesize _isBiometricAuthenticationAvailable;
- (void).cxx_destruct;
- (void)_updateTouchIDAvailabilityIfNecessary:(id)arg1;
- (void)_didToggleTouchIDToAutoFill:(id)arg1;
- (void)_updateCellAtIndex:(long long)arg1 inTableView:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_tableView;
- (void)_selectFirstCompletionItem;
- (void)setIsBiometricAuthenticationAvailable:(BOOL)arg1 performingUIUpdate:(BOOL)arg2;
- (void)_showBiometricMatchFailureFeedback;
- (BOOL)_isBiometricAuthenticationAvailableWithError:(long long)arg1;
- (BOOL)_isLockedOutDueToAuthenticationAttemptWithError:(long long)arg1;
- (void)_presentAuthenticationSheetWithCompletionListItem:(const struct CompletionListItem *)arg1;
- (id)_itemNameForAutoFillAuthorizationSheetWithItem:(const struct CompletionListItem *)arg1;
- (id)currentExternalizedContext;
- (void)_invalidateCurrentLAContext;
- (void)_cancelBiometricAuthentication;
- (void)_cancelBiometricAuthenticationIfPossible;
- (void)_requestBiometricAuthenticationIfNecessary;
- (BOOL)isAskingForBiometricAuthentication;
- (void)_updateTouchIDFeedbackWithParameters:(id)arg1;
- (void)event:(long long)arg1 params:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)completionWindowDidHide;
- (void)completionWindowDidShow;
- (BOOL)shouldShowAuthenticationSheetForCompletionListItem:(const struct CompletionListItem *)arg1;
- (BOOL)performActionForListItem:(const struct CompletionListItem *)arg1 result:(char *)arg2 shouldAbortCompletion:(char *)arg3;
- (double)widthOfCellForItem:(struct CompletionListItem *)arg1;
- (void)consumeCode:(id)arg1;
- (void)codesUpdatedForOneTimeCodeMonitor:(id)arg1;
- (id)_oneTimeCodeMonitor;
- (void)_registerTableViewCellClasses;
-     // Error parsing type: ^{FormCompletionController=^^?{atomic<unsigned int>=AI}Bq@@@@{Vector<WTF::RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >}II}@@dBBBBB{Vector<WTF::RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >}II}@QB^{SafeAutoFillConfirmationController}@@{Frame={WKRetainPtr<const void *>=^v}}@@BBB@BBB@}16@0:8, name: _formCompletionController
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)_updateBiometricPromptForTableViewIfNecessary:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
-     // Error parsing type: @24@0:8^{FormCompletionController=^^?{atomic<unsigned int>=AI}Bq@@@@{Vector<WTF::RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >}II}@@dBBBBB{Vector<WTF::RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >}II}@QB^{SafeAutoFillConfirmationController}@@{Frame={WKRetainPtr<const void *>=^v}}@@BBB@BBB@}16, name: initWithFormCompletionController:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
