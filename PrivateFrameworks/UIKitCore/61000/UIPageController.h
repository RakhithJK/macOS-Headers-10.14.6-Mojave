//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@class NSMutableArray, UIPageControl, UIScrollView, UIView;
@protocol UIPageControllerDelegate;

@interface UIPageController : UIViewController
{
    NSMutableArray *_viewControllers;
    UIView *_wrapperViews[3];
    int _notificationState[3];
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    id <UIPageControllerDelegate> _delegate;
    int _pageSpacing;
    long long _visibleIndex;
    long long _pageCount;
    struct {
        unsigned int delegateViewControllerAtIndex:1;
        unsigned int delegateWillBeginPaging:1;
        unsigned int delegateDidEndPaging:1;
        unsigned int displaysPageControl:1;
        unsigned int wraps:1;
    } _pageControllerFlags;
}

@property(nonatomic) id <UIPageControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_getRotationContentSettings:(CDStruct_f365cafe *)arg1;
- (BOOL)_shouldUseOnePartRotation;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (BOOL)_isSupportedInterfaceOrientation:(long long)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(long long)arg1;
- (BOOL)_allowsAutorotation;
- (long long)indexOfViewController:(id)arg1;
@property(nonatomic) BOOL displaysPageControl;
- (void)_createPageControl;
- (void)_pageChanged:(id)arg1;
@property(nonatomic) BOOL wraps;
@property(nonatomic) long long pageCount;
@property(nonatomic) long long visibleIndex;
- (void)setVisibleIndex:(long long)arg1 animated:(BOOL)arg2;
- (struct CGRect)_scrollViewFrame;
- (void)_scrollViewDidScroll:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)_scrollView:(id)arg1 boundsDidChangeToSize:(struct CGSize)arg2;
- (void)_adjustScrollViewContentInsets;
- (void)_scrollViewDidEndPaging;
- (void)_scrollViewWillBeginPaging;
- (void)_notifyNextViewController:(int)arg1 animated:(BOOL)arg2;
- (void)_notifyVisibleViewController:(int)arg1 animated:(BOOL)arg2;
- (void)_notifyPreviousViewController:(int)arg1 animated:(BOOL)arg2;
- (int)_nextViewControllerNotificationState;
- (int)_visibleViewControllerNotificationState;
- (int)_previousViewControllerNotificationState;
- (void)_setNextViewControllerNotificationState:(int)arg1;
- (void)_setVisibleViewControllerNotificationState:(int)arg1;
- (void)_setPreviousViewControllerNotificationState:(int)arg1;
- (void)_notifyViewController:(id)arg1 ofState:(int)arg2 previousState:(int)arg3 animated:(BOOL)arg4;
@property(readonly, retain, nonatomic) UIViewController *visibleViewController;
- (BOOL)_hasNextViewController;
- (BOOL)_hasVisibleViewController;
- (BOOL)_hasPreviousViewController;
- (id)_nextViewController;
- (id)_visibleViewController;
- (id)_previousViewController;
- (id)_loadNextViewController;
- (id)_loadVisibleViewControllerAndNotify:(BOOL)arg1;
- (id)_loadPreviousViewController;
- (BOOL)_needToLoadNext;
- (BOOL)_needToLoadVisible;
- (BOOL)_needToLoadPrevious;
- (void)_setNextViewController:(id)arg1;
- (void)_setVisibleViewController:(id)arg1;
- (void)_setPreviousViewController:(id)arg1;
- (void)_replaceViewControllerAtIndex:(long long)arg1 withViewController:(id)arg2;
- (BOOL)_isViewControllerBeingUnloaded:(id)arg1 atIndex:(long long)arg2;
- (id)_scrollView;
@property(nonatomic) double pageSpacing;
- (void)viewDidUnload;
- (void)loadView;
- (void)dealloc;
- (id)_pageControllerScrollView;
- (void)reloadViewControllerAtIndex:(long long)arg1;
- (void)setVisibleIndex:(long long)arg1 preservingLoadedViewControllers:(BOOL)arg2 animated:(BOOL)arg3;

@end
