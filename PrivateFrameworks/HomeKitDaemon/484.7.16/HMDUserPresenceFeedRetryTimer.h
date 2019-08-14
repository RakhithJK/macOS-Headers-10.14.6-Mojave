//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMFTimer, NSString, NSUUID;

@interface HMDUserPresenceFeedRetryTimer : NSObject <HMFLogging>
{
    NSUUID *_timerID;
    HMFTimer *_retryTimer;
    unsigned long long _retryCount;
}

+ (id)logCategory;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) HMFTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(readonly, nonatomic) NSUUID *timerID; // @synthesize timerID=_timerID;
- (void).cxx_destruct;
- (void)cancel;
- (void)startWithDelegate:(id)arg1 responseTime:(double)arg2;
- (BOOL)shouldRetryImmediately:(double)arg1;
@property(readonly, nonatomic) double retryTimeInterval;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

