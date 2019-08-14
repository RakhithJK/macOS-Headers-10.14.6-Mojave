//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <SiriUI/AFConversationDelegate-Protocol.h>
#import <SiriUI/SVSAceCommandRecordsDelegate-Protocol.h>
#import <SiriUI/SVSSiriViewControllerServing-Protocol.h>
#import <SiriUI/SiriUIDomainObjectStore-Protocol.h>
#import <SiriUI/SiriUIPresentationDataSource-Protocol.h>
#import <SiriUI/SiriUIPresentationDelegate-Protocol.h>
#import <SiriUI/SiriUISiriLanguageDelegate-Protocol.h>

@class AFConversationStore, AFManagedStorageConnection, AFUISiriViewController, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSTimer, SVSAceCommandRecords, SiriUIRequestOptions, SiriUISiriLanguage;
@protocol AFUISiriSession, AFUISpeechSynthesis, OS_dispatch_source, SiriUIPresentation;

__attribute__((visibility("hidden")))
@interface SVSSiriViewController : NSViewController <SiriUIDomainObjectStore, SVSAceCommandRecordsDelegate, SiriUISiriLanguageDelegate, AFConversationDelegate, SiriUIPresentationDataSource, SiriUIPresentationDelegate, SVSSiriViewControllerServing>
{
    BOOL _synthesisIsSpeaking;
    unsigned long long _lockState;
    NSMutableSet *_presentedConversationItemRevisionIdentifiers;
    NSMutableDictionary *_synthesisPreparationDictionary;
    NSMutableDictionary *_synthesisAnimationDictionary;
    NSObject<OS_dispatch_source> *_connectionErrorDismissalTimer;
    BOOL _supportsSpeechSynthesis;
    BOOL __speechIdleTimerEnabled;
    BOOL __idleTimerEnabled;
    BOOL _acousticIdAllowed;
    BOOL _waitingForStartRequest;
    BOOL _requestActive;
    id <AFUISiriSession> _session;
    AFUISiriViewController *_host;
    AFConversationStore *_conversationStore;
    NSMutableArray *_conversations;
    id <SiriUIPresentation> _presentation;
    SiriUISiriLanguage *_language;
    id <AFUISpeechSynthesis> _speechSynthesis;
    SVSAceCommandRecords *_aceCommandRecords;
    NSMutableSet *_completedCommandAppPunchOutIds;
    SiriUIRequestOptions *_requestOptions;
    NSString *_currentAVRecordRoute;
    unsigned long long _requestStartedCount;
    long long _siriState;
    NSTimer *__speechIdleTimer;
    NSTimer *__idleTimer;
    unsigned long long _wasSiriIdleAndQuiet;
    AFManagedStorageConnection *_domainObjectStorageConnection;
    NSMutableArray *_repeatablePhrases;
    NSString *_utteranceToSpeakAfterClearScreenCommand;
}

@property(retain, getter=_utteranceToSpeakAfterClearScreenCommand, setter=_setUtteranceToSpeakAfterClearScreenCommand:) NSString *utteranceToSpeakAfterClearScreenCommand; // @synthesize utteranceToSpeakAfterClearScreenCommand=_utteranceToSpeakAfterClearScreenCommand;
@property(retain, getter=_repeatablePhrases, setter=_setRepeatablePhrases:) NSMutableArray *repeatablePhrases; // @synthesize repeatablePhrases=_repeatablePhrases;
@property(getter=_isRequestActive, setter=_setRequestActive:) BOOL requestActive; // @synthesize requestActive=_requestActive;
@property(getter=_isWaitingForStartRequest, setter=_setWaitingForStartRequest:) BOOL waitingForStartRequest; // @synthesize waitingForStartRequest=_waitingForStartRequest;
@property(readonly, getter=_domainObjectStorageConnection) AFManagedStorageConnection *domainObjectStorageConnection; // @synthesize domainObjectStorageConnection=_domainObjectStorageConnection;
@property(getter=_wasSiriIdleAndQuiet, setter=_setWasSiriIdleAndQuiet:) unsigned long long wasSiriIdleAndQuiet; // @synthesize wasSiriIdleAndQuiet=_wasSiriIdleAndQuiet;
@property(getter=_isAcousticIdAllowed, setter=_setAcousticIdAllowed:) BOOL acousticIdAllowed; // @synthesize acousticIdAllowed=_acousticIdAllowed;
@property(getter=_isIdleTimerEnabled, setter=_setIdleTimerEnabled:) BOOL _idleTimerEnabled; // @synthesize _idleTimerEnabled=__idleTimerEnabled;
@property(retain, setter=_setIdleTimer:) NSTimer *_idleTimer; // @synthesize _idleTimer=__idleTimer;
@property(getter=_isSpeechIdleTimerEnabled, setter=_setSpeechIdleTimerEnabled:) BOOL _speechIdleTimerEnabled; // @synthesize _speechIdleTimerEnabled=__speechIdleTimerEnabled;
@property(retain, setter=_setSpeechIdleTimer:) NSTimer *_speechIdleTimer; // @synthesize _speechIdleTimer=__speechIdleTimer;
@property(getter=_siriState, setter=_setSiriState:) long long siriState; // @synthesize siriState=_siriState;
@property(nonatomic, getter=_supportsSpeechSynthesis) BOOL supportsSpeechSynthesis; // @synthesize supportsSpeechSynthesis=_supportsSpeechSynthesis;
@property(getter=_requestStartedCount, setter=_setRequestStartedCount:) unsigned long long requestStartedCount; // @synthesize requestStartedCount=_requestStartedCount;
@property(retain, getter=_currentAVRecordRoute, setter=_setCurrentAVRecordRoute:) NSString *currentAVRecordRoute; // @synthesize currentAVRecordRoute=_currentAVRecordRoute;
@property(retain, getter=_requestOptions, setter=_setRequestOptions:) SiriUIRequestOptions *requestOptions; // @synthesize requestOptions=_requestOptions;
@property(retain, nonatomic, getter=_completedCommandAppPunchOutIds) NSMutableSet *completedCommandAppPunchOutIds; // @synthesize completedCommandAppPunchOutIds=_completedCommandAppPunchOutIds;
@property(readonly, getter=_aceCommandRecords) SVSAceCommandRecords *aceCommandRecords; // @synthesize aceCommandRecords=_aceCommandRecords;
@property(readonly, getter=_speechSynthesis) id <AFUISpeechSynthesis> speechSynthesis; // @synthesize speechSynthesis=_speechSynthesis;
@property(readonly, nonatomic, getter=_language) SiriUISiriLanguage *language; // @synthesize language=_language;
@property(readonly, getter=_presentation) id <SiriUIPresentation> presentation; // @synthesize presentation=_presentation;
@property(readonly, getter=_conversations) NSMutableArray *conversations; // @synthesize conversations=_conversations;
@property(readonly, nonatomic, getter=_conversationStore) AFConversationStore *conversationStore; // @synthesize conversationStore=_conversationStore;
@property __weak AFUISiriViewController *host; // @synthesize host=_host;
@property(readonly, nonatomic, getter=_session) id <AFUISiriSession> session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)_punchoutMetricsAceCommandIdForItemWithIdentifier:(id)arg1;
- (void)_listenAfterSpeakingWithResult:(long long)arg1 recordedRequestCount:(unsigned long long)arg2;
- (void)_audioSessionRouteDidChange:(id)arg1;
- (void)_addErrorUtterance:(id)arg1;
- (void)_displayNotReadyError;
- (void)_clearConnectionErrorDismissalTimer;
- (void)_handleRequestError:(id)arg1;
- (BOOL)_isSiriIdleAndQuiet;
- (void)_idleTimerFired:(id)arg1;
- (void)_rescheduleIdleTimerIfNeeded;
- (void)_scheduleIdleTimer;
- (void)_clearIdleTimer;
- (void)_speechIdleTimerFired:(id)arg1;
- (void)_scheduleSpeechIdleTimer;
- (void)_clearSpeechIdleTimer;
- (void)_performAppPunchOutCommand:(id)arg1 conversationItemIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performAppPunchOutCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cancelCurrentTTS:(id)arg1;
- (void)_performGenericAceCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_dialogPhaseForItemAtIndexPath:(id)arg1;
- (void)_updateLanguageCode;
- (id)_presentationViewController;
- (void)_setPresentation:(id)arg1;
- (id)view;
- (void)loadView;
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2;
- (long long)_presentationOptions;
- (void)siriSessionDidFinishAcousticIDRequestWithSuccess:(BOOL)arg1;
- (void)siriSessionWillStartAcousticIDRequest;
- (void)_startRequestWithOptions:(id)arg1;
- (void)setRequestOptions:(id)arg1;
- (void)siriSessionDidFailToStartStarkNotificationRequestWithOptions:(id)arg1;
- (void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1;
- (void)siriPresentationClearContext:(id)arg1;
- (void)siriPresentation:(id)arg1 didChangePeekMode:(unsigned long long)arg2;
- (void)siriPresentation:(id)arg1 stashSnippetControllerCard:(id)arg2;
- (void)siriPresentation:(id)arg1 didShowSnippetWithIdentifier:(id)arg2 metricsContext:(id)arg3 forInterval:(double)arg4;
- (void)siriPresentation:(id)arg1 didScrollForInterval:(double)arg2;
- (void)siriPresentation:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;
- (void)siriPresentationRemoveAcousticIDSpinner:(id)arg1;
- (void)siriPresentation:(id)arg1 acousticIDRequestDidFinishWithSuccess:(BOOL)arg2;
- (void)siriPresentationWillStartAcousticIDRequest:(id)arg1;
- (void)siriPresentationPresentAcousticIDSpinner:(id)arg1;
- (void)getScreenshotImageForSiriPresentation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)siriPresentation:(id)arg1 showBugTemplateWithInformation:(id)arg2;
- (void)siriPresentation:(id)arg1 setBugReportingAvailable:(BOOL)arg2;
- (void)siriPresentationContentHeightDidChange:(id)arg1;
- (void)siriPresentationPulseHelpButton:(id)arg1;
- (void)siriPresentation:(id)arg1 setHelpButtonEmphasized:(BOOL)arg2;
- (void)siriPresentation:(id)arg1 willDismissViewController:(id)arg2;
- (void)siriPresentation:(id)arg1 willPresentViewController:(id)arg2;
- (void)siriPresentation:(id)arg1 setStatusViewDisabled:(BOOL)arg2;
- (void)siriPresentation:(id)arg1 setStatusViewHidden:(BOOL)arg2;
- (void)notifyOnNextUserInteractionForSiriPresentation:(id)arg1;
- (void)disableIdleTimerForSiriPresentation:(id)arg1;
- (void)enableIdleTimerForSiriPresentation:(id)arg1;
- (void)siriPresentation:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4;
- (void)siriPresentationDidPunchout;
- (void)siriPresentation:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)effectiveCoreLocationBundleForSiriPresentation:(id)arg1;
- (void)siriPresentation:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)siriPresentation:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4;
- (void)siriPresentation:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forConversationItemWithIdentifier:(id)arg4 userSelectionResults:(id)arg5;
- (long long)siriPresentation:(id)arg1 presentationStateForItemAtIndexPath:(id)arg2;
- (void)siriPresentation:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)siriPresentation:(id)arg1 synthesizeSpeechWithText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopSpeakingForSiriPresentation:(id)arg1;
- (BOOL)siriIsSpeakingForSiriPresentation:(id)arg1;
- (void)siriPresentation:(id)arg1 didPresentItemsAtIndexPaths:(id)arg2;
- (void)siriPresentation:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;
- (void)siriPresentation:(id)arg1 didPrepareAnimationLinkedConversationItem:(id)arg2 animationBlock:(CDUnknownBlockType)arg3;
- (void)siriPresentationDidPresentUserInterface:(id)arg1;
- (void)_siriPresentation:(id)arg1 speakTextForConversationItemIdentifier:(id)arg2 animationBlock:(CDUnknownBlockType)arg3;
- (void)endSiriSessionForSiriPresentation:(id)arg1 delayForTTS:(BOOL)arg2;
- (void)endSiriSessionForSiriPresentation:(id)arg1;
- (void)forceAudioSessionInactiveForSiriPresentation:(id)arg1;
- (void)cancelRequestForSiriPresentation:(id)arg1;
- (void)stopRecordingSpeechForSiriPresentation:(id)arg1;
- (void)siriPresentation:(id)arg1 startRequestWithOptions:(id)arg2;
- (double)windowWidthForForSiriPresentation:(id)arg1;
- (double)contentWidthForForSiriPresentation:(id)arg1;
- (BOOL)siriPresentation:(id)arg1 itemAtIndexPathIsVirgin:(id)arg2;
- (void)siriPresentation:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3;
- (id)siriPresentation:(id)arg1 domainObjectForIdentifier:(id)arg2;
- (id)domainObjectStoreForSiriPresentation:(id)arg1;
- (void)siriPresentation:(id)arg1 addSelectionResponse:(id)arg2;
- (void)siriPresentation:(id)arg1 removeItemsAtIndexPaths:(id)arg2;
- (void)siriPresentation:(id)arg1 insertAceViews:(id)arg2 withDialogPhase:(id)arg3 asItemsAtIndexPaths:(id)arg4;
- (id)siriPresentation:(id)arg1 dialogPhaseForItemAtIndexPath:(id)arg2;
- (id)siriPresentation:(id)arg1 aceCommandIdentifierForItemAtIndexPath:(id)arg2;
- (id)siriPresentation:(id)arg1 aceObjectForItemAtIndexPath:(id)arg2;
- (long long)siriPresentation:(id)arg1 numberOfChildrenForItemAtIndexPath:(id)arg2;
- (long long)siriPresentation:(id)arg1 typeOfItemAtIndexPath:(id)arg2;
- (id)_activeConversationItemAtIndexPath:(id)arg1;
- (id)siriPresentation:(id)arg1 indexPathForItemWithIdentifier:(id)arg2;
- (id)siriPresentation:(id)arg1 identifierOfItemAtIndexPath:(id)arg2;
- (id)startNewConversationForSiriPresentation:(id)arg1;
- (void)siriPresentation:(id)arg1 activateConversationWithIdentifier:(id)arg2;
- (void)siriPresentation:(id)arg1 deleteConversationWithIdentifier:(id)arg2;
- (id)siriPresentation:(id)arg1 conversationWithIdentifier:(id)arg2;
- (id)conversationIdentifiersForSiriPresentation:(id)arg1;
- (long long)siriStateForSiriPresentation:(id)arg1;
- (void)conversation:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;
- (void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)siriSessionDidDetectSpeechStartpoint;
- (void)siriSessionDidDetectMusic;
- (BOOL)siriSessionShouldRequestUpdateForViewWithIdentifier:(id)arg1;
- (void)siriSessionSpeechRecordingDidFailWithError:(id)arg1;
- (void)siriSessionSpeechRecordingDidCancel;
- (void)siriSessionSpeechRecordingDidEnd;
- (void)siriSessionSpeechRecordingDidChangeAVRecordRoute:(id)arg1;
- (void)siriSessionDidReceiveGuideUpdateCommand:(id)arg1;
- (void)siriSessionDidReceiveHideSiriOverlayCommand:(id)arg1;
- (void)siriSessionDidReceiveListenForPronunciationCommand:(id)arg1;
- (void)siriSessionDidReceiveCloseAssistantCommand:(id)arg1;
- (void)siriSessionDidReceiveAppPunchOutCommand:(id)arg1;
- (void)siriSessionDidReceiveUpdateViewsCommand:(id)arg1;
- (void)siriSessionDidReceiveShowHelpCommand:(id)arg1;
- (void)siriSessionDidReceiveRepeatItCommand:(id)arg1;
- (void)siriSessionDidReceiveSayItCommand:(id)arg1;
- (void)siriSessionDidReceiveSmsPlayAudioCommand:(id)arg1;
- (id)_configuredSpeakableUtteranceParserForCommand:(id)arg1 context:(id)arg2 speakableText:(id)arg3 listenAfterSpeaking:(BOOL)arg4 subCompletion:(CDUnknownBlockType)arg5 speakPreparation:(CDUnknownBlockType *)arg6 speakCompletion:(CDUnknownBlockType *)arg7;
- (void)siriSessionDidReceivePlayVoicemailCommand:(id)arg1;
- (void)siriSessionDidReceiveClearScreenCommand:(id)arg1;
- (void)siriSessionDidReceiveAddViewsCommand:(id)arg1;
- (id)removeAlternativeFeatureViews:(id)arg1;
- (void)siriSessionDidReceiveSpeechPartialResultCommand:(id)arg1;
- (void)siriSessionDidReceiveSpeechRecognizedCommand:(id)arg1;
- (void)siriSessionRequestsDismissal;
- (void)siriSessionOpenApplicationWithBundleID:(id)arg1 URL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)siriSessionOpenURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)siriSessionSupportsSpeechSynthesis:(BOOL)arg1;
- (void)siriSessionDidReceiveOpenLinkCommand:(id)arg1;
- (void)siriSessionDidChangeLockState:(unsigned long long)arg1;
- (void)siriSessionDidChangeNetworkAvailability;
- (void)siriSessionGetRequestContextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)siriSessionDidTransitionFromState:(long long)arg1 toState:(long long)arg2 event:(long long)arg3;
- (int)_mapState:(long long)arg1;
- (void)siriSessionDidFinishRequestWithError:(id)arg1;
- (void)siriSessionAudioRecordingDidChangePowerLevel:(float)arg1;
- (void)siriSessionWillCancelRequest;
- (void)siriSessionWillStartRequest;
- (void)siriSessionWillStartRequestWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)siriSessionResultForAceCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)aceCommandRecords:(id)arg1 didChangeResultForCommand:(id)arg2;
- (void)setDomainObject:(id)arg1 forIdentifier:(id)arg2;
- (id)domainObjectForIdentifier:(id)arg1;
- (void)speechSynthesisDidStopSpeakingQueueIsEmpty:(BOOL)arg1;
- (void)speechSynthesisDidStartSpeaking;
- (void)speechSynthesisExecuteAnimationForIdentifier:(id)arg1;
- (void)speechSynthesisGetPreparedTextForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSpeechSynthesis:(id)arg1;
- (BOOL)_isSpeechSynthesisSpeaking;
- (void)_cancelSpeechSynthesis;
- (void)_synthesizeText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_synthesizeProvisionalText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_synthesizePhoneticText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_synthesizeSpeechWithText:(id)arg1 isPhonetic:(BOOL)arg2 provisionally:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_didCompleteActionForAceCommand:(id)arg1;
- (void)_speakText:(id)arg1 provisionally:(BOOL)arg2 eligibleAfterDuration:(double)arg3 speakableUtteranceParser:(id)arg4 preparation:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6 animationBlock:(CDUnknownBlockType)arg7;
- (id)_aceCommandWithIdentifier:(id)arg1;
- (void)_didStartActionForItemAtIndexPath:(id)arg1 inConversation:(id)arg2;
- (void)_didStartActionForAceCommand:(id)arg1;
- (void)_didReceiveAceCommand:(id)arg1;
- (void)_openURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(BOOL)arg3;
- (void)_openSensitiveURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 conversationItemIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_openSensitiveURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_requestDismissalFromHost:(BOOL)arg1;
- (void)didReceiveDismissalAction:(BOOL)arg1 delayForTTS:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didChangeWindowHeight:(BOOL)arg1;
- (double)contentHeight;
- (void)didPresentCreateBugTemplateWithConfirm:(BOOL)arg1 values:(id)arg2;
- (void)didReceiveShortTapAction;
- (void)didReceiveReportBugAction;
- (void)didReceiveHelpAction;
- (void)setSession:(id)arg1;
- (void)_requestPresentationDismissal:(BOOL)arg1;
- (void)userInteractionDidOccur;
- (void)siriWillShowPasscodeUnlock;
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(BOOL)arg1;
- (void)siriDidDeactivate;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriWillActivateFromSource:(long long)arg1;
- (id)_presentedConversationItemRevisionIdentifiers;
- (BOOL)_languageMatchesConversation:(id)arg1;
- (id)_previousConversation;
- (id)_startNewConversation;
- (void)_deletePreviousConversation;
- (void)_deleteConversationWithIdentifier:(id)arg1;
- (void)_saveConversation;
- (void)_removePreviousConversationFromStore;
- (void)_activateConversation:(id)arg1;
- (void)_resetContext;
- (id)_conversationWithIdentifier:(id)arg1;
- (id)_activeConversation;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)_cancelLastRootProvisionalSnippetFromLastRequestInConversation:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

