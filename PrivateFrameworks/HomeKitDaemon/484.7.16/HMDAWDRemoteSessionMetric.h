//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface HMDAWDRemoteSessionMetric : HMDLogEvent <HMDAWDLogEvent>
{
    BOOL _submitted;
    BOOL _authenticated;
    int _role;
    int _closeReason;
    NSDate *_creation;
    NSUUID *_sessionID;
}

+ (int)closeReasonFromError:(id)arg1;
+ (id)uuid;
+ (void)initialize;
@property(readonly, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) int closeReason; // @synthesize closeReason=_closeReason;
@property(getter=isAuthenticated) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property(retain, nonatomic) NSDate *creation; // @synthesize creation=_creation;
@property(readonly, nonatomic) int role; // @synthesize role=_role;
@property(nonatomic) BOOL submitted; // @synthesize submitted=_submitted;
- (void).cxx_destruct;
- (id)metricForAWD;
- (void)open;
- (id)initWithClientMode:(BOOL)arg1 sessionID:(id)arg2;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

