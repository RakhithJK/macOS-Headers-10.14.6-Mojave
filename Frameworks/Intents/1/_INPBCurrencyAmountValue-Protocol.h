//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDecimalNumberValue, _INPBValueMetadata;

@protocol _INPBCurrencyAmountValue <NSObject>
@property(readonly, nonatomic) BOOL hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(readonly, nonatomic) BOOL hasCurrencyCode;
@property(copy, nonatomic) NSString *currencyCode;
@property(readonly, nonatomic) BOOL hasAmount;
@property(retain, nonatomic) _INPBDecimalNumberValue *amount;
@end
