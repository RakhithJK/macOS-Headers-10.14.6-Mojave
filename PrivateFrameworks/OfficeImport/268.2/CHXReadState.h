//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CHDChart, CHDChartType, CHDSeries, EDResources, EXOfficeArtState, OADParagraphProperties, OCPPackagePart;
@protocol CHAutoStyling;

@interface CHXReadState : NSObject
{
    EXOfficeArtState *mDrawingState;
    CHDChart *mChart;
    EDResources *mResources;
    OCPPackagePart *mChartPart;
    CHDChartType *mCurrentChartType;
    CHDSeries *mCurrentSeries;
    OADParagraphProperties *mDefaultTextProperties;
    BOOL mDefaultTextPropertiesHaveExplicitFontSize;
    id <CHAutoStyling> mAutoStyling;
    BOOL mIgnoreFormulas;
}

@property(nonatomic) BOOL ignoreFormulas; // @synthesize ignoreFormulas=mIgnoreFormulas;
- (void).cxx_destruct;
- (id)autoStyling;
- (void)popDefaultTextProperties;
- (void)pushDefaultTextProperties:(id)arg1;
- (void)popTitleTextProperties;
- (void)pushTitleTextProperties:(BOOL)arg1;
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(BOOL)arg1;
- (void)setDefaultTextProperties:(id)arg1;
- (id)defaultTextProperties;
- (id)exState;
- (void)setCurrentSeries:(id)arg1;
- (id)currentSeries;
- (void)setCurrentChartType:(id)arg1;
- (id)currentChartType;
- (void)setChartPart:(id)arg1;
- (id)chartPart;
- (void)setResources:(id)arg1;
- (id)resources;
- (void)setChart:(id)arg1;
- (id)chart;
- (id)drawingState;
- (id)initWithDrawingState:(id)arg1;

@end

