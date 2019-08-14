//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNSuggestedContactPredicate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNFullTextSearchContactPredicate : CNPredicate <CNSuggestedContactPredicate>
{
    NSString *_searchString;
    NSArray *_containerIdentifiers;
    NSArray *_groupIdentifiers;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(readonly, copy, nonatomic) NSArray *containerIdentifiers; // @synthesize containerIdentifiers=_containerIdentifiers;
@property(readonly, copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchString:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;
- (id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

