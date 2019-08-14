//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/INIntentResponse.h>

@class INCurrencyAmount, NSDateComponents;

@interface INCancelRideIntentResponse : INIntentResponse
{
    INCurrencyAmount *_cancellationFee;
    NSDateComponents *_cancellationFeeThreshold;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSDateComponents *cancellationFeeThreshold; // @synthesize cancellationFeeThreshold=_cancellationFeeThreshold;
@property(copy) INCurrencyAmount *cancellationFee; // @synthesize cancellationFee=_cancellationFee;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) long long code; // @dynamic code;
- (id)initWithBackingStore:(id)arg1;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end

