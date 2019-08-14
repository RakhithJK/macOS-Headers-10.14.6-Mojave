//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class HMDHAPAccessory, NSString;

@interface HMDTargetControllerErrorEvent : HMDLogEvent <HMDAWDLogEvent>
{
    unsigned long long _errorType;
    HMDHAPAccessory *_accessory;
}

+ (id)errorEventWithErrorType:(unsigned long long)arg1 accessory:(id)arg2;
+ (id)uuid;
@property(readonly, nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) unsigned long long errorType; // @synthesize errorType=_errorType;
- (void).cxx_destruct;
- (id)initWithErrorType:(unsigned long long)arg1 accessory:(id)arg2;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
