//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UIViewDraggingSourceDelegate-Protocol.h>

@class NSArray, UIView;

@protocol _UIViewDraggingSourceDelegatePrivate <_UIViewDraggingSourceDelegate>

@optional
- (long long)_view:(UIView *)arg1 dataOwnerOfDragSourceWithIndex:(unsigned long long)arg2;
- (NSArray *)_requiredContextIDsForDragSessionInView:(UIView *)arg1;
- (BOOL)_shouldPerformHitTestingForDragSessionInView:(UIView *)arg1;
@end

