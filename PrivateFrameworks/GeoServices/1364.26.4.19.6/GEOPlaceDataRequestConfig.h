//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/GEOServiceRequestDefaultConfig.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig
{
    double _timeout;
    unsigned long long _urlType;
    NSNumber *_requestPriority;
}

- (void).cxx_destruct;
- (double)timeout;
- (unsigned char)requestCounterInfoTypeForRequest:(id)arg1;
- (int)dataRequestKindForRequest:(id)arg1;
- (int)experimentDispatcherRequestTypeForRequest:(id)arg1;
- (long long)experimentType;
- (id)serviceTypeNumber;
- (BOOL)shouldThrottleRequests;
- (unsigned long long)urlType;
- (id)additionalHTTPHeaders;
- (id)initWithTimeout:(double)arg1 request:(id)arg2 traits:(id)arg3;

@end

