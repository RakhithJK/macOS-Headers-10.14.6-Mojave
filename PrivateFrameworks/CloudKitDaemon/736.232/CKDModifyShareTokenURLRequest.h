//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDModifyShareTokenURLRequest : CKDURLRequest
{
    CDUnknownBlockType _shareTokenModifiedBlock;
    NSArray *_shareTokenInfos;
    NSMutableDictionary *_shareTokenInfosByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *shareTokenInfosByRequestID; // @synthesize shareTokenInfosByRequestID=_shareTokenInfosByRequestID;
@property(retain, nonatomic) NSArray *shareTokenInfos; // @synthesize shareTokenInfos=_shareTokenInfos;
@property(copy, nonatomic) CDUnknownBlockType shareTokenModifiedBlock; // @synthesize shareTokenModifiedBlock=_shareTokenModifiedBlock;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithShareTokenInfos:(id)arg1;

@end

