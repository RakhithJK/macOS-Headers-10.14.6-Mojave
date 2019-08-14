//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RetrievingDialogDelegate-Protocol.h"

@class CKContainer, CKShareMetadata, CKShareParticipant, NSArray, NSDictionary, NSError, NSPersonNameComponents, NSString, NSURL, NSXPCConnection, RetrievingDialog;

@interface ShareAcceptor : NSObject <RetrievingDialogDelegate>
{
    BOOL _hasValidConnection;
    BOOL _accepting;
    BOOL _cancelled;
    NSURL *_url;
    RetrievingDialog *_retrievingDialog;
    CKShareMetadata *_shareMetadata;
    NSString *_shareName;
    NSArray *_whitelistedAppBundleIDs;
    NSArray *_whitelistedDaemonBundleIDs;
    NSDictionary *_localBundleIDsToDisplayNames;
    NSString *_chosenAppBundleID;
    CKShareParticipant *_singleOONMatch;
    NSPersonNameComponents *_currentUserNameComponents;
    NSString *_currentUserFormattedUsername;
    CKContainer *_clouddContainer;
    CKContainer *_metadataIndicatedContainer;
    NSXPCConnection *_xpcConnection;
    long long _state;
    NSError *_fallbackFlowCause;
    NSString *_webFlowReason;
}

@property(retain, nonatomic) NSString *webFlowReason; // @synthesize webFlowReason=_webFlowReason;
@property(retain, nonatomic) NSError *fallbackFlowCause; // @synthesize fallbackFlowCause=_fallbackFlowCause;
@property(nonatomic, setter=setState:) long long state; // @synthesize state=_state;
@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) BOOL accepting; // @synthesize accepting=_accepting;
@property(nonatomic) BOOL hasValidConnection; // @synthesize hasValidConnection=_hasValidConnection;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) CKContainer *metadataIndicatedContainer; // @synthesize metadataIndicatedContainer=_metadataIndicatedContainer;
@property(retain, nonatomic) CKContainer *clouddContainer; // @synthesize clouddContainer=_clouddContainer;
@property(copy, nonatomic) NSString *currentUserFormattedUsername; // @synthesize currentUserFormattedUsername=_currentUserFormattedUsername;
@property(copy, nonatomic) NSPersonNameComponents *currentUserNameComponents; // @synthesize currentUserNameComponents=_currentUserNameComponents;
@property(copy, nonatomic) CKShareParticipant *singleOONMatch; // @synthesize singleOONMatch=_singleOONMatch;
@property(copy, nonatomic) NSString *chosenAppBundleID; // @synthesize chosenAppBundleID=_chosenAppBundleID;
@property(copy, nonatomic) NSDictionary *localBundleIDsToDisplayNames; // @synthesize localBundleIDsToDisplayNames=_localBundleIDsToDisplayNames;
@property(copy, nonatomic) NSArray *whitelistedDaemonBundleIDs; // @synthesize whitelistedDaemonBundleIDs=_whitelistedDaemonBundleIDs;
@property(copy, nonatomic) NSArray *whitelistedAppBundleIDs; // @synthesize whitelistedAppBundleIDs=_whitelistedAppBundleIDs;
@property(copy, nonatomic) NSString *shareName; // @synthesize shareName=_shareName;
@property(copy, nonatomic) CKShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
@property(readonly, retain, nonatomic) RetrievingDialog *retrievingDialog; // @synthesize retrievingDialog=_retrievingDialog;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)acceptShareWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)makeStateTransition:(id *)arg1;
- (BOOL)_launchApp:(id *)arg1;
- (long long)_handlePotentialOONMatches;
- (BOOL)_isDataclassEnabled:(id)arg1 forContainerIdentifierWithPrefix:(id)arg2 error:(id *)arg3;
- (BOOL)_checkDataclass:(id)arg1 withContainer:(id)arg2 error:(id *)arg3;
- (BOOL)_verifySelectedApp:(id *)arg1;
- (BOOL)_promptAppSelection:(id *)arg1;
- (long long)_lookUpLocalBundleIDs:(id *)arg1 success:(char *)arg2;
- (BOOL)_handlePotentialAppleInternalDaemon:(id *)arg1;
- (BOOL)_handleAppleInternalDaemon:(id)arg1 response:(id)arg2 error:(id *)arg3;
- (BOOL)_lookUpWhitelistedBundleIDs:(id *)arg1;
- (BOOL)_urlHasALongToken:(id)arg1;
- (BOOL)_urlIsALegacyiWorkShareURL:(id)arg1;
- (BOOL)_fetchMetadata:(id *)arg1;
- (BOOL)_notifyBladeRunner:(id *)arg1;
- (BOOL)_validateShareURL:(id *)arg1;
- (id)_osxShowAppSelectionDialogWithTitlesDictionary:(id)arg1;
- (id)chooseFromMultipleBundleIDs;
- (id)_deduplicateBundleToNamesMapping:(id)arg1;
- (void)_initiateVettingForParticipantID:(id)arg1 address:(id)arg2 andThen:(CDUnknownBlockType)arg3;
- (id)_osxLaunchSettingsWithURL:(id)arg1 participantsInfo:(id)arg2;
- (id)_osxPrepareParticipantsInfoForSettings:(id *)arg1;
- (id)_osxShowVettingAlert;
- (BOOL)_requestSelectionFromMultipleOONMatches:(id *)arg1;
- (BOOL)_initiateVettingOfSingleOONMatch:(id *)arg1;
- (long long)initiateVetting;
- (id)_showVettingAlert;
- (id)_trySelectingOONParticipant;
- (void)_extractEmailAddressesFromProperties:(id)arg1 into:(id)arg2;
- (BOOL)_getShareName;
- (id)promptForSingleBundleID;
- (id)_fetchCurrentUserNameComponents;
- (BOOL)shareNeedsAcceptance;
- (id)fetchMetadata;
- (long long)_checkICloudDriveEnabled:(id *)arg1 appCandidatesPresent:(BOOL)arg2;
- (BOOL)_promptToOpenAppStoreLink:(id *)arg1 alertOptions:(id)arg2 appURL:(id)arg3;
- (id)_findStoreDataForBundleIDs:(id)arg1 error:(id *)arg2;
- (BOOL)_fallbackFlowDownloadAppUpdate:(id *)arg1;
- (BOOL)_fallbackFlowDownloadApp:(id *)arg1;
- (id)_osxHandleMultipleAppStoreCandidates:(id)arg1;
- (BOOL)_fallbackFlowWebRedirect:(id *)arg1;
- (BOOL)_fallbackFlowWarnShareUnavailable:(id *)arg1;
- (BOOL)_fallbackFlowWarnServiceUnavailable:(id *)arg1;
- (BOOL)_fallbackFlowWarnNetworkUnavailable:(id *)arg1;
- (long long)_fallbackFlowICloudAccountSettings:(id *)arg1 success:(char *)arg2;
- (BOOL)_shouldSendURLToPhotos:(id)arg1;
- (BOOL)_shouldSendURLToBladeRunner:(id)arg1;
- (BOOL)_urlIsAniWorkShareURL:(id)arg1;
- (void)retrievingDialogCancelled;
- (BOOL)retrievingDialogShouldDisplay;
- (BOOL)shouldShowRetrievingDialogForState:(long long)arg1;
- (BOOL)_shouldShowICloudLoginPrompt:(id)arg1;
- (void)_cancel;
- (id)initWithShareMetadata:(id)arg1 shareURL:(id)arg2;
- (id)initWithCloudKitURL:(id)arg1;

@end

