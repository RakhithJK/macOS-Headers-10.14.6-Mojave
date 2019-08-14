//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <BaseBoardUI/UIScrollViewDelegate-Protocol.h>

@class NSString;
@protocol BSUIScrollViewDelegate;

@interface BSUIScrollView : UIScrollView <UIScrollViewDelegate>
{
    BOOL _isScrolling;
    BOOL _preventDidEndScrolling;
    BOOL _didScroll;
    CDUnknownBlockType _scrollCompletion;
    struct CGPoint _previousContentOffset;
    struct CGPoint _initialContentOffset;
    BOOL _scrolling;
}

@property(readonly, nonatomic, getter=isScrolling) BOOL scrolling; // @synthesize scrolling=_scrolling;
- (void).cxx_destruct;
- (id)_animationForAnimationSettings:(id)arg1;
- (void)_didEndScrollAnimationNotification:(id)arg1;
- (void)_didDidEndDeceleratingNotification:(id)arg1;
- (void)_didEndDraggingNotification:(id)arg1;
- (void)_willBeginDraggingNotification:(id)arg1;
- (void)_setScrollCompletion:(CDUnknownBlockType)arg1;
- (void)_updateScrolling;
- (void)_setScrolling:(BOOL)arg1;
- (void)_setContentOffset:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (long long)_activeMethod;
- (void)_notifyDidScroll;
- (void)_setCurrentContentOffsetImmediatelyIfScrollInterruptionAnimated:(BOOL)arg1;
- (void)_setContentOffset:(struct CGPoint)arg1 animation:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (BOOL)_setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2 withAnimation:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)setContentOffset:(struct CGPoint)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) CDStruct_3b09cf25 currentScrollContext;
@property(nonatomic) __weak id <BSUIScrollViewDelegate> delegate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_bs_didEndScrolling;
- (void)_bs_didScrollWithContext:(CDStruct_3b09cf25)arg1;
- (void)_bs_willBeginScrolling;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

