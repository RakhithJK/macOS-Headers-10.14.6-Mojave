//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSOutlineViewDelegate-Protocol.h"
#import "NVDriveWalkViewModelDelegate-Protocol.h"
#import "NVRouteOverviewCellDelegate-Protocol.h"
#import "NVSideOutlineViewControllerDelegate-Protocol.h"

@class NSString, NVDirectionsViewController, NVDriveWalkViewModel, NVOutlineView, NVSideOutlineViewController;

__attribute__((visibility("hidden")))
@interface NVDriveWalkViewController : NSViewController <NVDriveWalkViewModelDelegate, NVSideOutlineViewControllerDelegate, NSOutlineViewDelegate, NVRouteOverviewCellDelegate>
{
    NVDriveWalkViewModel *_viewModel;
    NVDirectionsViewController *_directionsViewController;
    NVSideOutlineViewController *_outlineViewController;
}

@property(retain, nonatomic) NVSideOutlineViewController *outlineViewController; // @synthesize outlineViewController=_outlineViewController;
@property(readonly, nonatomic) NVDirectionsViewController *directionsViewController; // @synthesize directionsViewController=_directionsViewController;
@property(readonly, nonatomic) NVDriveWalkViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_expandOrCollapseItemAtRow:(long long)arg1;
- (void)disclosureButtonTappedInCell:(id)arg1;
- (void)sideOutlineViewControllerDidScroll:(id)arg1;
- (void)sideOutlineViewWasDoubleClicked:(id)arg1;
- (void)rowExpansionChangedWithNotification:(id)arg1 expanded:(BOOL)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)viewModel:(id)arg1 didSelectItem:(id)arg2;
- (void)viewModelDidUpdate:(id)arg1;
- (void)_coalescedTableViewSelectionDidChange;
- (void)_configureRouteOverviewCell:(id)arg1 index:(unsigned long long)arg2;
- (void)_configureRouteCellView:(id)arg1 type:(long long)arg2 index:(unsigned long long)arg3;
- (id)_makeViewForItemIdentifier:(id)arg1;
- (id)_cellForItem:(id)arg1;
- (id)_identifierForRowType:(long long)arg1;
@property(readonly, nonatomic) NVOutlineView *outlineView;
- (void)viewDidAppear;
- (void)loadView;
- (id)initWithViewModel:(id)arg1 directionsViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

