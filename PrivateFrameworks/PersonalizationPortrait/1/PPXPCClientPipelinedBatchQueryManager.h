//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PPXPCClientPipelinedBatchQueryManager : NSObject
{
    // Error parsing type: AQ, name: _queryId
    NSMutableDictionary *_queryContexts;
}

+ (void)assertBatch:(id)arg1 forQueryName:(id)arg2 hasExpectedContainedType:(Class)arg3;
- (void).cxx_destruct;
- (void)cancelPendingQueriesWithError:(id)arg1;
- (void)handleReplyWithName:(id)arg1 batch:(id)arg2 isLast:(BOOL)arg3 error:(id)arg4 queryId:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (BOOL)syncExecuteQueryWithName:(id)arg1 error:(id *)arg2 queryInitializer:(CDUnknownBlockType)arg3 handleBatch:(CDUnknownBlockType)arg4;
- (id)init;

@end
