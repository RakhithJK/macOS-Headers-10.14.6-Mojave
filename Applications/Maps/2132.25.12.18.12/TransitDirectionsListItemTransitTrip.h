//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TransitDirectionsListArtworkItem.h"

#import "TransitDirectionsListExpandableItem-Protocol.h"

@class GEOComposedTransitTripRouteStep, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TransitDirectionsListItemTransitTrip : TransitDirectionsListArtworkItem <TransitDirectionsListExpandableItem>
{
    NSString *_locallyGeneratedSubstepsFooter;
    BOOL _expanded;
    GEOComposedTransitTripRouteStep *_boardStep;
    NSArray *_expandedItems;
}

+ (id)listItemWithBoardStep:(id)arg1;
@property(copy, nonatomic) NSArray *expandedItems; // @synthesize expandedItems=_expandedItems;
@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) GEOComposedTransitTripRouteStep *boardStep; // @synthesize boardStep=_boardStep;
- (void).cxx_destruct;
- (id)initWithBoardStep:(id)arg1;
- (unsigned long long)numberOfSubItemsWithForceExpand:(BOOL)arg1;
- (id)subItems;
- (BOOL)shouldEnableExpandedButton;
- (id)_countStopsStringClientFallback;
- (id)_countStopsStringFromServer;
- (id)expandingButtonTitleForExpandedState:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

