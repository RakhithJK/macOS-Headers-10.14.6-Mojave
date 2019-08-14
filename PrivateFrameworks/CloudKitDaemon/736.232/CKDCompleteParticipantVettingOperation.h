//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class CKShareMetadata, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDCompleteParticipantVettingOperation : CKDOperation
{
    CDUnknownBlockType _verifyProgressURLReconstructedBlock;
    CDUnknownBlockType _verifyProgressShareMetadataFetchedBlock;
    CDUnknownBlockType _verifyCompletionBlock;
    NSString *_vettingToken;
    NSString *_vettingEmail;
    NSString *_vettingPhone;
    NSString *_routingKey;
    NSData *_encryptedKey;
    NSString *_baseToken;
    NSString *_displayedHostname;
    struct _OpaquePCSShareProtection *_protectionInfo;
    NSString *_shortToken;
    CKShareMetadata *_shareMetadata;
}

@property(retain, nonatomic) CKShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
@property(retain, nonatomic) NSString *shortToken; // @synthesize shortToken=_shortToken;
@property(nonatomic) struct _OpaquePCSShareProtection *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(readonly, nonatomic) NSString *displayedHostname; // @synthesize displayedHostname=_displayedHostname;
@property(readonly, nonatomic) NSString *baseToken; // @synthesize baseToken=_baseToken;
@property(readonly, nonatomic) NSData *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property(readonly, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
@property(readonly, nonatomic) NSString *vettingPhone; // @synthesize vettingPhone=_vettingPhone;
@property(readonly, nonatomic) NSString *vettingEmail; // @synthesize vettingEmail=_vettingEmail;
@property(readonly, nonatomic) NSString *vettingToken; // @synthesize vettingToken=_vettingToken;
@property(copy, nonatomic) CDUnknownBlockType verifyCompletionBlock; // @synthesize verifyCompletionBlock=_verifyCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType verifyProgressShareMetadataFetchedBlock; // @synthesize verifyProgressShareMetadataFetchedBlock=_verifyProgressShareMetadataFetchedBlock;
@property(copy, nonatomic) CDUnknownBlockType verifyProgressURLReconstructedBlock; // @synthesize verifyProgressURLReconstructedBlock=_verifyProgressURLReconstructedBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_verifyOONParticipant;
- (void)_reconstructShareURL;
- (void)_forceFetchShareMetadata;
- (void)_performAuthKitVerification;
- (void)_reconstructShortToken;
- (id)shortSharingTokenFromData:(id)arg1;
- (id)shortSharingTokenFromFullToken:(id)arg1;
- (id)nameForState:(unsigned long long)arg1;
- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

