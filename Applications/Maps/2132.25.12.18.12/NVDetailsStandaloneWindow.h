//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

#import "NVPlaceCardActionHandlerDelegate-Protocol.h"

@class MKLabelMarker, MKStackingViewController, MSPQuery, NSString, NVDetailsStandaloneCloseButton, NVPlace, NVPlaceCardActionHandler, NVQuickRouteButtonView, NVSharingController, NVTouchBarController, _MKQuickRouteManager;
@protocol GEOTransitLineItem;

__attribute__((visibility("hidden")))
@interface NVDetailsStandaloneWindow : NSPanel <NVPlaceCardActionHandlerDelegate>
{
    NVPlaceCardActionHandler *_actionHandler;
    NVPlace *_place;
    id <GEOTransitLineItem> _transitLineItem;
    MKLabelMarker *_labelMarker;
    NVDetailsStandaloneCloseButton *_closeButton;
    MKStackingViewController *_viewController;
    NVSharingController *_sharingController;
    MSPQuery *_favorites;
    NVTouchBarController *_touchBarController;
    NVQuickRouteButtonView *_quickRouteButtonForTouchBar;
    _MKQuickRouteManager *_quickRouteManagerForTouchBar;
}

@property(retain) _MKQuickRouteManager *quickRouteManagerForTouchBar; // @synthesize quickRouteManagerForTouchBar=_quickRouteManagerForTouchBar;
@property(retain) NVQuickRouteButtonView *quickRouteButtonForTouchBar; // @synthesize quickRouteButtonForTouchBar=_quickRouteButtonForTouchBar;
@property(retain) NVTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
@property(retain) MSPQuery *favorites; // @synthesize favorites=_favorites;
@property(retain) NVSharingController *sharingController; // @synthesize sharingController=_sharingController;
@property(readonly) NVPlaceCardActionHandler *actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain) MKStackingViewController *viewController; // @synthesize viewController=_viewController;
@property(retain) NVDetailsStandaloneCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain) MKLabelMarker *labelMarker; // @synthesize labelMarker=_labelMarker;
@property(retain) id <GEOTransitLineItem> transitLineItem; // @synthesize transitLineItem=_transitLineItem;
@property(retain) NVPlace *place; // @synthesize place=_place;
- (void).cxx_destruct;
- (BOOL)quickRouteShouldIncludeTransitWhenNotPreferredTransportType;
- (BOOL)quickRouteShouldOnlyUseAutomobile;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)resignKeyWindow;
- (void)becomeMainWindow;
- (void)becomeKeyWindow;
- (BOOL)canBecomeKeyWindow;
- (void)dealloc;
- (id)standardWindowButton:(unsigned long long)arg1;
- (float)_backdropBleedAmount;
- (void)placeCardActionHandler:(id)arg1 dismissInfoCardIfNecessaryForActionType:(unsigned long long)arg2;
- (id)placeCardActionHandler:(id)arg1 correspondingPlaceInBookmarksForPlace:(id)arg2;
- (void)removePlaceFromFavorites:(id)arg1;
- (BOOL)isPlaceInFavorites:(id)arg1;
- (void)addPlaceToFavorites:(id)arg1;
- (void)openWebsiteForPlace:(id)arg1;
- (void)callPlace:(id)arg1;
- (void)_updateTouchBarButtonsEnabledState;
- (void)_updateTouchBar;
- (void)_configureTouchBarItems;
- (id)touchBarController:(id)arg1 sharingControllerForPlace:(id)arg2;
- (void)touchBarController:(id)arg1 didSelectCategory:(id)arg2;
- (void)touchBarController:(id)arg1 exitSelectionMode:(id)arg2;
- (void)touchBarController:(id)arg1 exitDirectionsMode:(id)arg2;
- (BOOL)touchBarController:(id)arg1 isPlaceInFavorites:(id)arg2;
- (void)touchBarController:(id)arg1 didSelectItemAtIndex:(long long)arg2 fromSearchCompletions:(id)arg3;
- (void)touchBarController:(id)arg1 togglePlaceCardForSelectedPlace:(id)arg2;
- (BOOL)touchBarController:(id)arg1 isPlaceCardShownForSelectedPlace:(id)arg2;
- (void)touchBarController:(id)arg1 openHomepageForSelectedPlace:(id)arg2;
- (void)touchBarController:(id)arg1 removeSelectedPlaceFromFavorites:(id)arg2;
- (void)touchBarController:(id)arg1 addSelectedPlaceToFavorites:(id)arg2;
- (void)touchBarController:(id)arg1 callSelectedPlace:(id)arg2;
- (void)touchBarController:(id)arg1 directionsToPlace:(id)arg2;
- (void)touchBarController:(id)arg1 toggleFocusSearchField:(id)arg2;
- (void)touchBarController:(id)arg1 centerOnUserLocation:(id)arg2;
- (void)touchBarController:(id)arg1 didSelectDirectionsTransportTypeAtIndex:(long long)arg2;
- (id)makeTouchBar;
- (void)updateBookmarks;
- (void)someWindowDidBecomeMain:(id)arg1;
- (void)someWindowDidResignMain:(id)arg1;
- (id)mainWindowController;
- (id)initWithContentRect:(struct CGRect)arg1 viewController:(id)arg2 widthConstraint:(id)arg3 place:(id)arg4 forAnnotation:(id)arg5;
- (void)performClose:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

