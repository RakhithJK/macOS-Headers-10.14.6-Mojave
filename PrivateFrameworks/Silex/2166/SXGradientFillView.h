//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXFillView.h>

@class SXClippingView, SXGradientView, SXLinearGradientFill;

@interface SXGradientFillView : SXFillView
{
    SXLinearGradientFill *_gradientFill;
    SXClippingView *_clippingView;
    SXGradientView *_gradientView;
}

@property(readonly, nonatomic) SXGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(readonly, nonatomic) SXClippingView *clippingView; // @synthesize clippingView=_clippingView;
@property(readonly, nonatomic) SXLinearGradientFill *gradientFill; // @synthesize gradientFill=_gradientFill;
- (void).cxx_destruct;
- (void)setContentFrame:(struct CGRect)arg1;
- (struct CGRect)contentFrame;
- (struct CGRect)fillFrameWithBoundingSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithGradientFill:(id)arg1 gradientFactory:(id)arg2;

@end

