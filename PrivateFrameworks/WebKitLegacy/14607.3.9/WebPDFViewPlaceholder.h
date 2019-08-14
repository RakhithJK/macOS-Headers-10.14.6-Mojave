//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebCore/WAKView.h>

#import <WebKitLegacy/WebPDFDocumentRepresentation-Protocol.h>
#import <WebKitLegacy/WebPDFDocumentView-Protocol.h>

@class NSArray, NSObject, NSString, WebDataSource;
@protocol WebPDFViewPlaceholderDelegate;

@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation>
{
    NSString *_title;
    NSArray *_pageRects;
    NSArray *_pageYOrigins;
    struct CGPDFDocument *_document;
    WebDataSource *_dataSource;
    NSObject<WebPDFViewPlaceholderDelegate> *_delegate;
    BOOL _didFinishLoad;
    struct CGSize _containerSize;
    BOOL _didCompleteLayout;
}

+ (id)supportedMIMETypes;
+ (Class)_representationClassForWebFrame:(id)arg1;
+ (void)setAsPDFDocRepAndView;
@property(readonly, nonatomic) BOOL didCompleteLayout; // @synthesize didCompleteLayout=_didCompleteLayout;
@property struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSArray *pageYOrigins; // @synthesize pageYOrigins=_pageYOrigins;
@property(retain) NSArray *pageRects; // @synthesize pageRects=_pageRects;
@property NSObject<WebPDFViewPlaceholderDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)simulateClickOnLinkToURL:(id)arg1;
- (struct CGRect)rectForPageNumber:(unsigned long long)arg1;
- (void)didUnlockDocument;
- (struct CGSize)_computePageRects:(struct CGPDFDocument *)arg1;
- (struct CGRect)_getPDFPageBounds:(struct CGPDFPage *)arg1;
- (void)_updateTitleForDocumentIfAvailable;
- (void)_updateTitleForURL:(id)arg1;
- (void)_evaluateJSForDocument:(struct CGPDFDocument *)arg1;
- (id)documentSource;
- (BOOL)canProvideDocumentSource;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)_doPostLoadOrUnlockTasks;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)layout;
- (void)dataSourceUpdated:(id)arg1;
- (void)_notifyDidCompleteLayout;
- (void)setDataSource:(id)arg1;
- (void)dealloc;
@property(readonly) unsigned long long totalPages;
@property(readonly) struct CGPDFDocument *doc;
- (void)clearDocument;
- (void)setDocument:(struct CGPDFDocument *)arg1;
@property(readonly) struct CGPDFDocument *document; // @synthesize document=_document;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

