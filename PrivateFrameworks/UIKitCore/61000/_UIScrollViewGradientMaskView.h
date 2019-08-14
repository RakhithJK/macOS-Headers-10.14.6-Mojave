//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _UIScrollViewGradientMaskView : UIView
{
    long long _gradientDirection;
    struct UIEdgeInsets _gradientStartInsets;
    struct UIEdgeInsets _gradientEndInsets;
    struct UIEdgeInsets _gradientIntensities;
}

+ (Class)layerClass;
@property(nonatomic) long long gradientDirection; // @synthesize gradientDirection=_gradientDirection;
@property(nonatomic) struct UIEdgeInsets gradientIntensities; // @synthesize gradientIntensities=_gradientIntensities;
@property(nonatomic) struct UIEdgeInsets gradientEndInsets; // @synthesize gradientEndInsets=_gradientEndInsets;
@property(nonatomic) struct UIEdgeInsets gradientStartInsets; // @synthesize gradientStartInsets=_gradientStartInsets;
- (void)updateWithFrame:(struct CGRect)arg1 gradientStartInsets:(struct UIEdgeInsets)arg2 gradientEndInsets:(struct UIEdgeInsets)arg3 gradientIntensities:(struct UIEdgeInsets)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)gradientLayer;

@end

