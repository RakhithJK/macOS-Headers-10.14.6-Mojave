//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSString;

@interface EWSUnsubscribeType : EWSBaseRequestType
{
    NSString *_SubscriptionId;
}

+ (id)definition;
@property(copy, nonatomic) NSString *SubscriptionId; // @synthesize SubscriptionId=_SubscriptionId;
- (void).cxx_destruct;

@end

