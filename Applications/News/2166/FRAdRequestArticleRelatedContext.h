//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FRNonBatchedAdRequestContent.h"

@class NSString;

@interface FRAdRequestArticleRelatedContext : FRNonBatchedAdRequestContent
{
    BOOL _referralUsesPublisherInventory;
    long long _referralLocation;
    NSString *_campaignID;
}

@property(copy, nonatomic) NSString *campaignID; // @synthesize campaignID=_campaignID;
@property(nonatomic) BOOL referralUsesPublisherInventory; // @synthesize referralUsesPublisherInventory=_referralUsesPublisherInventory;
@property(nonatomic) long long referralLocation; // @synthesize referralLocation=_referralLocation;
- (void).cxx_destruct;

@end

