//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsDonation/NSObject-Protocol.h>

@class ACAccount, CNEither, CNFuture, NSArray, NSString;

@protocol CNDonationAgentAdapter <NSObject>
- (CNFuture *)removeAllRejections;
- (CNFuture *)rejectValuesWithClusterIdentifier:(NSString *)arg1;
- (CNFuture *)rejectValueWithDonationIdentifier:(NSString *)arg1;
- (CNFuture *)changeFromAccount:(ACAccount *)arg1 toAccount:(ACAccount *)arg2;
- (CNFuture *)meCardDonations;
- (CNEither *)donatedMeCardEither;
- (CNFuture *)fetchDonatedMeCard;
- (CNFuture *)removeDonatedMeCardValuesForIdentifiers:(NSArray *)arg1;
- (CNFuture *)donateMeCardValues:(NSArray *)arg1;
@end

