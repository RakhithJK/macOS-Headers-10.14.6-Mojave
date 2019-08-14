//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteLocalQueryDelegate-Protocol.h>

@class NSString;

@interface CNAutocompleteLocalContactsFetcher : NSObject <CNAutocompleteLocalQueryDelegate>
{
}

- (id)resultsForSearchString:(id)arg1 terms:(id)arg2 properties:(id)arg3 contactStore:(id)arg4 error:(id *)arg5;
- (id)keysToFetchForProperties:(id)arg1;
- (id)contactsForPredicate:(id)arg1 properties:(id)arg2 contactStore:(id)arg3 error:(id *)arg4;
- (id)autocompleteResultsForProperties:(id)arg1 contactPredicate:(id)arg2 contactStore:(id)arg3 resultFactory:(id)arg4 error:(id *)arg5;
- (CDUnknownBlockType)transformWithProperties:(id)arg1 factory:(id)arg2;
- (id)autocompleteResultsForProperties:(id)arg1 fetchResults:(id)arg2 resultFactory:(id)arg3 contactStore:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

