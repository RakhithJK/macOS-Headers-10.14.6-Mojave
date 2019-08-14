//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIGestureRecognizer, UIView;
@protocol _UIForcePresentationControllerDelegate;

@protocol UIForcePresentationController <NSObject>
@property(nonatomic) __weak id <_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate;
@property(readonly, nonatomic) UIView *_revealContainerView;
@property(nonatomic) BOOL _sourceViewSnapshotAndScaleTransformSuppressed;
@property(retain, nonatomic) UIGestureRecognizer *panningGestureRecognizer;
@property(copy, nonatomic) CDUnknownBlockType presentationPhaseCompletionBlock;
- (BOOL)_canCommitPresentation;
- (BOOL)_canDismissPresentation;

@optional
- (void)_willCommitPresentation;
@end

