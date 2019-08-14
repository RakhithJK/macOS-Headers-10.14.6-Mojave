//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class IPXPrintPageView, IPXPrintViewController, IPXSelectionView, NSTextField, NSView;

@interface IPXPrintPreviewView : NSCollectionViewItem
{
    IPXPrintPageView *_pageSubview;
    IPXSelectionView *_selectionView;
    NSTextField *_itemLabel;
    NSView *_contentView;
    NSView *_itemView;
    struct OpaquePMPaper *_paper;
    IPXPrintViewController *_printViewController;
}

+ (double)referenceHeight;
@property(readonly) IPXPrintViewController *printViewController; // @synthesize printViewController=_printViewController;
- (void).cxx_destruct;
- (void)setAccessibilitySelected:(BOOL)arg1;
- (void)renderSettingsChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)label;
- (struct CGRect)selectionRect;
- (void)generatePreviewSubviews;
- (void)setPhotoVersions:(id)arg1;
- (void)finishInit;
@property(nonatomic) struct OpaquePMPaper *paper;
- (void)setPreviewType:(unsigned long long)arg1;
@property(readonly) unsigned long long previewType;
- (void)setSelected:(BOOL)arg1;
- (void)loadView;
- (void)_updateItemLabelColor;
- (void)dealloc;
- (id)initWithPreviewType:(unsigned long long)arg1 printViewController:(id)arg2;

@end

