//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIKeyboardSplitTransitionView.h>

@class CALayer, NSMutableDictionary, UIKBCacheToken;

__attribute__((visibility("hidden")))
@interface UIKeyboardFlipTransitionView : UIKeyboardSplitTransitionView
{
    CALayer *_container;
    CALayer *_frontFace;
    CALayer *_backFace;
    CALayer *_frontDarkening;
    CALayer *_backDarkening;
    CALayer *_backDarkeningLeft;
    CALayer *_backDarkeningRight;
    BOOL _showingFrontFace;
    UIKBCacheToken *_startKeyplaneToken;
    UIKBCacheToken *_endKeyplaneToken;
    NSMutableDictionary *_controlKeys;
    struct {
        unsigned int shiftKeys:1;
        unsigned int returnKeys:1;
        unsigned int moreIntlKeys:1;
    } _rebuildFlags;
}

@property(nonatomic, getter=isShowingFrontFace) BOOL showingFrontFace; // @synthesize showingFrontFace=_showingFrontFace;
- (BOOL)transitionIsVisible;
- (void)rebuildControlKeys:(unsigned long long)arg1;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6;
- (void)updateTransition;
- (void)_delayedUpdateTransition;
- (void)rebuildMoreIntlKeys;
- (void)updateMoreIntlKey:(id)arg1 asStart:(BOOL)arg2 withRect:(struct CGRect)arg3 showIntl:(BOOL)arg4 showDictKey:(BOOL)arg5;
- (void)rebuildReturnSlices;
- (void)rebuildShiftSlices;
- (void)rebuildControlSlicesForKeyName:(id)arg1;
- (void)rebuildTransition;
- (void)rebuildBackgroundTransition;
- (struct CGImage *)splitKeyboardImage;
- (struct CGImage *)defaultKeyboardImage;
- (void)_flipToFront:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
