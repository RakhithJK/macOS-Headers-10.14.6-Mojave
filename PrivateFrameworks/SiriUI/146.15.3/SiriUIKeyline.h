//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface SiriUIKeyline : NSView
{
    BOOL _veritical;
    NSView *_keylineView;
    long long _keylineType;
    double _customLeftPadding;
    double _customRightPadding;
    NSColor *_customBackgroundColor;
}

+ (double)keylineThickness;
+ (id)keylineWithKeylineType:(long long)arg1;
+ (id)verticalKeyline;
+ (id)keylineForSelectableRow;
+ (id)keylineWithDefaultInsets;
+ (id)keyline;
@property(nonatomic, getter=_isVeritical, setter=_setVertical:) BOOL veritical; // @synthesize veritical=_veritical;
@property(retain, nonatomic) NSColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
@property(nonatomic) double customRightPadding; // @synthesize customRightPadding=_customRightPadding;
@property(nonatomic) double customLeftPadding; // @synthesize customLeftPadding=_customLeftPadding;
@property(nonatomic) long long keylineType; // @synthesize keylineType=_keylineType;
@property(retain) NSView *keylineView; // @synthesize keylineView=_keylineView;
- (void).cxx_destruct;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (BOOL)wantsLayer;
- (BOOL)isFlipped;
- (void)updateConstraints;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 useAutolayout:(BOOL)arg2;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithKeylineType:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

@end

