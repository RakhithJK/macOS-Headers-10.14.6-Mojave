//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKMapServiceSearchFieldPlaceholderTicket-Protocol.h>

@class GEOMapServiceTraits, NSString;
@protocol GEOMapServiceSearchFieldPlaceholderTicket;

__attribute__((visibility("hidden")))
@interface _MKSearchFieldPlaceholderTicket : NSObject <MKMapServiceSearchFieldPlaceholderTicket>
{
    id <GEOMapServiceSearchFieldPlaceholderTicket> _ticket;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (id)initWithTicket:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

