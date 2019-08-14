//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapItemIdentifier, GEOMapServiceTraits, GEORPSuggestionEntry, GEORPSuggestionList, GEOSortPriorityMapping, NSDictionary, NSString;

@protocol GEOMapServiceCompletionTicket <NSObject>
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
@property(readonly, nonatomic, getter=_searchQuery) NSString *searchQuery;
- (GEOSortPriorityMapping *)sortPriorityMapping;
- (BOOL)shouldDisplayNoResults;
- (BOOL)hasShouldDisplayNoResults;
- (double)retainSearchTime;
- (BOOL)isRapEnabled;
- (void)applyToSuggestionEntry:(GEORPSuggestionEntry *)arg1 withAutocompleteSearchResultIdentifier:(GEOMapItemIdentifier *)arg2;
- (void)applyToSuggestionList:(GEORPSuggestionList *)arg1;
- (BOOL)matchesFragment:(NSString *)arg1;
- (void)cancel;
- (void)submitWithAutoCompletionHandler:(void (^)(id <GEOCompletion>, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
@end

