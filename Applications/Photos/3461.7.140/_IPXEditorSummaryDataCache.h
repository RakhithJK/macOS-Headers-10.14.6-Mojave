//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IPXVersionsSummarizer, NSArray, NSDate, NSMutableDictionary, NSString;

@interface _IPXEditorSummaryDataCache : NSObject
{
    NSString *_captionString;
    NSString *_placesString;
    NSDate *_earliestDate;
    NSDate *_latestDate;
    NSMutableDictionary *_datesStringsForDisplayFlags;
    IPXVersionsSummarizer *_summarizer;
    NSArray *_versions;
}

@property(copy, nonatomic) NSArray *versions; // @synthesize versions=_versions;
@property(retain, nonatomic) IPXVersionsSummarizer *summarizer; // @synthesize summarizer=_summarizer;
- (void).cxx_destruct;
- (id)datesStringForDateRangeDisplayFlags:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSDate *latestDate;
@property(readonly, copy, nonatomic) NSDate *earliestDate;
- (void)_determineDateRangeIfNeeded;
@property(readonly, copy, nonatomic) NSString *placesString;
@property(readonly, copy, nonatomic) NSString *captionString;
- (id)initWithSummarizer:(id)arg1 versions:(id)arg2;

@end

