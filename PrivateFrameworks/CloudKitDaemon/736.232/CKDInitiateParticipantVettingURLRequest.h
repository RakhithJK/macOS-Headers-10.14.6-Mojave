//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordID, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDInitiateParticipantVettingURLRequest : CKDURLRequest
{
    CDUnknownBlockType _vettingInitiationRequestCompletionBlock;
    CKRecordID *_shareRecordID;
    NSData *_encryptedKey;
    NSString *_participantID;
    NSString *_baseToken;
}

@property(copy, nonatomic) NSString *baseToken; // @synthesize baseToken=_baseToken;
@property(copy, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(copy, nonatomic) NSData *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property(copy, nonatomic) CKRecordID *shareRecordID; // @synthesize shareRecordID=_shareRecordID;
@property(copy, nonatomic) CDUnknownBlockType vettingInitiationRequestCompletionBlock; // @synthesize vettingInitiationRequestCompletionBlock=_vettingInitiationRequestCompletionBlock;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithShareRecordID:(id)arg1 encryptedKey:(id)arg2 participantID:(id)arg3 baseToken:(id)arg4;

@end

