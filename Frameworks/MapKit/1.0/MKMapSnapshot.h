//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage, VKMapSnapshot;

@interface MKMapSnapshot : NSObject
{
    VKMapSnapshot *_snapshot;
    UIImage *_image;
}

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (BOOL)_hasNoDataPlaceholders;
- (struct CLLocationCoordinate2D)_coordinateForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)_initWithSnapshot:(id)arg1 desiredScale:(double)arg2;
- (void)_prepareForRenderWithAnnotationViews:(id)arg1;
- (id)snapshotWithAnnotationView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(struct CLLocationCoordinate2D)arg2;

@end

