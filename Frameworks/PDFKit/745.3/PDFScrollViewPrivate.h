//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PDFDocument, PDFDocumentView, PDFTimer, PDFView;

__attribute__((visibility("hidden")))
@interface PDFScrollViewPrivate : NSObject
{
    PDFView *pdfView;
    PDFDocument *document;
    PDFDocumentView *documentView;
    double oldMagnification;
    PDFTimer *boundsUpdateTimer;
    struct CGRect oldBounds;
    _Bool isZooming;
    _Bool scheduledPageSync;
    NSDate *pageSyncDate;
    _Bool forcesTopAlignment;
}

- (void).cxx_destruct;

@end

