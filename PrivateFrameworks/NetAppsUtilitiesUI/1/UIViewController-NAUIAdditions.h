//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (NAUIAdditions)
- (void)naui_applicationWillEnterForeground;
- (void)naui_applicationDidEnterBackground;
- (BOOL)naui_isDescendantOfViewController:(id)arg1;
- (void)naui_loadViewIfNecessary;
- (BOOL)naui_hasAxisWithRegularSizeClassOrGreater;
- (BOOL)naui_isVerticalSizeClassRegularOrGreater;
- (BOOL)naui_isHorizontalSizeClassRegularOrGreater;
- (BOOL)naui_canAnimate;
- (void)naui_addChildViewWithViewController:(id)arg1 toView:(id)arg2;
- (void)naui_addChildViewWithViewController:(id)arg1;
@end

