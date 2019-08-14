//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PVMediaContainerBase.h"

@class NSDictionary, NSMutableArray;

@interface PVImageContainer : PVMediaContainerBase
{
    NSDictionary *_imageOptions;
    unsigned long long _imageCount;
    NSMutableArray *_elements;
    BOOL _elementsInsertedOrRemoved;
    NSDictionary *__gifFirstImageProperties;
}

+ (BOOL)containerTypeSupportsSubFiles:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSDictionary *_gifFirstImageProperties; // @synthesize _gifFirstImageProperties=__gifFirstImageProperties;
@property BOOL elementsInsertedOrRemoved; // @synthesize elementsInsertedOrRemoved=_elementsInsertedOrRemoved;
- (void).cxx_destruct;
- (struct CGRect)pdfBoundsForElement:(id)arg1 applyEXIFOrientation:(BOOL)arg2;
- (BOOL)maintainsInvariantSource;
- (void)removeObjectFromElementsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inElementsAtIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfElement:(id)arg1;
- (id)elementAtIndex:(unsigned long long)arg1;
- (id)elements;
- (id)aggregateKeywords;
- (unsigned long long)elementCount;
- (struct CGImageSource *)source;
- (id)imageOptions;
- (id)documentAttributes;
- (id)fileAttributes;
- (BOOL)_validateImageSourceAtURL:(id)arg1 imageType:(id *)arg2 imageCount:(unsigned long long *)arg3 andReturnError:(id *)arg4;
- (BOOL)validateSource:(id *)arg1;
- (void)setInvariantURL:(id)arg1;
- (void)releaseAnnotationController;
- (void)ensureAnnotationControllerExists;
- (struct CGSize)_gifDPI;
- (unsigned long long)_gifEXIFOrientation;
- (struct CGSize)_gifImageSize;
- (id)_loadGIFFirstImageProperties;
- (id)bookmarks;
- (void)cancelWriting;
- (BOOL)canCancelWriting;
- (BOOL)writePDFToURL:(id)arg1 withOptions:(id)arg2 delegate:(id)arg3;
- (BOOL)writeElementsAtIndexes:(id)arg1 asImageType:(id)arg2 toURL:(id)arg3 withOptions:(id)arg4 delegate:(id)arg5;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 withOptions:(id)arg3 delegate:(id)arg4;
- (id)bestTypeForWriting;
- (BOOL)currentFormatCanWriteAlpha;
- (id)defaultSaveAsProperties;
- (BOOL)isBlankContainer;
- (BOOL)isContentLoadingContainer;
- (BOOL)isQuickLookContainer;
- (BOOL)isC3DContainer;
- (BOOL)isRAWImage;
- (BOOL)isImageContainer;
- (BOOL)isPDFContainer;
- (void)moveToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithURL:(id)arg1 ofType:(id)arg2 windowController:(id)arg3 options:(id)arg4 validate:(BOOL)arg5 error:(id *)arg6;

@end

