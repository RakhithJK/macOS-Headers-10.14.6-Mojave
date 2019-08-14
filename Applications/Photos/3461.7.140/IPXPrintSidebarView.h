//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSCollectionViewDataSource-Protocol.h"
#import "NSCollectionViewDelegate-Protocol.h"

@class IPXPrintContactSheetView, IPXPrintCustomSizeView, IPXPrintPreviewView, IPXPrintViewController, IPXPrinter, IPXPrinterPaperSelectionView, IPXPrinterPreset, NSBox, NSCollectionView, NSLayoutConstraint, NSMutableArray, NSScrollView, NSString, NSTabView;

@interface IPXPrintSidebarView : NSView <NSCollectionViewDataSource, NSCollectionViewDelegate>
{
    IPXPrinterPaperSelectionView *_printerPaperSelectionView;
    IPXPrintCustomSizeView *_printCustomSizeView;
    IPXPrintContactSheetView *_printContactSheetView;
    NSTabView *_tabView;
    NSView *_backgroundGradientView;
    NSScrollView *_printPresetGridScroller;
    NSCollectionView *_printPresetGrid;
    NSBox *_verticalLeftLine;
    IPXPrintPreviewView *_previewViewFit;
    IPXPrintPreviewView *_previewViewFill;
    IPXPrintPreviewView *_previewViewCustom;
    IPXPrintPreviewView *_previewViewL;
    IPXPrintPreviewView *_previewViewM;
    IPXPrintPreviewView *_previewViewS;
    IPXPrintPreviewView *_previewViewContactSheet;
    NSMutableArray *_previewViews;
    unsigned long long _printPreset;
    IPXPrinter *_printer;
    IPXPrinterPreset *_printerPreset;
    struct OpaquePMPaper *_paper;
    double _regularTabViewHeight;
    NSLayoutConstraint *_scrollViewBottomConstraint;
    IPXPrintViewController *_printViewController;
}

@property(readonly) NSCollectionView *printPresetGrid; // @synthesize printPresetGrid=_printPresetGrid;
@property __weak IPXPrintViewController *printViewController; // @synthesize printViewController=_printViewController;
- (void).cxx_destruct;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (void)setPhotoVersions:(id)arg1;
- (void)updateForPrintPreset;
@property unsigned long long printPreset;
@property(retain) IPXPrinterPreset *printerPreset;
@property(retain) IPXPrinter *printer;
@property struct OpaquePMPaper *paper;
- (void)printPresetChanged:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

