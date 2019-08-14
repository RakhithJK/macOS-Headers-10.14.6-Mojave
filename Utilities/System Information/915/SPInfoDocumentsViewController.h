//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SPInfoViewController.h"

#import "NSMetadataQueryDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"
#import "QLPreviewPanelDataSource-Protocol.h"
#import "QLPreviewPanelDelegate-Protocol.h"
#import "SPInfoCollectionControllerDelegate-Protocol.h"
#import "_FIBrowseBySizeViewDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSMetadataQuery, NSString, NSTabView, NSTableView, NSTouchBar, NSURL, SPInfoCollectionController, STMDirectoryObserver, _FIBrowseBySizeView;

@interface SPInfoDocumentsViewController : SPInfoViewController <NSMetadataQueryDelegate, NSTableViewDataSource, NSTableViewDelegate, QLPreviewPanelDataSource, QLPreviewPanelDelegate, SPInfoCollectionControllerDelegate, NSTouchBarDelegate, _FIBrowseBySizeViewDelegate>
{
    NSTableView *_largeFilesTableView;
    NSTableView *_downloadsTableView;
    _FIBrowseBySizeView *_browserView;
    NSTabView *_tabView;
    SPInfoCollectionController *_largeFilesCollectionController;
    SPInfoCollectionController *_downloadsCollectionController;
    NSArray *_downloads;
    NSArray *_downloadsSortDescriptors;
    NSMetadataQuery *_largeFilesQuery;
    NSURL *_largeFilesPathControlURL;
    NSURL *_downloadsPathControlURL;
    NSArray *_largeFilesSelectedURLs;
    NSArray *_downloadsSelectedURLs;
    NSArray *_browserSelectedURLs;
    long long _selectedTabIndex;
    STMDirectoryObserver *_downloadsDirectoryObserver;
    NSTouchBar *_tbar;
}

+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingAttributedTitle;
+ (void)load;
@property(retain) NSTouchBar *tbar; // @synthesize tbar=_tbar;
@property(retain) STMDirectoryObserver *downloadsDirectoryObserver; // @synthesize downloadsDirectoryObserver=_downloadsDirectoryObserver;
@property long long selectedTabIndex; // @synthesize selectedTabIndex=_selectedTabIndex;
@property(retain) NSArray *browserSelectedURLs; // @synthesize browserSelectedURLs=_browserSelectedURLs;
@property(retain) NSArray *downloadsSelectedURLs; // @synthesize downloadsSelectedURLs=_downloadsSelectedURLs;
@property(retain) NSArray *largeFilesSelectedURLs; // @synthesize largeFilesSelectedURLs=_largeFilesSelectedURLs;
@property(retain) NSURL *downloadsPathControlURL; // @synthesize downloadsPathControlURL=_downloadsPathControlURL;
@property(retain) NSURL *largeFilesPathControlURL; // @synthesize largeFilesPathControlURL=_largeFilesPathControlURL;
@property(retain) NSMetadataQuery *largeFilesQuery; // @synthesize largeFilesQuery=_largeFilesQuery;
@property(copy) NSArray *downloadsSortDescriptors; // @synthesize downloadsSortDescriptors=_downloadsSortDescriptors;
@property(copy) NSArray *downloads; // @synthesize downloads=_downloads;
@property(retain) SPInfoCollectionController *downloadsCollectionController; // @synthesize downloadsCollectionController=_downloadsCollectionController;
@property(retain) SPInfoCollectionController *largeFilesCollectionController; // @synthesize largeFilesCollectionController=_largeFilesCollectionController;
@property NSTabView *tabView; // @synthesize tabView=_tabView;
@property _FIBrowseBySizeView *browserView; // @synthesize browserView=_browserView;
@property NSTableView *downloadsTableView; // @synthesize downloadsTableView=_downloadsTableView;
@property NSTableView *largeFilesTableView; // @synthesize largeFilesTableView=_largeFilesTableView;
- (void)buttonPressed:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)subTouchBar;
- (id)URLOfCommonAncestorOfDocuments:(id)arg1;
- (id)tableViewForCollectionController:(id)arg1;
@property(readonly, copy, nonatomic) NSString *subtitle;
- (void)setLargeFiles;
- (void)presentDeletionConfirmationForDocuments:(id)arg1 collectionController:(id)arg2;
- (void)rearrangeDownloads;
@property(readonly, retain, nonatomic) NSTableView *mainTableView;
@property(readonly, retain, nonatomic) SPInfoCollectionController *mainCollectionController;
- (void)enqueueGetDownloadsDirectoryContentsOperation;
- (void)refreshDownloads;
- (void)_refreshDownloads:(id)arg1;
- (id)collectionControllerForTableView:(id)arg1;
@property(readonly, copy, nonatomic) NSAttributedString *attributedTitle;
- (void)queryDidUpdate:(id)arg1;
- (void)refreshLargeFiles;
- (void)_refreshLargeFiles:(id)arg1;
- (void)collectionControllerDidArrangeObjects:(id)arg1;
- (void)collectionController:(id)arg1 didArrangeObject:(id)arg2 oldIndex:(unsigned long long)arg3 newIndex:(unsigned long long)arg4;
- (void)collectionControllerWillArrangeObjects:(id)arg1;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (BOOL)previewPanel:(id)arg1 handleEvent:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)tableView:(id)arg1 mouseDownInHeaderOfTableColumn:(id)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (void)tableView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)quickLookPreviewItems:(id)arg1;
- (void)viewDidLoad;
- (void)trashBrowserFiles:(id)arg1;
- (void)showBrowserFiles:(id)arg1;
- (void)deleteDownloadFiles:(id)arg1;
- (void)showDownloadFiles:(id)arg1;
- (void)deleteLargeFiles:(id)arg1;
- (void)showLargeFiles:(id)arg1;
- (void)showPathControlURLWithSender:(id)arg1;
- (void)openDocumentWithSender:(id)arg1;
- (void)delete:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
