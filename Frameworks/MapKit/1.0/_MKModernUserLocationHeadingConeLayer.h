//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKUserLocationHeadingConeLayer.h>

__attribute__((visibility("hidden")))
@interface _MKModernUserLocationHeadingConeLayer : MKUserLocationHeadingConeLayer
{
}

- (void)_updateShowHeadingForAccuracy:(double)arg1;
- (void)_updateHeadingMaskForAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (BOOL)_shouldShowHeadingForAccuracy:(double)arg1;
- (unsigned long long)_keyframeIndexForAccuracy:(double)arg1;
- (struct CGRect)_normalizedHeadingMaskRectForIndex:(unsigned long long)arg1;
- (void)_createMaskLayer;
- (id)_headingImage:(struct CGPoint *)arg1;
- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (id)initWithUserLocationView:(id)arg1;

@end

