//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SilexVideo/SVVideoPlayButton.h>

@class AVBackgroundView;

@interface SVMaterialVideoPlayButton : SVVideoPlayButton
{
    AVBackgroundView *_backgroundView;
}

@property(readonly, nonatomic) AVBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)updateBackgroundColor;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
