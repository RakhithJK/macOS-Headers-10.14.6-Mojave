//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusRegionContainer-Protocol.h>
#import <UIKitCore/_UILegacyFocusRegion-Protocol.h>

@class NSArray, NSIndexPath, NSString, UITableView, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _UITableViewCellPromiseRegion : NSObject <_UILegacyFocusRegion, _UIFocusRegionContainer>
{
    UITableView *_tableView;
    NSIndexPath *_indexPath;
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
- (id)_focusDebugOverlayParentView;
- (id)_focusRegionGuides;
- (id)_focusRegionView;
- (BOOL)_isTransparentFocusRegion;
- (id)_fulfillPromisedFocusRegion;
- (BOOL)_isPromiseFocusRegion;
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
- (BOOL)canBecomeFocused;
- (BOOL)_legacy_isEligibleForFocusInteraction;
- (struct CGRect)_focusRegionFrame;
- (id)_focusRegionFocusSystem;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

