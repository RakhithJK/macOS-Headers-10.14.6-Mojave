//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIWindow.h>

@interface UIApplicationRotationFollowingWindow : UIWindow
{
}

+ (BOOL)_isSystemWindow;
- (id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2;
- (BOOL)_shouldControlAutorotation;
- (BOOL)isInterfaceAutorotationDisabled;
- (void)_handleStatusBarOrientationChange:(id)arg1;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)applicationWindowRotated:(id)arg1;
- (void)dealloc;
- (id)_initWithFrame:(struct CGRect)arg1 attached:(BOOL)arg2;
- (id)init;
- (void)_commonApplicationRotationFollowingWindowInit;

@end

