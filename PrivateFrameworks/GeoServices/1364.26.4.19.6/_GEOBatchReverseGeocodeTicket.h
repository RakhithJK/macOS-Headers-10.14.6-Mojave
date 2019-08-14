//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class GEOBatchRevGeocodeRequest;

__attribute__((visibility("hidden")))
@interface _GEOBatchReverseGeocodeTicket : GEOAbstractMapServiceTicket
{
    GEOBatchRevGeocodeRequest *_batchReverseGeocodeRequest;
    BOOL _shiftLocationsIfNeeded;
}

- (void).cxx_destruct;
- (BOOL)isEqualForHistoryToTicket:(id)arg1;
- (void)_batchReverseGeocodeWithRequest:(id)arg1 auditToken:(id)arg2 handler:(CDUnknownBlockType)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (void)cancel;
- (id)description;
- (id)initWithBatchReverseGeocodeRequest:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3;

@end

