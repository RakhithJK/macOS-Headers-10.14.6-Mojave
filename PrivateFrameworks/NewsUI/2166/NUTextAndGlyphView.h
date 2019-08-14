//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NewsUI/NUCrossFadeViewAnimatable-Protocol.h>

@class NSString, NUTextAndGlyph, UIImageView, UILabel;

@interface NUTextAndGlyphView : UIView <NUCrossFadeViewAnimatable>
{
    NUTextAndGlyph *_textAndGlyph;
    UILabel *_label;
    UIImageView *_imageView;
}

@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NUTextAndGlyph *textAndGlyph; // @synthesize textAndGlyph=_textAndGlyph;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)nu_crossFadeViewSetValue:(id)arg1;
- (void)nu_crossFadeViewClearVisibleState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

