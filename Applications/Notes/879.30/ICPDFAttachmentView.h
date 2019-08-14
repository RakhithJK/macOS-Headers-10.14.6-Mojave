//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICAttachmentView.h"

@class ICSelectorDelayer, NSImage, NSOperation, NSProgressIndicator;

@interface ICPDFAttachmentView : ICAttachmentView
{
    struct CGPDFDocument *_pdf;
    struct CGPDFPage *_page;
    BOOL _isManaullyGeneratingImage;
    BOOL _rendering;
    NSOperation *_renderOperation;
    NSProgressIndicator *_progressView;
    ICSelectorDelayer *_startProgressSelectorDelayer;
    struct NSImage *_image;
}

+ (id)renderingQueue;
@property(nonatomic, getter=isRendering) BOOL rendering; // @synthesize rendering=_rendering;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) BOOL isManaullyGeneratingImage; // @synthesize isManaullyGeneratingImage=_isManaullyGeneratingImage;
@property(retain) ICSelectorDelayer *startProgressSelectorDelayer; // @synthesize startProgressSelectorDelayer=_startProgressSelectorDelayer;
@property(retain, nonatomic) NSProgressIndicator *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak NSOperation *renderOperation; // @synthesize renderOperation=_renderOperation;
- (void).cxx_destruct;
- (void)stopProgress;
- (void)startProgress;
- (BOOL)cancelRenderingIfPossible;
- (void)setupBorderForLayer:(id)arg1;
- (void)updateLayerContentsWithFade:(BOOL)arg1;
- (void)startImageRenderIfNeeded;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToWindow;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)didScrollIntoVisibleRange;
- (BOOL)cancelDidScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)didChangeMedia;
- (void)setAttachment:(id)arg1;
@property(readonly, nonatomic) struct CGPDFPage *page;
- (void)prepareForPrinting;
- (void)cleanupPDFDocument;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andTextAttachment:(id)arg2 forManualRendering:(BOOL)arg3;
- (id)accessibilityHelp;
- (id)icaxTypeDescription;

@end

