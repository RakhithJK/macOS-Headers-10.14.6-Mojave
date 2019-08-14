//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>
#import <UIKitCore/UITraitEnvironment-Protocol.h>

@class NSIndexPath, UIColor, UIContextualAction, UIScrollView, UISwipeActionController, UISwipeActionsConfiguration, UIView;

@protocol UISwipeActionHost <NSObject, UITraitEnvironment>
- (void)swipeActionController:(UISwipeActionController *)arg1 animateView:(UIView *)arg2 actionsView:(UIView *)arg3 forDestructiveAction:(UIContextualAction *)arg4 atIndexPath:(NSIndexPath *)arg5 withSwipeInfo:(CDStruct_8b31afb2)arg6 completion:(void (^)(BOOL))arg7;
- (UISwipeActionsConfiguration *)swipeActionController:(UISwipeActionController *)arg1 trailingSwipeConfigurationForItemAtIndexPath:(NSIndexPath *)arg2;
- (UISwipeActionsConfiguration *)swipeActionController:(UISwipeActionController *)arg1 leadingSwipeConfigurationForItemAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)swipeActionController:(UISwipeActionController *)arg1 indexPathForTouchLocation:(struct CGPoint)arg2;
- (UIView *)swipeActionController:(UISwipeActionController *)arg1 viewForItemAtIndexPath:(NSIndexPath *)arg2;
- (UIScrollView *)itemContainerViewForSwipeActionController:(UISwipeActionController *)arg1;
- (UIView *)gestureRecognizerViewForSwipeActionController:(UISwipeActionController *)arg1;

@optional
- (void)swipeActionController:(UISwipeActionController *)arg1 didCompleteAnimationOfAction:(UIContextualAction *)arg2 canceled:(BOOL)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)swipeActionController:(UISwipeActionController *)arg1 didPerformAction:(UIContextualAction *)arg2 canceled:(BOOL)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)swipeActionController:(UISwipeActionController *)arg1 willPerformAction:(UIContextualAction *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)swipeActionController:(UISwipeActionController *)arg1 didEndSwipeForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)swipeActionController:(UISwipeActionController *)arg1 willBeginSwipeForItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)swipeActionController:(UISwipeActionController *)arg1 mayBeginSwipeForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)swipeActionController:(UISwipeActionController *)arg1 insertActionsView:(UIView *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (UIColor *)swipeActionController:(UISwipeActionController *)arg1 backgroundColorForItemAtIndexPath:(NSIndexPath *)arg2;
- (struct UIEdgeInsets)swipeActionController:(UISwipeActionController *)arg1 extraInsetsForItemAtIndexPath:(NSIndexPath *)arg2;
@end
