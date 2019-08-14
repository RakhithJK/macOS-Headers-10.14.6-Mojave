//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSDictionary, NSMutableDictionary, NSString, UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface _UIBadgeView : UIView
{
    UILabel *_label;
    UIImageView *_background;
    NSMutableDictionary *_mergedTextAttributes;
    NSString *_text;
    NSDictionary *_textAttributes;
    UIColor *_backgroundColor;
}

@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)_updateBackground;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)layoutSubviews;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_applyTextToLabel;
- (void)_setupLabelIfNecessary;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithText:(id)arg1;

@end

