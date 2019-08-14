//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFocusSystem, _UIFocusMapSearchInfo;
@protocol UICoordinateSpace, _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusMap : NSObject
{
    BOOL _minimumSearchAreaIsEmpty;
    BOOL _trackingSearchInfo;
    BOOL _needsSearchInfo;
    UIFocusSystem *_focusSystem;
    id <_UIFocusRegionContainer> _rootContainer;
    id <UICoordinateSpace> _coordinateSpace;
    _UIFocusMapSearchInfo *_defaultItemSearchInfo;
    _UIFocusMapSearchInfo *_focusMovementSearchInfo;
    struct CGRect _minimumSearchArea;
}

@property(readonly, nonatomic, getter=_focusMovementSearchContext) _UIFocusMapSearchInfo *focusMovementSearchInfo; // @synthesize focusMovementSearchInfo=_focusMovementSearchInfo;
@property(readonly, nonatomic, getter=_defaultItemSearchContext) _UIFocusMapSearchInfo *defaultItemSearchInfo; // @synthesize defaultItemSearchInfo=_defaultItemSearchInfo;
@property(nonatomic) struct CGRect minimumSearchArea; // @synthesize minimumSearchArea=_minimumSearchArea;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(readonly, nonatomic) __weak id <_UIFocusRegionContainer> rootContainer; // @synthesize rootContainer=_rootContainer;
@property(readonly, nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
- (void).cxx_destruct;
- (void)diagnoseFocusabilityForItem:(id)arg1 report:(id)arg2;
- (void)_trackExternalSnapshot:(id)arg1;
- (void)_beginTrackingFocusMovementSearchInfoIfNecessary;
- (void)_beginTrackingDefaultItemSearchInfoIfNecessary;
- (id)_stopTrackingSearches;
- (void)_beginTrackingSearches;
- (id)_findAllDefaultFocusableRegionsWithSnapshotter:(id)arg1;
- (id)_closestFocusableItemToPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 excludingItems:(id)arg3;
- (id)_allDefaultFocusableRegionsInContainer:(id)arg1 intersectingRegion:(id)arg2;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inRegions:(id)arg2;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 focusedRegion:(id)arg2;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1;
- (id)_defaultFocusItemInEnvironment:(id)arg1 limitScopeUsingFocusPreferences:(BOOL)arg2;
- (id)_defaultFocusItemInEnvironment:(id)arg1;
- (id)_allFocusableItemsInEnvironment:(id)arg1;
- (id)_defaultMapSnapshotter;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2;
- (id)init;

@end

