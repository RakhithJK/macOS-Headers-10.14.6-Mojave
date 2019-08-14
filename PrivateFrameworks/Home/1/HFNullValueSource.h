//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicValueSource-Protocol.h>
#import <Home/HFMediaValueSource-Protocol.h>

@class NSError, NSString;
@protocol HFCharacteristicOperationContextProviding, HFMediaProfileContainer;

@interface HFNullValueSource : NSObject <HFCharacteristicValueSource, HFMediaValueSource>
{
}

+ (id)na_identity;
@property(readonly, nonatomic) NSError *cachedPlaybackStateWriteError;
@property(readonly, nonatomic) BOOL hasPendingWrites;
- (id)writePlaybackState:(long long)arg1;
- (long long)lastPlaybackStateForProfile;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)commitTransactionWithReason:(id)arg1;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)cachedValueForCharacteristic:(id)arg1;
- (id)writeValuesForCharacteristics:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristics:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <HFCharacteristicOperationContextProviding> contextProvider;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

