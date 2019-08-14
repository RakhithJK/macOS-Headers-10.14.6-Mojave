//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PDFKit/UIScrollViewDelegate-Protocol.h>

@class NSString, PDFPageViewControllerPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageViewController : UIViewController <UIScrollViewDelegate>
{
    PDFPageViewControllerPrivate *_private;
}

- (void).cxx_destruct;
- (void)_centerAlign;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)_updateAnnotations;
- (void)_removePDFView;
- (void)_buildPDFPageView;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)removeAKOverlay;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2;
- (double)autoScaleFactor;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (void)setMinScaleFactor:(double)arg1 withMaxScaleFactor:(double)arg2;
- (void)enforceAutoScaleFactor;
- (void)setAutoScales:(BOOL)arg1;
- (id)scrollView;
- (id)pageView;
- (id)PDFPage;
- (void)setPDFPage:(id)arg1;
- (void)setPageBreakMargins:(struct UIEdgeInsets)arg1;
- (void)setPDFView:(id)arg1;
- (void)setRenderingProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

