//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXAnalyticsReporting-Protocol.h>

@class NSString;
@protocol SXAnalyticsReporting;

@interface SXAnalyticsReporterProxy : NSObject <SXAnalyticsReporting>
{
    id <SXAnalyticsReporting> _analyticsReporter;
}

@property(readonly, nonatomic) __weak id <SXAnalyticsReporting> analyticsReporter; // @synthesize analyticsReporter=_analyticsReporter;
- (void).cxx_destruct;
- (void)reportEvent:(id)arg1;
- (id)initWithAnalyticsReporter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

