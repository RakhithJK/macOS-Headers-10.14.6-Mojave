//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarPersonNameItemView : UIStatusBarItemView
{
    NSString *_personNameString;
    double _letterSpacing;
    double _maxWidth;
}

- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (long long)legibilityStyle;
- (double)extraRightPadding;
- (double)addContentOverlap:(double)arg1;
- (double)resetContentOverlap;
- (id)contentsImage;
- (BOOL)_updateWithPersonName:(id)arg1 maxWidth:(double)arg2;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (double)standardPadding;

@end

