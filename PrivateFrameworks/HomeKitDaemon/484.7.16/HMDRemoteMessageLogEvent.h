//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class HMDRemoteMessage, NSString;

@interface HMDRemoteMessageLogEvent : HMDLogEvent <HMDAWDLogEvent>
{
    BOOL _sending;
    int _transportType;
    HMDRemoteMessage *_remoteMessage;
}

+ (id)receivedRemoteMessage:(id)arg1 transportType:(int)arg2;
+ (id)sendingRemoteMessage:(id)arg1 transportType:(int)arg2;
+ (id)uuid;
+ (int)awdMessageTypeFromHMDMessageType:(long long)arg1;
@property(readonly, nonatomic) BOOL sending; // @synthesize sending=_sending;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) HMDRemoteMessage *remoteMessage; // @synthesize remoteMessage=_remoteMessage;
- (void).cxx_destruct;
- (id)initWithRemoteMessage:(id)arg1 transportType:(int)arg2 sending:(BOOL)arg3;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

