//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "ICMAttachmentBrowserCollectionViewDelegate-Protocol.h"
#import "NSCollectionViewDataSource-Protocol.h"
#import "NSCollectionViewDelegate-Protocol.h"
#import "QLPreviewPanelDataSource-Protocol.h"
#import "QLPreviewPanelDelegate-Protocol.h"
#import "QLSeamlessOpenerDelegate-Protocol.h"

@class ICMAttachmentBrowserCollectionView, ICMSharingMenuController, ICSelectorDelayer, NSArray, NSArrayController, NSMenu, NSMenuItem, NSPredicate, NSString;

@interface ICMAttachmentBrowserCommonController : NSViewController <NSCollectionViewDataSource, NSCollectionViewDelegate, QLPreviewPanelDataSource, QLPreviewPanelDelegate, QLSeamlessOpenerDelegate, ICMAttachmentBrowserCollectionViewDelegate>
{
    BOOL _isPerformingQuicklook;
    BOOL _forceFilePromisesForAttachments;
    short _section;
    NSArrayController *_arrayController;
    ICMAttachmentBrowserCollectionView *_collectionView;
    ICMSharingMenuController *_sharingMenuController;
    NSMenu *_contextualMenu;
    NSMenuItem *_showInNoteMenuItem;
    ICSelectorDelayer *_fetchDelayer;
    NSArray *_quickLookItems;
    NSArray *_previousArrangedObjects;
}

@property(retain, nonatomic) NSArray *previousArrangedObjects; // @synthesize previousArrangedObjects=_previousArrangedObjects;
@property(nonatomic) BOOL forceFilePromisesForAttachments; // @synthesize forceFilePromisesForAttachments=_forceFilePromisesForAttachments;
@property(retain, nonatomic) NSArray *quickLookItems; // @synthesize quickLookItems=_quickLookItems;
@property(retain, nonatomic) ICSelectorDelayer *fetchDelayer; // @synthesize fetchDelayer=_fetchDelayer;
@property(nonatomic) __weak NSMenuItem *showInNoteMenuItem; // @synthesize showInNoteMenuItem=_showInNoteMenuItem;
@property(retain, nonatomic) NSMenu *contextualMenu; // @synthesize contextualMenu=_contextualMenu;
@property(nonatomic) BOOL isPerformingQuicklook; // @synthesize isPerformingQuicklook=_isPerformingQuicklook;
@property(nonatomic) short section; // @synthesize section=_section;
@property(retain, nonatomic) ICMSharingMenuController *sharingMenuController; // @synthesize sharingMenuController=_sharingMenuController;
@property(nonatomic) __weak ICMAttachmentBrowserCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
- (void).cxx_destruct;
- (id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (void)generateQuicklookItems;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)attachmentWasDeleted:(id)arg1;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didDeselectItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (BOOL)collectionView:(id)arg1 acceptDrop:(id)arg2 index:(long long)arg3 dropOperation:(long long)arg4;
- (unsigned long long)collectionView:(id)arg1 validateDrop:(id)arg2 proposedIndex:(long long *)arg3 dropOperation:(long long *)arg4;
- (void)writeICPasteboardDataForIndexPaths:(id)arg1 toPasteboard:(id)arg2;
- (id)collectionView:(id)arg1 pasteboardWriterForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItemsAtIndexPaths:(id)arg4;
- (void)collectionViewWillBeginDrag:(id)arg1;
- (void)reloadCollectionViewRestoringSelectionIfNecessary;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didMergeChangesFromContextDidSaveNotification:(id)arg1;
- (void)notesContextRefreshNotification:(id)arg1;
@property(readonly, nonatomic) NSPredicate *fetchPredicate;
- (void)copy:(id)arg1;
- (void)showInNoteForAttachment:(id)arg1;
- (void)showInNote:(id)arg1;
- (void)renameAttachment:(id)arg1;
@property(readonly, nonatomic) BOOL canRenameAttachment;
- (void)saveAttachments:(id)arg1 toFolderURL:(id)arg2;
- (void)saveAttachment:(id)arg1 toURL:(id)arg2;
- (void)showStandardSavePanelForAttachments:(id)arg1;
- (void)showSavePanelForImageGalleryAttachment:(id)arg1;
- (void)saveAttachments:(id)arg1;
- (void)quickLookAttachments:(id)arg1;
- (void)openScannedDocumentAttachments:(id)arg1;
- (void)openGalleryAttachmentsFromAttachments:(id)arg1;
- (void)openAttachmentsInQLOpener:(id)arg1;
- (void)openAttachments:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)contextualMenuForItem:(id)arg1;
- (void)quickLookAttachments;
- (void)showAttachments;
- (id)newLayout;
- (BOOL)isSingleAttachmentSelected;
@property(readonly, nonatomic) BOOL selectionContainsRequiredFilePromisesForDrag;
@property(readonly, nonatomic) NSArray *selectedAttachments;
- (void)fetchWithDelay;
- (void)fetch;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

