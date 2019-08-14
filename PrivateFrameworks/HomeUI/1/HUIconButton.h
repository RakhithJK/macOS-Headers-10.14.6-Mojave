//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class HUIconView;
@protocol HFIconDescriptor;

@interface HUIconButton : UIControl
{
    HUIconView *_iconView;
}

@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <HFIconDescriptor> iconDescriptor;
- (struct CGSize)intrinsicContentSize;
- (void)updateWithIconDescriptor:(id)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

