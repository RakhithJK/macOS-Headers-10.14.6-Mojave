//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKPolyline.h>

@class MKRoutePolyline;

__attribute__((visibility("hidden")))
@interface MKRouteStepPolyline : MKPolyline
{
    MKRoutePolyline *_fullRoute;
}

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D)coordinate;
- (void)dealloc;
- (id)_initWithRoute:(id)arg1 range:(struct _NSRange)arg2;

@end

