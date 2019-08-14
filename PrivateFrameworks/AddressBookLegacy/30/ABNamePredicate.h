//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookLegacy/ABPredicate.h>

@class NSArray, NSString;

@interface ABNamePredicate : ABPredicate
{
    void *_addressBook;
    void *_tokenizations;
    struct __CFArray *_tokenizationSortKeys;
    BOOL _matchWholeWords;
    BOOL _matchPersonOrCompanyNamesExclusively;
    BOOL _matchPreferredName;
    BOOL _generateExceprts;
    NSString *_name;
    NSArray *_sources;
    NSArray *_groups;
    NSArray *_scopedContactIdentifiers;
}

@property(retain, nonatomic) NSArray *scopedContactIdentifiers; // @synthesize scopedContactIdentifiers=_scopedContactIdentifiers;
@property(nonatomic) BOOL generateExceprts; // @synthesize generateExceprts=_generateExceprts;
@property(nonatomic) BOOL matchPreferredName; // @synthesize matchPreferredName=_matchPreferredName;
@property(nonatomic) BOOL matchPersonOrCompanyNamesExclusively; // @synthesize matchPersonOrCompanyNamesExclusively=_matchPersonOrCompanyNamesExclusively;
@property(nonatomic) BOOL matchWholeWords; // @synthesize matchWholeWords=_matchWholeWords;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)predicateFormat;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;
- (id)queryRankStringForPredicateIdentifier:(int)arg1;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (id)_personNonNameKeys;
- (id)_personNameKeys;
- (id)queryJoinsInCompound:(BOOL)arg1 predicateIdentifier:(int)arg2;
- (id)_matchClauseForColumns:(id)arg1 requiringAllTerms:(BOOL)arg2;
- (id)querySelectPropertiesForPredicateIdentifier:(int)arg1;
- (id)emphasizedExcerptStringForMatchString:(id)arg1;
- (id)ab_metadataForMatchingRow:(struct CPSqliteStatement *)arg1 columnOffset:(int)arg2;
- (BOOL)isValid;
- (void *)tokenizations;
@property(copy, nonatomic) NSString *accountIdentifier;
@property(nonatomic) void *source;
@property(nonatomic) void *group;
@property(nonatomic) void *addressBook;
- (void)dealloc;
- (id)init;

@end

