//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "APLPropertiesElement.h"

@class NSColor;
@protocol APLDataSourceProtocol;

@interface APLPLayoutElement : APLPropertiesElement
{
    double largeMargin;
    double smallMargin;
    double globalWidth;
    double thinLineWidth;
    double globalLeftMargin;
    NSColor *lineColor;
    NSColor *textColor;
    id <APLDataSourceProtocol> _dataSource;
    BOOL resolved;
}

- (void).cxx_destruct;
- (id)objectForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (id)fontForKey:(id)arg1;
- (id)colorForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (long long)intForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (BOOL)resolveWithDataSource:(id)arg1;
- (id)printColorForCalendarColor:(id)arg1 variant:(int)arg2;
- (id)colorForOccurrence:(id)arg1 variant:(int)arg2;
- (struct CGSize)sizeForAttributedString:(id)arg1;
- (id)attStringWithString:(id)arg1 andFont:(id)arg2 textMode:(int)arg3;
- (id)initWithProperties:(id)arg1;

@end

