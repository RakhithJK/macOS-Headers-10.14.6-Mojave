//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SAMPSearch : SADomainCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(nonatomic) BOOL strict;
@property(copy, nonatomic) NSArray *searchTypes;
@property(nonatomic) long long maxResults;
@property(copy, nonatomic) NSArray *constraints;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

