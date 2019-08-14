//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic;

@interface HAPCharacteristicConfigurationRequestTuple : HMFObject
{
    BOOL _broadcastEnable;
    HAPCharacteristic *_characteristic;
    unsigned long long _broadcastInterval;
}

+ (id)configurationTupleForCharacteristic:(id)arg1 broadcastEnable:(BOOL)arg2 broadcastInterval:(unsigned long long)arg3;
@property(nonatomic) unsigned long long broadcastInterval; // @synthesize broadcastInterval=_broadcastInterval;
@property(nonatomic) BOOL broadcastEnable; // @synthesize broadcastEnable=_broadcastEnable;
@property(retain, nonatomic) HAPCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;

@end

