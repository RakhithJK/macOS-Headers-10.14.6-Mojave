//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem
{
    NSMutableSet *_supportedReports;
}

+ (id)copyParseRules;
@property(retain, nonatomic) NSMutableSet *supportedReports; // @synthesize supportedReports=_supportedReports;
- (void).cxx_destruct;
- (BOOL)supportsReportWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)addSupportedReport:(id)arg1;
- (id)description;
- (id)init;

@end

