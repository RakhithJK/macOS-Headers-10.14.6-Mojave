//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDecimalNumberValue;

@protocol _INPBRideFareLineItem <NSObject>
@property(readonly, nonatomic) BOOL hasTitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) BOOL hasPrice;
@property(retain, nonatomic) _INPBDecimalNumberValue *price;
@property(readonly, nonatomic) BOOL hasCurrencyCode;
@property(copy, nonatomic) NSString *currencyCode;
@end

