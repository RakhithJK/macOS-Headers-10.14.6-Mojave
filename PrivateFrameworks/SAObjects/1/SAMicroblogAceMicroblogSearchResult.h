//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, NSURL, SADecoratedString, SAMicroblogTwitterPostAuthor, SAUIAppPunchOut;

@interface SAMicroblogAceMicroblogSearchResult : SADomainObject
{
}

+ (id)aceMicroblogSearchResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceMicroblogSearchResult;
@property(copy, nonatomic) NSURL *webAddress;
@property(retain, nonatomic) SADecoratedString *summary;
@property(copy, nonatomic) NSArray *resultUsers;
@property(copy, nonatomic) NSArray *resultPosts;
@property(copy, nonatomic) NSArray *resultNews;
@property(copy, nonatomic) NSString *query;
@property(retain, nonatomic) SAUIAppPunchOut *punchOut;
@property(retain, nonatomic) SAMicroblogTwitterPostAuthor *globalAuthor;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
