//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HFItemManagerDelegate-Protocol.h"
#import "HORoomListViewControllerDelegate-Protocol.h"
#import "HORoomViewControllerDelegate-Protocol.h"
#import "HUEditRoomViewControllerPresentationDelegate-Protocol.h"
#import "HUPreloadableViewController-Protocol.h"
#import "HUPresentationDelegate-Protocol.h"
#import "HUQuickControlPresentationHost-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class HFItemManager, HMRoom, HORoomPageItemManager, HUGridLayoutOptions, NAFuture, NSIndexPath, NSString, UINavigationController, UIPageViewController;

@interface HORoomPageContainerViewController : UIViewController <HFItemManagerDelegate, HUPresentationDelegate, HORoomListViewControllerDelegate, HORoomViewControllerDelegate, HUEditRoomViewControllerPresentationDelegate, HUQuickControlPresentationHost, UIPageViewControllerDelegate, UIPageViewControllerDataSource, UIViewControllerTransitioningDelegate, HUPreloadableViewController>
{
    BOOL _visibilityUpdatesEnabled;
    HORoomPageItemManager *_roomPageItemManager;
    UIPageViewController *_pageViewController;
    HUGridLayoutOptions *_layoutOptions;
    NAFuture *_firstLayoutFuture;
    NAFuture *_preloadInitialRoomViewControllerFuture;
    NAFuture *_pageViewControllerReadyFuture;
    UINavigationController *_weakInitialRoomNavigationController;
    NSIndexPath *_targetRoomIndexPath;
    NSIndexPath *_currentRoomIndexPath;
    HMRoom *_newlyCreatedRoom;
}

+ (unsigned long long)updateMode;
@property(retain, nonatomic) HMRoom *newlyCreatedRoom; // @synthesize newlyCreatedRoom=_newlyCreatedRoom;
@property(retain, nonatomic) NSIndexPath *currentRoomIndexPath; // @synthesize currentRoomIndexPath=_currentRoomIndexPath;
@property(retain, nonatomic) NSIndexPath *targetRoomIndexPath; // @synthesize targetRoomIndexPath=_targetRoomIndexPath;
@property(nonatomic) __weak UINavigationController *weakInitialRoomNavigationController; // @synthesize weakInitialRoomNavigationController=_weakInitialRoomNavigationController;
@property(retain, nonatomic) NAFuture *pageViewControllerReadyFuture; // @synthesize pageViewControllerReadyFuture=_pageViewControllerReadyFuture;
@property(retain, nonatomic) NAFuture *preloadInitialRoomViewControllerFuture; // @synthesize preloadInitialRoomViewControllerFuture=_preloadInitialRoomViewControllerFuture;
@property(retain, nonatomic) NAFuture *firstLayoutFuture; // @synthesize firstLayoutFuture=_firstLayoutFuture;
@property(nonatomic) BOOL visibilityUpdatesEnabled; // @synthesize visibilityUpdatesEnabled=_visibilityUpdatesEnabled;
@property(retain, nonatomic) HUGridLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) HORoomPageItemManager *roomPageItemManager; // @synthesize roomPageItemManager=_roomPageItemManager;
- (void).cxx_destruct;
- (id)showRoomSettingsForLastSelectedRoom;
- (id)_newCurrentRoomIndexPath;
- (void)_presentRoomEditorForRoom:(id)arg1;
- (void)_presentRoomListFromRoom:(id)arg1 fromView:(id)arg2;
- (void)_navigateToRoomNavigationController:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_setupInitialRoomViewController;
- (id)_indexPathForRoom:(id)arg1;
- (id)_roomNavigationControllerForItemAtIndexPath:(id)arg1;
- (id)_roomNavigationControllerForRoomOffsetFromViewController:(id)arg1 offset:(long long)arg2 outIndexPath:(id *)arg3;
- (id)_navigateToSelectedRoom:(id)arg1;
- (void)childViewController:(id)arg1 didEndQuickControlsPresentation:(id)arg2;
- (void)childViewController:(id)arg1 willBeginQuickControlsPresentation:(id)arg2;
- (void)recursivelyDisableItemUpdates:(BOOL)arg1 withReason:(id)arg2;
@property(readonly, nonatomic) HFItemManager *itemManager;
- (id)hu_preloadContent;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)editRoomViewControllerDidFinish:(id)arg1 withNewRoom:(id)arg2;
- (void)presentRoomEditorForRoomViewController:(id)arg1;
- (void)presentRoomListPickerForRoomViewController:(id)arg1 fromView:(id)arg2;
- (void)roomListViewControllerDidFinish:(id)arg1;
- (void)roomListViewController:(id)arg1 wantsToShowRoom:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)finishPresentation:(id)arg1 animated:(BOOL)arg2;
- (long long)preferredStatusBarStyle;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)showRoom:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

