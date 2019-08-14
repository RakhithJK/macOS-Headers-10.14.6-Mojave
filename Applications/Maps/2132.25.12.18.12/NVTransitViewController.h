//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSOutlineViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NVOutlineViewKeyDelegate-Protocol.h"
#import "NVRouteOverviewCellDelegate-Protocol.h"
#import "NVSideOutlineViewControllerDelegate-Protocol.h"
#import "RouteTableViewCellDelegate-Protocol.h"
#import "TransitDirectionGetTicketCellDelegate-Protocol.h"
#import "TransitDirectionsClusteredVehiclesCellDelegate-Protocol.h"
#import "TransitDirectionsIncidentCellDelegate-Protocol.h"
#import "TransitDirectionsInstructionsCellDelegate-Protocol.h"
#import "TransitRoutePickingPageCellDelegate-Protocol.h"

@class MKArtworkImageView, NSArray, NSDictionary, NSLayoutConstraint, NSString, NSView, NVDirectionsViewController, NVOutlineView, NVRouteManager, NVSideOutlineViewController, NVSideViewController;

__attribute__((visibility("hidden")))
@interface NVTransitViewController : NSViewController <NSOutlineViewDataSource, TransitDirectionsInstructionsCellDelegate, TransitDirectionsIncidentCellDelegate, TransitRoutePickingPageCellDelegate, TransitDirectionsClusteredVehiclesCellDelegate, NVSideOutlineViewControllerDelegate, NVRouteOverviewCellDelegate, TransitDirectionGetTicketCellDelegate, NSTableViewDelegate, RouteTableViewCellDelegate, NVOutlineViewKeyDelegate>
{
    MKArtworkImageView *_overlayView;
    long long _overlayViewSourceIndex;
    NSView *_sidebarContainer;
    unsigned long long _previouslySelectedRouteStepRow;
    BOOL _adjustFooter;
    BOOL _adjustPosition;
    BOOL _didPageInMoreRoutes;
    NSLayoutConstraint *_transitMessageCenteringConstraint;
    BOOL _downArrowPressed;
    BOOL _upArrowPressed;
    NVRouteManager *_routeManager;
    NVSideViewController *_sideViewController;
    NVDirectionsViewController *_directionsViewController;
    NVSideOutlineViewController *_outlineViewController;
    id _selectedItem;
    NSArray *_transitRouteDataSource;
    NSDictionary *_stringsForAccessibilityLabels;
}

@property(retain, nonatomic) NSDictionary *stringsForAccessibilityLabels; // @synthesize stringsForAccessibilityLabels=_stringsForAccessibilityLabels;
@property(copy, nonatomic) NSArray *transitRouteDataSource; // @synthesize transitRouteDataSource=_transitRouteDataSource;
@property(nonatomic) __weak id selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) NVSideOutlineViewController *outlineViewController; // @synthesize outlineViewController=_outlineViewController;
@property(readonly, nonatomic) NVDirectionsViewController *directionsViewController; // @synthesize directionsViewController=_directionsViewController;
@property(nonatomic) __weak NVSideViewController *sideViewController; // @synthesize sideViewController=_sideViewController;
- (void).cxx_destruct;
- (BOOL)outlineView:(id)arg1 keyUp:(id)arg2;
- (BOOL)outlineView:(id)arg1 keyDown:(id)arg2;
@property(readonly, nonatomic) BOOL upOrDownArrowButtonPressed;
- (void)_coalescedTableViewSelectionDidChange:(id)arg1;
- (void)_expandOrCollaspeOutlineViewCellsToMatchItemStateInDataSource:(id)arg1;
- (void)transitDirectionsClusteredVehiclesCell:(id)arg1 didSelectRideOption:(unsigned long long)arg2 inLeg:(id)arg3;
- (void)_updateListInstructionsLeadingInsetForDataSource:(id)arg1;
- (void)transitDirectionsCellDidTapGetTickets:(id)arg1;
- (void)transitRoutePickingPageCellDidSelectMoreRoutes:(id)arg1;
- (void)disclosureButtonTappedInCell:(id)arg1;
- (void)_showIncidents:(id)arg1 inPopoverRelativeToRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)transitDirectionsCell:(id)arg1 didTapIncident:(id)arg2;
- (void)transitDirectionsItemDetailWasTapped:(id)arg1;
- (void)transitDirectionsCellDetailWasTapped:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (id)directionsListDataSourceForRoute:(id)arg1;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)updateOverlayedShieldSource;
- (BOOL)installOverlayedShieldSource;
- (BOOL)_isValidFloatingShieldType:(long long)arg1;
- (void)removeOverlayedShieldSource;
- (id)outlineTransitPassOrDepartureAtRow:(long long)arg1;
- (void)sideOutlineViewControllerDidScroll:(id)arg1;
- (void)_notifyUpdateFooterHeight;
- (void)_mapWindowDidResize;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)_makeOutlineViewItemViewWithItem:(id)arg1;
- (void)_setupOutlineViewItemView:(id)arg1 withStep:(id)arg2;
- (void)_setupOutlineViewItemView:(id)arg1 withItem:(id)arg2 prepareMultiLine:(BOOL)arg3;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)rowExpansionChangedWithNotification:(id)arg1 expanded:(BOOL)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)_dataSourceForItem:(id)arg1;
- (id)expandedComposedRoute;
- (id)mainWindowController;
- (void)prepare;
- (void)prepareTable;
@property(retain, nonatomic) NVRouteManager *routeManager; // @synthesize routeManager=_routeManager;
- (id)mapView;
- (void)_updateSelectedRowInTableView;
- (void)_routeManagerSelectedRouteIndexDidChange;
- (void)_updateDataSourceItems;
- (void)_routeManagersRouteDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)sideOutlineViewWasDoubleClicked:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) __weak NVOutlineView *outlineView;
- (id)initWithDirectionController:(id)arg1 sidebarContainer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

