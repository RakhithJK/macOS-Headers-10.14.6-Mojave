//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIViewPropertyAnimator, _UIDraggingItem;
@protocol UICoordinateSpace;

@protocol _UIDraggingItemVisualTarget <NSObject>

@optional
- (BOOL)_draggingItem:(_UIDraggingItem *)arg1 shouldDelaySetDownAnimationWithCompletion:(void (^)(void))arg2;
- (void)_draggingItem:(_UIDraggingItem *)arg1 willAnimateDisappearanceWithAnimator:(UIViewPropertyAnimator *)arg2;
- (void)_draggingItem:(_UIDraggingItem *)arg1 willAnimateSetDownWithAnimator:(UIViewPropertyAnimator *)arg2;
- (struct CGRect)_targetFrameOfDraggingItem:(_UIDraggingItem *)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
@end

