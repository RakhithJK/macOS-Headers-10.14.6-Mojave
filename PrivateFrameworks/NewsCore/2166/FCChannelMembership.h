//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCInterestToken, NSString, NTPBChannelMembershipRecord;

@interface FCChannelMembership : NSObject
{
    NTPBChannelMembershipRecord *_record;
    FCInterestToken *_interestToken;
}

@property(retain, nonatomic) FCInterestToken *interestToken; // @synthesize interestToken=_interestToken;
@property(retain, nonatomic) NTPBChannelMembershipRecord *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *draftIssueListID;
@property(readonly, nonatomic) NSString *draftArticleListID;
@property(readonly, nonatomic) BOOL isAllowedToSeeDrafts;
@property(readonly, nonatomic) NSString *channelID;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2;

@end

