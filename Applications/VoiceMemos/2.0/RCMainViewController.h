//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "RCEditTableFooterViewControllerDelegate-Protocol.h"
#import "RCLibraryActionHandler-Protocol.h"
#import "RCMainControllerHelperDelegate-Protocol.h"
#import "RCRecordingViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, NSUndoManager, RCCompositionController, RCEditTableFooterViewController, RCMainControllerHelper, RCMenuBarManager, RCPlaybackViewController, RCRecordingCardViewController, RCRecordingTableViewController, RCRecordingViewController, RCToolBarController, UIView;
@protocol RCMainViewControllerDelegate;

@interface RCMainViewController : UIViewController <RCLibraryActionHandler, RCMainControllerHelperDelegate, RCEditTableFooterViewControllerDelegate, UITableViewDelegate, RCRecordingViewControllerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate>
{
    NSUndoManager *_currentUndoManager;
    UIViewController *_cardPresentingViewController;
    BOOL _hideNavigationTitle;
    RCRecordingViewController *_myRecordingViewController;
    RCPlaybackViewController *_playbackViewController;
    id <RCMainViewControllerDelegate> _mainViewControllerDelegate;
    RCToolBarController *_toolBarController;
    RCMainControllerHelper *_mainControllerHelper;
    RCRecordingTableViewController *_libraryTableViewController;
    RCRecordingTableViewController *_recentlyDeletedTableViewController;
    CDUnknownBlockType _recordingCompletionBlock;
    RCEditTableFooterViewController *_footerViewController;
    RCRecordingCardViewController *_presentedCardViewController;
    UIView *_recordingViewSnapshot;
    NSLayoutConstraint *_libraryTableViewBottomContraint;
    NSLayoutConstraint *_recordingViewBottomConstraint;
    NSUndoManager *_mainUndoManager;
    RCMenuBarManager *_menuBarManager;
}

@property(retain, nonatomic) RCMenuBarManager *menuBarManager; // @synthesize menuBarManager=_menuBarManager;
@property(retain, nonatomic) NSUndoManager *mainUndoManager; // @synthesize mainUndoManager=_mainUndoManager;
@property(retain, nonatomic) NSLayoutConstraint *recordingViewBottomConstraint; // @synthesize recordingViewBottomConstraint=_recordingViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *libraryTableViewBottomContraint; // @synthesize libraryTableViewBottomContraint=_libraryTableViewBottomContraint;
@property(nonatomic) __weak UIView *recordingViewSnapshot; // @synthesize recordingViewSnapshot=_recordingViewSnapshot;
@property(nonatomic) __weak RCRecordingCardViewController *presentedCardViewController; // @synthesize presentedCardViewController=_presentedCardViewController;
@property(retain, nonatomic) RCEditTableFooterViewController *footerViewController; // @synthesize footerViewController=_footerViewController;
@property(copy, nonatomic) CDUnknownBlockType recordingCompletionBlock; // @synthesize recordingCompletionBlock=_recordingCompletionBlock;
@property(retain, nonatomic) RCRecordingTableViewController *recentlyDeletedTableViewController; // @synthesize recentlyDeletedTableViewController=_recentlyDeletedTableViewController;
@property(retain, nonatomic) RCRecordingTableViewController *libraryTableViewController; // @synthesize libraryTableViewController=_libraryTableViewController;
@property(retain, nonatomic) RCMainControllerHelper *mainControllerHelper; // @synthesize mainControllerHelper=_mainControllerHelper;
@property(nonatomic) __weak RCToolBarController *toolBarController; // @synthesize toolBarController=_toolBarController;
@property(nonatomic) BOOL hideNavigationTitle; // @synthesize hideNavigationTitle=_hideNavigationTitle;
@property(nonatomic) __weak id <RCMainViewControllerDelegate> mainViewControllerDelegate; // @synthesize mainViewControllerDelegate=_mainViewControllerDelegate;
@property(nonatomic) __weak RCPlaybackViewController *playbackViewController; // @synthesize playbackViewController=_playbackViewController;
@property(readonly, nonatomic) RCRecordingViewController *myRecordingViewController; // @synthesize myRecordingViewController=_myRecordingViewController;
- (void).cxx_destruct;
- (void)trimRecording:(id)arg1;
- (void)editRecording:(id)arg1;
- (void)duplicateRecording:(id)arg1;
- (BOOL)canTrimRecording;
- (BOOL)canEditRecording;
- (BOOL)canDuplicateRecording;
- (void)shareRecording:(id)arg1;
- (BOOL)canShareRecording;
- (void)renameRecording:(id)arg1;
- (BOOL)canRenameRecording;
- (void)playRecording:(id)arg1;
- (BOOL)canPlayRecording;
- (void)startNewRecording:(id)arg1;
- (BOOL)canStartNewRecording;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (id)_sharedAnimationControllerResolverForFromVC:(id)arg1 toVC:(id)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
@property(readonly) NSUndoManager *undoManager;
- (void)userDidCancelDeleteRecording;
- (void)userDidUndeleteRecordingWithUUID:(id)arg1;
- (void)userDidDeleteRecordingWithUUID:(id)arg1;
- (void)setCurrentTime:(double)arg1 withUUID:(id)arg2;
@property(readonly) NSString *selectedUUID;
- (void)recordingDurationUpdated:(double)arg1;
- (void)captureFailedWithError:(id)arg1;
- (void)_switchToIdleFromPreviousActivityType:(long long)arg1 displayModel:(id)arg2 withUUID:(id)arg3;
- (void)_switchToCapturingFromPreviousActivityType:(long long)arg1 displayModel:(id)arg2 captureSession:(id)arg3;
- (void)_switchToEditingFromPreviousActivityType:(long long)arg1 displayModel:(id)arg2 withCompositionController:(id)arg3;
- (void)_switchToPlayingBackFromPreviousActivityType:(long long)arg1 withUUID:(id)arg2;
- (void)didTransitionToActivityType:(long long)arg1 fromPreviousActivityType:(long long)arg2 withDisplayModel:(id)arg3 captureSession:(id)arg4 compositionController:(id)arg5;
- (void)hideBackButtonTitle:(BOOL)arg1;
- (void)updateNavBarTitleAndDeleteButtonForRecordingsCount:(unsigned long long)arg1 isEditMode:(BOOL)arg2;
- (void)updateBottomLayoutForEditMode:(BOOL)arg1;
- (void)_myPresentViewController:(id)arg1 sourceController:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)confirmRecoverWithUUIDs:(id)arg1 source:(id)arg2 force:(BOOL)arg3;
- (void)recoverRecordingsWithUUIDs:(id)arg1 source:(id)arg2;
- (void)confirmDeletionWithUUIDs:(id)arg1 deleteAllEvicted:(BOOL)arg2;
- (void)confirmEvictionWithUUIDs:(id)arg1 source:(id)arg2 force:(BOOL)arg3 showInfo:(BOOL)arg4;
- (void)showMoreMenuForUUID:(id)arg1 sourceController:(id)arg2 source:(id)arg3;
- (void)performAction:(long long)arg1 atPosition:(double)arg2 forUUID:(id)arg3 sourceController:(id)arg4 source:(id)arg5;
- (void)wasDeselectedForUUID:(id)arg1;
- (void)didSelectForUUID:(id)arg1;
- (void)selectedRecordingDidChange;
- (void)performDeleteRows;
- (void)updateForSplitViewDisplayMode:(long long)arg1;
- (void)performClearAllRecentlyDeleted;
- (void)performRenameWithNewTitle:(id)arg1 forUUID:(id)arg2;
- (void)modalityChanged;
- (void)undo;
- (void)selectRecordingWithUUID:(id)arg1;
- (void)_dismissCardView;
- (void)libraryChangedToEmptyState:(BOOL)arg1;
- (BOOL)isPlayingForUUID:(id)arg1;
- (BOOL)recordingTitleHasBeenEditedForUUID:(id)arg1;
- (void)waveformTimeUpdated:(double)arg1;
- (void)stopRecording;
- (id)overviewWaveformViewController;
- (id)waveformViewController;
- (void)cancelTrimMode;
- (double)currentTime;
- (void)shouldEnableUndo;
- (BOOL)isShowingRecentlyDeleted;
- (BOOL)isInsertMode;
- (void)enableUndoFirstResponder;
- (void)shouldEnableTrimSave:(BOOL)arg1;
- (void)exitTrimMode;
- (void)exitInsertMode;
- (void)replaceRecording;
- (void)resumeRecording;
- (void)stopPlayback;
- (void)pauseRecording;
- (void)playRecordingWithUUID:(id)arg1;
- (void)startRecording;
- (BOOL)toggleRecording;
- (void)_presentCardViewForRecordingStart;
- (void)_updateCardViewBackgroundImages;
- (void)_presentCardView;
- (void)startRecordingWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) RCCompositionController *compositionController;
- (void)removeDisplayLinkObserver:(id)arg1;
- (void)addDisplayLinkObserver:(id)arg1;
- (void)pauseDisplayLink:(BOOL)arg1;
- (void)_updateExpansionButton:(long long)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_setupCardViewConstraints;
- (void)_setupDefaultConstraints;
- (void)_updateLibraryTableViewBottomConstraint;
- (void)updateViewConstraints;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)edgesForExtendedLayout;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

