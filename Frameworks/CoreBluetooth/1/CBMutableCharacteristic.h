//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreBluetooth/CBCharacteristic.h>

@class NSArray, NSData, NSMutableArray, NSNumber;

@interface CBMutableCharacteristic : CBCharacteristic
{
    NSMutableArray *_subscribedCentrals;
    unsigned long long _permissions;
    NSNumber *_ID;
}

@property(retain) NSNumber *ID; // @synthesize ID=_ID;
@property(nonatomic) unsigned long long permissions; // @synthesize permissions=_permissions;
@property(readonly, retain) NSArray *subscribedCentrals; // @synthesize subscribedCentrals=_subscribedCentrals;
- (void).cxx_destruct;
- (id)description;
- (void)handlePowerNotOn;
- (BOOL)handleCentralUnsubscribed:(id)arg1;
- (BOOL)handleCentralSubscribed:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithService:(id)arg1 dictionary:(id)arg2;
- (id)initWithType:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 permissions:(unsigned long long)arg4;

// Remaining properties
@property(retain) NSArray *descriptors; // @dynamic descriptors;
@property(nonatomic) unsigned long long properties; // @dynamic properties;
@property(retain) NSData *value; // @dynamic value;

@end

