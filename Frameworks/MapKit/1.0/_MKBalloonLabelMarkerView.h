//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/_MKLabelMarkerView.h>

#import <MapKit/_MKBalloonCalloutViewConfiguring-Protocol.h>

@class NSString, UIColor, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface _MKBalloonLabelMarkerView : _MKLabelMarkerView <_MKBalloonCalloutViewConfiguring>
{
    UIView *_anchorDotView;
    BOOL _needsToResolveBalloonAttributes;
    long long _balloonCalloutStyle;
    BOOL _balloonCalloutShouldOriginateFromSmallSize;
    UIColor *_balloonFillColor;
    UIColor *_balloonStrokeColor;
    UIImage *_balloonImage;
    UIView *_balloonContentView;
    double _smallBalloonScaleFactor;
}

+ (Class)calloutViewClass;
- (void).cxx_destruct;
- (void)_configureBalloonForDataIconImageKeys:(id)arg1 scale:(double)arg2;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1;
- (void)_addAnchorDotViewIfNeeded;
- (BOOL)shouldShowCallout;
@property(readonly, nonatomic, getter=_balloonContentView) UIView *balloonContentView;
@property(readonly, nonatomic, getter=_balloonImage) UIImage *balloonImage;
@property(readonly, nonatomic, getter=_balloonInnerStrokeColor) UIColor *balloonInnerStrokeColor;
@property(readonly, nonatomic, getter=_balloonStrokeColor) UIColor *balloonStrokeColor;
@property(readonly, nonatomic, getter=_balloonTintColor) UIColor *balloonTintColor;
- (BOOL)_balloonCalloutShouldOriginateFromSmallSize:(double *)arg1;
@property(readonly, nonatomic, getter=_balloonCalloutStyle) long long balloonCalloutStyle;
- (void)_resolveBalloonAttributesIfNecessary;
- (void)prepareForReuse;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

