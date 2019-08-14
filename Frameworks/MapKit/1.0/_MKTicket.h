//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKMapServiceTicket-Protocol.h>

@class GEODirectionIntent, GEOMapRegion, GEOMapServiceTraits, GEORelatedSearchSuggestion, GEOResolvedItem, NSArray, NSError, NSString;
@protocol GEOMapServiceTicket;

__attribute__((visibility("hidden")))
@interface _MKTicket : NSObject <MKMapServiceTicket>
{
    id <GEOMapServiceTicket> _ticket;
    NSArray *_exactMapItems;
    NSArray *_refinedMapItems;
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sectionHeader;
@property(readonly, nonatomic) double requestResponseTime;
@property(readonly, nonatomic) BOOL showDymSuggestionCloseButton;
@property(readonly, nonatomic) unsigned int dymSuggestionVisibleTime;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) BOOL shouldEnableRedoSearch;
@property(readonly, nonatomic) NSArray *displayHeaderSubstitutes;
@property(readonly, nonatomic) NSString *resultDisplayHeader;
@property(readonly, nonatomic) GEODirectionIntent *directionIntent;
@property(readonly, nonatomic) NSArray *retainedSearchMetadata;
@property(readonly, nonatomic) GEOResolvedItem *clientResolvedResult;
@property(readonly, nonatomic) int searchResultType;
@property(readonly, nonatomic) NSArray *browseCategories;
@property(readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property(readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property(readonly, nonatomic, getter=isChainResultSet) BOOL chainResultSet;
@property(readonly, nonatomic) GEOMapRegion *boundingRegion;
@property(readonly, nonatomic) NSArray *refinedMapItems;
@property(readonly, nonatomic) NSArray *exactMapItems;
- (void)applyToPlaceInfo:(id)arg1;
- (void)applyToCorrectedSearch:(id)arg1;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 queue:(id)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 timeout:(long long)arg2 networkActivity:(CDUnknownBlockType)arg3;
@property(readonly, copy) NSString *description;
- (id)initWithTicket:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

