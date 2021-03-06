//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class StockGraphImageSet, TintedView, UIImage;

@interface VolumeGraphView : UIView
{
    BOOL _showingTintedRegion;
    TintedView *_tintedVolumeView;
    UIView *_tintedRegionClipView;
    UIImage *_volumeImage;
    StockGraphImageSet *_graphImageSet;
}

@property(retain, nonatomic) StockGraphImageSet *graphImageSet; // @synthesize graphImageSet=_graphImageSet;
- (void).cxx_destruct;
- (void)resizeSelectedVolumeClipViewWithLeftX:(double)arg1 rightX:(double)arg2;
- (void)setShowingSelectedRegion:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

