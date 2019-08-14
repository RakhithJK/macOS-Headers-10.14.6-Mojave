//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKTransitLineMarker-Protocol.h>

@class NSString;
@protocol GEOTransitLine;

@interface _GEOTransitLineMarker : NSObject <MKTransitLineMarker>
{
    id <GEOTransitLine> _line;
    struct CLLocationCoordinate2D _locationHint;
}

- (void).cxx_destruct;
- (id)artwork;
- (id)labelText;
- (id)mapItemIdentifier;
- (id)initWithGEOTransitLine:(id)arg1 locationHint:(struct CLLocationCoordinate2D)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

