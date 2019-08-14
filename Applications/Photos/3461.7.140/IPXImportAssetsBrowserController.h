//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXBrowserController.h"

#import "IPXImportAssetsViewControllerDelegate-Protocol.h"
#import "IPXImportBrowserModelDelegate-Protocol.h"
#import "IPXSelectionProvider-Protocol.h"
#import "PFResourceAccessClient-Protocol.h"
#import "RKImageCaptureManagerReceiver-Protocol.h"

@class IPXFrequentLocationsImporter, IPXImportAssetsSecondaryToolbarViewController, IPXImportAssetsViewController, IPXImportBrowserModel, IPXImportLayoutSectionHeaderSupplementaryView, NSAlert, NSArray, NSSlider, NSString, NSTextField, NSView, RDAlbum, UXBarButtonItem;

@interface IPXImportAssetsBrowserController : IPXBrowserController <IPXImportAssetsViewControllerDelegate, RKImageCaptureManagerReceiver, IPXImportBrowserModelDelegate, IPXSelectionProvider, PFResourceAccessClient>
{
    NSView *_noPhotosPlaceholderView;
    NSTextField *_noPhotosPlaceholderViewTitle;
    NSSlider *_zoomSlider;
    IPXFrequentLocationsImporter *_frequentLocationsImporter;
    IPXImportAssetsViewController *_importAssetsViewController;
    IPXImportAssetsSecondaryToolbarViewController *_importToolbarViewController;
    NSAlert *_userTrustRequiredAlert;
    UXBarButtonItem *_importSelectedButton;
    UXBarButtonItem *_importButton;
    IPXImportLayoutSectionHeaderSupplementaryView *_alreadyImportedSectionHeader;
    BOOL _isObservingUserDefaults;
    unsigned long long _currentItemsType;
    BOOL _active;
    BOOL _showsAllAlreadyImportedAssets;
    BOOL _importProgressMode;
    BOOL _dupCheckComplete;
    IPXImportBrowserModel *_model;
    unsigned long long _expectedThumbnailCount;
    unsigned long long _completedThumbnailCount;
    double _thumbnailProgress;
    RDAlbum *_userCreatedAlbum;
}

@property(retain, nonatomic) RDAlbum *userCreatedAlbum; // @synthesize userCreatedAlbum=_userCreatedAlbum;
@property BOOL dupCheckComplete; // @synthesize dupCheckComplete=_dupCheckComplete;
@property(readonly, nonatomic) BOOL importProgressMode; // @synthesize importProgressMode=_importProgressMode;
@property BOOL showsAllAlreadyImportedAssets; // @synthesize showsAllAlreadyImportedAssets=_showsAllAlreadyImportedAssets;
@property double thumbnailProgress; // @synthesize thumbnailProgress=_thumbnailProgress;
@property unsigned long long completedThumbnailCount; // @synthesize completedThumbnailCount=_completedThumbnailCount;
@property unsigned long long expectedThumbnailCount; // @synthesize expectedThumbnailCount=_expectedThumbnailCount;
@property BOOL active; // @synthesize active=_active;
@property __weak IPXImportBrowserModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (unsigned long long)numberOfSelectedAlreadyImportedAssets;
- (unsigned long long)numberOfSelectedUnimportedAssets;
- (unsigned long long)numberOfSelectedAssets;
- (id)navigationDestination;
- (void)requestViewControllersForNavigationDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)canProvideViewControllersForNavigationDestination:(id)arg1;
- (void)importAssetsViewController:(id)arg1 didAssignMediaSectionToSupplementaryView:(id)arg2 atIndexPath:(id)arg3;
- (void)importAssetsViewControllerSelectionDidChange:(id)arg1;
- (void)importAssetsViewControllerPerformZoomOutAction:(id)arg1;
- (void)importAssetsViewControllerPerformZoomInAction:(id)arg1;
- (void)resourceWillShutdown:(id)arg1;
- (id)selectionProviderCurrentSelection;
- (void)setImportProgressMode:(BOOL)arg1;
- (void)deselectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)toggleAlreadyImportedAssetsExpansionAction:(id)arg1;
- (void)updateAlreadyImportedShowAllLabel;
- (void)presentNewAlbumSheet;
- (void)splitAction:(id)arg1;
- (id)determineImportAlbumAndDestination;
- (void)importAssets:(id)arg1;
- (void)startImportSelected;
- (void)startImport;
- (void)closeImport;
- (void)ejectMedia;
- (void)updateAutoLaunch;
- (void)switchToSource:(id)arg1;
- (void)zoomSliderAction:(id)arg1;
- (void)_importProgress:(id)arg1;
- (void)_importCompleted:(id)arg1;
@property(readonly) NSArray *alreadyImportedAssets;
@property(readonly) NSArray *unimportedAssets;
- (id)zoomSlider;
- (BOOL)needsShowAllButtonInAlreadyImported;
- (id)preferredFirstResponder;
- (void)importSourcesRemoved:(id)arg1;
- (void)importSourcesAdded:(id)arg1;
- (void)importModel:(id)arg1 switchToImportSource:(id)arg2 forced:(BOOL)arg3;
- (void)importModel:(id)arg1 libraryChanged:(id)arg2;
- (void)userHasTrustedHostForDevice:(id)arg1;
- (void)userRequiredToTrustHostForDevice:(id)arg1;
- (void)importCancelAction:(id)arg1;
- (void)importSelectedAction:(id)arg1;
- (void)importAllItemsAction:(id)arg1;
- (void)updateControls;
- (void)_buildControls;
- (void)_importSourceChanged:(id)arg1;
- (void)_setupNavigationItem;
- (void)viewDidLoad;
- (void)_switchToSource:(id)arg1 forced:(BOOL)arg2;
- (void)removeUserTrustRequiredAlert;
- (void)showUserTrustRequiredAlertForDevice:(id)arg1;
- (id)titleForSection:(BOOL)arg1;
- (void)_updateControls;
- (unsigned long long)itemsTypeForSection:(BOOL)arg1;
- (void)_showPlaceholderView:(BOOL)arg1;
- (void)prepareForTransitioningViewOutWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)loadView;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

