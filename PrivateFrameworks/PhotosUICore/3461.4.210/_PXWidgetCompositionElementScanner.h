//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/_PXWidgetCompositionRow-Protocol.h>

@class NSArray;

@interface _PXWidgetCompositionElementScanner : NSObject <_PXWidgetCompositionRow>
{
    long long _scanLocation;
    struct _NSRange _scannedRowRange;
    NSArray *_elements;
    CDUnknownBlockType _wantsEdgeToEdgeLayoutBlock;
    double _referenceWidth;
    double _interColumnSpacing;
    long long _maximumNumberOfColumns;
}

@property(nonatomic) long long maximumNumberOfColumns; // @synthesize maximumNumberOfColumns=_maximumNumberOfColumns;
@property(nonatomic) double interColumnSpacing; // @synthesize interColumnSpacing=_interColumnSpacing;
@property(nonatomic) double referenceWidth; // @synthesize referenceWidth=_referenceWidth;
@property(copy, nonatomic) CDUnknownBlockType wantsEdgeToEdgeLayoutBlock; // @synthesize wantsEdgeToEdgeLayoutBlock=_wantsEdgeToEdgeLayoutBlock;
@property(copy, nonatomic) NSArray *elements; // @synthesize elements=_elements;
- (void).cxx_destruct;
- (void)enumerateElementsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long numberOfColumns;
- (BOOL)_wantsEdgeToEdgeLayoutForElement:(id)arg1;
- (BOOL)scanRow:(out id *)arg1;
@property(readonly, nonatomic, getter=isAtEnd) BOOL atEnd;

@end

