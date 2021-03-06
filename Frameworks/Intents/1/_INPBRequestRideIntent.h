//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBRequestRideIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBDateTimeRange, _INPBInteger, _INPBIntentMetadata, _INPBLocation, _INPBPaymentMethod;

@interface _INPBRequestRideIntent : PBCodable <_INPBRequestRideIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int usesApplePayForPayment:1;
    } _has;
    BOOL _usesApplePayForPayment;
    _INPBLocation *_dropOffLocation;
    _INPBIntentMetadata *_intentMetadata;
    _INPBInteger *_partySize;
    _INPBPaymentMethod *_paymentMethod;
    _INPBDataString *_paymentMethodName;
    _INPBLocation *_pickupLocation;
    _INPBDateTimeRange *_pickupTime;
    _INPBDataString *_rideOptionName;
    _INPBDateTimeRange *_scheduledPickupTime;
}

@property(nonatomic) BOOL usesApplePayForPayment; // @synthesize usesApplePayForPayment=_usesApplePayForPayment;
@property(retain, nonatomic) _INPBDateTimeRange *scheduledPickupTime; // @synthesize scheduledPickupTime=_scheduledPickupTime;
@property(retain, nonatomic) _INPBDataString *rideOptionName; // @synthesize rideOptionName=_rideOptionName;
@property(retain, nonatomic) _INPBDateTimeRange *pickupTime; // @synthesize pickupTime=_pickupTime;
@property(retain, nonatomic) _INPBLocation *pickupLocation; // @synthesize pickupLocation=_pickupLocation;
@property(retain, nonatomic) _INPBDataString *paymentMethodName; // @synthesize paymentMethodName=_paymentMethodName;
@property(retain, nonatomic) _INPBPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(retain, nonatomic) _INPBInteger *partySize; // @synthesize partySize=_partySize;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBLocation *dropOffLocation; // @synthesize dropOffLocation=_dropOffLocation;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasUsesApplePayForPayment;
@property(readonly, nonatomic) BOOL hasScheduledPickupTime;
@property(readonly, nonatomic) BOOL hasRideOptionName;
@property(readonly, nonatomic) BOOL hasPickupTime;
@property(readonly, nonatomic) BOOL hasPickupLocation;
@property(readonly, nonatomic) BOOL hasPaymentMethodName;
@property(readonly, nonatomic) BOOL hasPaymentMethod;
@property(readonly, nonatomic) BOOL hasPartySize;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(readonly, nonatomic) BOOL hasDropOffLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

