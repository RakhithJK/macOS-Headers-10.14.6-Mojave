//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKAnnotation, PDFAKAnnotationAdaptorPrivate, PDFAnnotation;

__attribute__((visibility("hidden")))
@interface PDFAKAnnotationAdaptor : NSObject
{
    PDFAKAnnotationAdaptorPrivate *_private;
}

+ (id)newPDFAnnotationFromAKAnnotation:(id)arg1;
+ (id)annotationAdaptorWithPDFAnnotation:(id)arg1 andCGPDFAnnotation:(struct CGPDFAnnotation *)arg2 andPDFDictionary:(struct CGPDFDictionary *)arg3;
- (void).cxx_destruct;
- (void)invalidateAppearanceStream;
- (void)didReplaceAllValuesWithNewDictionary:(id)arg1 andOldDictionary:(id)arg2;
- (void)didRemoveValueForAnnotationKey:(id)arg1;
- (void)didSetValue:(id)arg1 forAnnotationKey:(id)arg2;
@property(readonly, nonatomic) AKAnnotation *akAnnotation;
@property(readonly, nonatomic) __weak PDFAnnotation *pdfAnnotation;
- (void)_teardown;
- (void)teardown;
- (void)dealloc;
- (id)initWithPDFAnnotation:(id)arg1 andAKAnnotation:(id)arg2;

@end
