//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSSet;
@protocol OS_dispatch_queue;

@interface FCFetchGroup : NSObject
{
    BOOL _shouldFilter;
    BOOL _isUserFacing;
    NSSet *_keys;
    id _context;
    long long _qualityOfService;
    long long _relativePriority;
    unsigned long long _numberOfFetchAttempts;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completion;
    NSDate *_requestDate;
}

@property(retain, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(nonatomic) unsigned long long numberOfFetchAttempts; // @synthesize numberOfFetchAttempts=_numberOfFetchAttempts;
@property(readonly, nonatomic) BOOL isUserFacing; // @synthesize isUserFacing=_isUserFacing;
@property(readonly, nonatomic) long long relativePriority; // @synthesize relativePriority=_relativePriority;
@property(readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) BOOL shouldFilter; // @synthesize shouldFilter=_shouldFilter;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSSet *keys; // @synthesize keys=_keys;
- (void).cxx_destruct;
- (long long)comparePriority:(id)arg1;
- (void)fireCompletion;
- (id)initWithKeys:(id)arg1 context:(id)arg2 shouldFilter:(BOOL)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5 completionQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;

@end

