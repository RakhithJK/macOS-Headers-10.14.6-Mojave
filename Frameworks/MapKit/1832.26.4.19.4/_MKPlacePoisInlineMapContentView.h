//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/_MKPlaceInlineMapContentView.h>

@class _MKUILabel;

@interface _MKPlacePoisInlineMapContentView : _MKPlaceInlineMapContentView
{
    _MKUILabel *_storesLabel;
    _MKUILabel *_seeMoreLabel;
    BOOL _visible;
}

+ (id)defaultAnimationForKey:(id)arg1;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (double)mapViewHeight;
- (void)setLocationsNumber:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)hasTitle;

@end

