//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/GEOServiceRequestDefaultConfig.h>

__attribute__((visibility("hidden")))
@interface GEOSpatialLookupRequestConfig : GEOServiceRequestDefaultConfig
{
    double _timeout;
}

- (int)dataRequestKindForRequest:(id)arg1;
- (unsigned char)requestCounterInfoTypeForRequest:(id)arg1;
- (unsigned long long)urlType;
- (id)initWithTimeout:(double)arg1;

@end

