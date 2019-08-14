//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PXWidgetBarSpec, PXWidgetSpec;

@interface PXWidgetCompositionSpec : NSObject
{
    PXWidgetSpec *_widgetSpec;
    long long _maximumNumberOfColumns;
    PXWidgetBarSpec *_footerSpec;
    long long _disclosureLocation;
    PXWidgetBarSpec *__defaultHeaderSpec;
    PXWidgetBarSpec *__headerSpecForFlushedContent;
}

@property(readonly, nonatomic) PXWidgetBarSpec *_headerSpecForFlushedContent; // @synthesize _headerSpecForFlushedContent=__headerSpecForFlushedContent;
@property(readonly, nonatomic) PXWidgetBarSpec *_defaultHeaderSpec; // @synthesize _defaultHeaderSpec=__defaultHeaderSpec;
@property(readonly, nonatomic) long long disclosureLocation; // @synthesize disclosureLocation=_disclosureLocation;
@property(readonly, nonatomic) PXWidgetBarSpec *footerSpec; // @synthesize footerSpec=_footerSpec;
@property(readonly, nonatomic) long long maximumNumberOfColumns; // @synthesize maximumNumberOfColumns=_maximumNumberOfColumns;
@property(readonly, nonatomic) PXWidgetSpec *widgetSpec; // @synthesize widgetSpec=_widgetSpec;
- (void).cxx_destruct;
- (id)headerSpecForWidgetContentLayoutStyle:(long long)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 widgetSpec:(id)arg2;
- (id)init;

@end

