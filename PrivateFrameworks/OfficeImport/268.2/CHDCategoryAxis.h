//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/CHDAxis.h>

@interface CHDCategoryAxis : CHDAxis
{
    _Bool mAutomatic;
    _Bool mNoMultipleLevelLabel;
    int mLabelAlignment;
    long long mLabelFrequency;
    _Bool mLabelFrequencyAutomatic;
    _Bool mShowSeriesNames;
}

- (_Bool)isLabelFrequencyAutomatic;
- (_Bool)showSeriesLabels;
- (void)setShowSeriesLabels:(_Bool)arg1;
- (void)setLabelFrequency:(long long)arg1;
- (long long)labelFrequency;
- (void)adjustAxisPositionForHorizontalChart;
- (void)setLabelAlignment:(int)arg1;
- (int)labelAlignment;
- (void)setNoMultipleLevelLabel:(_Bool)arg1;
- (_Bool)isNoMultipleLabellevel;
- (void)setAutomatic:(_Bool)arg1;
- (_Bool)isAutomatic;
- (id)initWithResources:(id)arg1;

@end

