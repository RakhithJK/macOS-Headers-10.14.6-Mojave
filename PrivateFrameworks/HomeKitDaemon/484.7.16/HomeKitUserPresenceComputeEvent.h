//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class AWDHomeKitUserPresenceCompute, NSString;

@interface HomeKitUserPresenceComputeEvent : HMDLogEvent <HMDAWDLogEvent>
{
    AWDHomeKitUserPresenceCompute *_metric;
}

+ (id)uuid;
+ (void)initialize;
@property(readonly, nonatomic) AWDHomeKitUserPresenceCompute *metric; // @synthesize metric=_metric;
- (void).cxx_destruct;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

