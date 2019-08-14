//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "RCAVWaveformViewControllerDelegate-Protocol.h"
#import "RCRecordingViewDelegate-Protocol.h"

@class NSString, RCAVWaveformViewController, RCCaptureSession, RCCompositionController, RCEmptyLibrarySplashView, RCRecordingView, RCToolBarController;
@protocol RCRecordingViewControllerDelegate;

@interface RCRecordingViewController : UIViewController <RCRecordingViewDelegate, RCAVWaveformViewControllerDelegate>
{
    BOOL _insertMode;
    id <RCRecordingViewControllerDelegate> _recordingViewControllerDelegate;
    RCCaptureSession *_captureSession;
    RCCompositionController *_compositionController;
    RCAVWaveformViewController *_waveformViewController;
    RCAVWaveformViewController *_overviewWaveformViewController;
    RCToolBarController *_toolBarController;
    NSString *_UUID;
    RCEmptyLibrarySplashView *_emptyLibrarySplashView;
}

@property(retain, nonatomic) RCEmptyLibrarySplashView *emptyLibrarySplashView; // @synthesize emptyLibrarySplashView=_emptyLibrarySplashView;
@property(copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) BOOL insertMode; // @synthesize insertMode=_insertMode;
@property(nonatomic) __weak RCToolBarController *toolBarController; // @synthesize toolBarController=_toolBarController;
@property(retain, nonatomic) RCAVWaveformViewController *overviewWaveformViewController; // @synthesize overviewWaveformViewController=_overviewWaveformViewController;
@property(retain, nonatomic) RCAVWaveformViewController *waveformViewController; // @synthesize waveformViewController=_waveformViewController;
@property(retain, nonatomic) RCCompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property(retain, nonatomic) RCCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) __weak id <RCRecordingViewControllerDelegate> recordingViewControllerDelegate; // @synthesize recordingViewControllerDelegate=_recordingViewControllerDelegate;
- (void).cxx_destruct;
- (void)audioWaveformControllerDidChangeAVTimes:(id)arg1;
- (void)audioWaveformControllerDidChangeAVState:(id)arg1;
- (void)audioWaveformControllerDidChangeWaveformDataSource:(id)arg1;
- (BOOL)accessibilityPerformEscape;
- (BOOL)recordingTitleHasBeenEdited;
- (void)modalStateChanged;
- (void)handleDone;
- (void)handleCancel;
- (void)_syncWaveformCompactness;
- (void)_configureWaveformViewWithDataSource:(id)arg1;
- (id)createNewWaveformViewControllerWithDataSource:(id)arg1 isOverview:(BOOL)arg2;
- (void)visualStateChanged;
- (void)startEditWithCompositionController:(id)arg1 displayModel:(id)arg2;
- (void)updateWithRecordingModel:(id)arg1;
- (void)updateAfterRecordingWithRecordingModel:(id)arg1;
- (void)performRenameWithNewTitle:(id)arg1;
- (void)performAction:(long long)arg1 atPosition:(double)arg2 source:(id)arg3;
- (void)updateCurrentTimeForUUID:(id)arg1 toTime:(double)arg2;
- (void)handleDeleteForUUID:(id)arg1;
- (void)renameForUUID:(id)arg1 toNewTitle:(id)arg2;
- (void)showIdleForUUID:(id)arg1;
- (void)showPlayingForUUID:(id)arg1;
- (void)_commitEditing;
- (void)setOutPointToCurrentTime;
- (void)setInPointToCurrentTime;
- (void)setSelectedTimeRange:(CDStruct_c3b9c2ee)arg1 animationDuration:(double)arg2;
- (void)updateTrimSaveState:(BOOL)arg1;
- (void)updateUndoState:(BOOL)arg1;
- (void)updateForRecordingEnd;
- (void)updateForTrimMode;
- (void)updateForInsertMode;
- (void)updateForRecordingReplace;
- (void)updateForRecordingAppend;
- (void)updateForRecordingPauseAtEnd;
- (void)updateForRecordingPause;
- (void)_updateRecordButtonViewState:(id)arg1 isInsertOrTrimMode:(BOOL)arg2;
- (void)updateForRecordingStart;
- (void)actionActivated:(long long)arg1;
- (void)_setupWaveformViewController;
- (void)_reset;
- (void)selectedRecordingDidChange;
- (Class)_viewClass;
- (void)_classSpecificLoadView;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(retain, nonatomic) RCRecordingView *view; // @dynamic view;

@end

