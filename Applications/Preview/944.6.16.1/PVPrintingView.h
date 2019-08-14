//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSMutableArray;
@protocol PVPrintingViewDelegate;

@interface PVPrintingView : NSView
{
    id <PVPrintingViewDelegate> _delegate;
    NSArray *_containers;
    NSArray *_selectedElements;
    NSMutableArray *_pageInfos;
    BOOL _printSelectionOnly;
    BOOL _doScaleToFit;
    BOOL _doAutoRotate;
    long long _scaleToFitMode;
    double _userScale;
    BOOL _showNotes;
    BOOL _nUpMakeNCopies;
    long long _nUpN;
    long long _pageToPrint;
    struct CGRect _imageablePageBounds;
    struct CGSize _paperSize;
    unsigned long long _numRows;
    unsigned long long _numCols;
}

@property __weak id <PVPrintingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGPoint)convertFromViewToPage:(struct CGPoint)arg1 withContext:(struct CGContext *)arg2 andTransform:(struct CGAffineTransform)arg3;
- (struct CGPoint)convertFromPageToView:(struct CGPoint)arg1 withContext:(struct CGContext *)arg2 andTransform:(struct CGAffineTransform)arg3;
- (void)drawLineFromPopup:(id)arg1 ofPageModelController:(id)arg2 ofController:(id)arg3 withGutterBounds:(struct CGRect)arg4 andContext:(struct CGContext *)arg5 andTransform:(struct CGAffineTransform)arg6;
- (struct _NSRange)textRangeFittingInPopup:(id)arg1 withFont:(id)arg2 withGutterBounds:(struct CGRect)arg3;
- (void)drawPopupsForElement:(id)arg1 inContext:(struct CGContext *)arg2 gutterBounds:(struct CGRect)arg3 pageBounds:(struct CGRect)arg4 pageTransform:(struct CGAffineTransform)arg5;
- (struct CGRect)gutterBoundsForPage:(id)arg1;
- (id)popupLengthsForPage:(id)arg1;
- (id)popupFont;
- (void)drawImageElement:(id)arg1 viewRect:(struct CGRect)arg2 row:(long long)arg3 col:(long long)arg4;
- (id)imagesForPageIndex:(long long)arg1;
- (id)flattenedImageList;
- (void)internPrintInfoSettings:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)rectForPage:(long long)arg1;
- (id)annotationsInHeightOrder:(id)arg1;
- (unsigned long long)initCopiesForElement:(id)arg1;
- (struct CGPoint)locationOfPrintRect:(struct CGRect)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (BOOL)isFlipped;
- (id)printJobTitle;
- (id)initWithContainers:(id)arg1 selectedElements:(id)arg2;

@end

