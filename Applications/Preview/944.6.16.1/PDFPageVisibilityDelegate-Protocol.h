//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PDFViewDelegate-Protocol.h"

@class NSView, PDFPage, PDFView;

@protocol PDFPageVisibilityDelegate <PDFViewDelegate>

@optional
- (void)pdfView:(PDFView *)arg1 didRemoveView:(NSView *)arg2 forPage:(PDFPage *)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(PDFView *)arg1 willRemoveView:(NSView *)arg2 forPage:(PDFPage *)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(PDFView *)arg1 didAddView:(NSView *)arg2 forPage:(PDFPage *)arg3 atIndex:(unsigned long long)arg4;
- (void)pdfView:(PDFView *)arg1 willAddView:(NSView *)arg2 forPage:(PDFPage *)arg3 atIndex:(unsigned long long)arg4;
@end

