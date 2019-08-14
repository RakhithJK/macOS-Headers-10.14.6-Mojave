//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INBookRestaurantReservationIntentExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>

@class INRestaurant, INRestaurantGuest, INRestaurantOffer, NSDate, NSDateComponents, NSString;

@interface INBookRestaurantReservationIntent : INIntent <INBookRestaurantReservationIntentExport, NSCopying>
{
    INRestaurant *_restaurant;
    NSDateComponents *_bookingDateComponents;
    unsigned long long _partySize;
    NSString *_bookingIdentifier;
    INRestaurantGuest *_guest;
    INRestaurantOffer *_selectedOffer;
    NSString *_guestProvidedSpecialRequestText;
    NSDate *_bookingDate;
}

+ (id)intentDescription;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDate *bookingDate; // @synthesize bookingDate=_bookingDate;
@property(copy) NSString *guestProvidedSpecialRequestText; // @synthesize guestProvidedSpecialRequestText=_guestProvidedSpecialRequestText;
@property(copy) INRestaurantOffer *selectedOffer; // @synthesize selectedOffer=_selectedOffer;
@property(copy) INRestaurantGuest *guest; // @synthesize guest=_guest;
@property(copy) NSString *bookingIdentifier; // @synthesize bookingIdentifier=_bookingIdentifier;
@property unsigned long long partySize; // @synthesize partySize=_partySize;
@property(copy) NSDateComponents *bookingDateComponents; // @synthesize bookingDateComponents=_bookingDateComponents;
@property(copy) INRestaurant *restaurant; // @synthesize restaurant=_restaurant;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestaurant:(id)arg1 bookingDateComponents:(id)arg2 partySize:(unsigned long long)arg3 bookingIdentifier:(id)arg4 guest:(id)arg5 selectedOffer:(id)arg6 guestProvidedSpecialRequestText:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

