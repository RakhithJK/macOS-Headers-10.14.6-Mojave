//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CSDataWrapper, CSSearchableIndex, NSData, NSString;

@interface CSSearchableIndexRequest : NSObject
{
    BOOL _shouldThrottle;
    BOOL _started;
    BOOL _finished;
    BOOL _throttled;
    // Error parsing type: AI, name: _requestID
    unsigned long long _maxRetryCount;
    NSData *_data;
    CDUnknownBlockType _performBlock;
    CDUnknownBlockType _completionDataBlock;
    CDUnknownBlockType _completionBlock;
    CSSearchableIndex *_index;
    NSString *_label;
    CSDataWrapper *_dataWrapper;
    unsigned long long _retryCount;
}

+ (void)initialize;
@property(nonatomic) BOOL throttled; // @synthesize throttled=_throttled;
@property(nonatomic) BOOL finished; // @synthesize finished=_finished;
@property(nonatomic) BOOL started; // @synthesize started=_started;
// Error parsing type for property requestID:
// Property attributes: TAI,N,V_requestID

@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) CSDataWrapper *dataWrapper; // @synthesize dataWrapper=_dataWrapper;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) CSSearchableIndex *index; // @synthesize index=_index;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType completionDataBlock; // @synthesize completionDataBlock=_completionDataBlock;
@property(copy, nonatomic) CDUnknownBlockType performBlock; // @synthesize performBlock=_performBlock;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) BOOL shouldThrottle; // @synthesize shouldThrottle=_shouldThrottle;
@property(nonatomic) unsigned long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)start;
- (void)_finishWithError:(id)arg1;
- (void)_perform;
- (void)retryIfNecessaryWithError:(id)arg1;
- (void)retryIfNecessaryWithError:(id)arg1 dataWrapper:(id)arg2;
- (void)_unthrottleIfNecessary;
- (void)_throttleIfNecessary;
- (id)description;
- (void)dealloc;
- (id)initWithSearchableIndex:(id)arg1 label:(id)arg2;

@end

