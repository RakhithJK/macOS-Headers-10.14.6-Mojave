//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIIndexBarEntry, UIIndexBarView;

@protocol UIIndexBarViewDelegate <NSObject>

@optional
- (BOOL)indexBarView:(UIIndexBarView *)arg1 didSelectEntry:(UIIndexBarEntry *)arg2 atIndex:(long long)arg3;
- (void)userInteractionStoppedWithIndexBarView:(UIIndexBarView *)arg1;
- (void)userInteractionStartedWithIndexBarView:(UIIndexBarView *)arg1;
@end
