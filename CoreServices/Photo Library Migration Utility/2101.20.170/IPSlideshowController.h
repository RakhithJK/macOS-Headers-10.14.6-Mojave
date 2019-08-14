//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "IPMarimbaOptionsDelegate-Protocol.h"
#import "MultiPaneContentControllerProtocol-Protocol.h"
#import "NSSplitViewDelegate-Protocol.h"

@class Album, IPKToolbarItem, IPMarimbaBackgroundView, IPMarimbaExporter, IPMarimbaGlobeView, IPMarimbaHUDController, IPMarimbaLoadingWindow, IPMarimbaSlideshow, IPMarimbaView, IPSlideThumbView, MPEffectContainer, MultiPaneController, NSImageView, NSMutableArray, NSScrollView, NSSplitView, NSString, NSTextField, NSTimer, NSWindow;

@interface IPSlideshowController : NSObject <NSSplitViewDelegate, MultiPaneContentControllerProtocol, IPMarimbaOptionsDelegate>
{
    IPMarimbaSlideshow *_slideshow;
    IPMarimbaView *_slideshowView;
    IPMarimbaBackgroundView *_fillerView;
    IPSlideThumbView *mSlideThumbView;
    NSScrollView *mThumbViewScrollView;
    NSSplitView *mThumbSlideSplitView;
    IPKToolbarItem *mPreviewToolbarItem;
    IPKToolbarItem *mTextSlideToolbarItem;
    NSTimer *mPlayTimer;
    BOOL mDontReallyRebuildView;
    BOOL mIsInKenBurnsEditMode;
    MPEffectContainer *mSelectedEffectContainer;
    NSMutableArray *mSelectedSlides;
    IPMarimbaHUDController *mHUDController;
    IPMarimbaExporter *mExporter;
    NSImageView *mResizeImageView;
    BOOL _isWarmingUp;
    IPMarimbaLoadingWindow *mLoadingWindow;
    IPMarimbaGlobeView *_globeView;
    NSWindow *_placesLoadingWindow;
    Album *_currentAlbum;
    MultiPaneController *_controller;
    NSWindow *_debugWindow;
    NSTextField *_debugTimeField;
    BOOL _controllerIsInstalledInMultiPane;
}

@property(retain) Album *currentAlbum; // @synthesize currentAlbum=_currentAlbum;
- (void)_showDebugWindow;
- (BOOL)allowSizeIncrementChange;
- (void)_updateSlider;
- (void)updateSizer:(float)arg1;
- (void)_updateSlideSettingsForSlide:(id)arg1;
- (void)setSizeIncrement:(double)arg1;
- (void)sliderDidEndTracking;
- (void)sliderWillStartTracking;
- (double)sizeIncrement;
- (void)_slideshowBecameVisible;
- (void)_hideResizeImageView;
- (void)_showResizeViewWithImage:(id)arg1;
- (void)_rescaleSlideshowViewForAspectRatio;
- (void)rebuildView;
- (double)_thisScreenAspectRatio;
- (void)fullScreenPreviewDidEnd:(id)arg1;
- (void)_updateToolBarItems;
- (BOOL)validateMenuItem:(id)arg1;
- (void)exporterDidFinish;
- (void)closeHUDs;
- (BOOL)hasHUDs;
- (void)userCanceled;
- (void)_closeLoading;
- (void)_showLoading:(BOOL)arg1;
- (BOOL)_isPreparingSlideshow;
- (void)beatDetectionDidEnd:(id)arg1;
- (void)beatDetectionDidStart:(id)arg1;
- (void)globeViewDidCancel:(id)arg1;
- (void)styleProgressDidChange:(id)arg1;
- (void)styleUpdateDidEnd:(id)arg1;
- (void)styleUpdateDidStart:(id)arg1;
- (void)setContentViewActsAsModal:(id)arg1;
- (void)styleChangeDidEnd:(id)arg1;
- (void)styleChangeDidStart:(id)arg1;
- (id)updateStatus;
- (void)slideImageDoubleClicked:(id)arg1;
- (void)_slideDoubleClicked:(id)arg1;
- (void)_slideClicked:(id)arg1;
- (void)prepareToEdit;
- (void)installCurrentAlbum;
- (void)currentAlbumWillSwitch:(id)arg1;
- (void)currentAlbumWillSwitchFrom:(id)arg1 to:(id)arg2;
- (void)markAsModifiedSansRebuild;
- (void)removeSelectedPhotos;
- (void)_undoRemoveSelectedPhotos:(id)arg1;
- (void)_redoRemoveSelectedPhotos:(id)arg1;
- (void)showCustomControls:(id)arg1;
- (void)trashAction:(id)arg1;
- (void)exportSlideshowAction:(id)arg1;
- (void)slideshowToggleSubtitle:(id)arg1;
- (void)slideshowSettingsButtonAction:(id)arg1;
- (void)slideMusicButtonAction:(id)arg1;
- (void)playSlideButtonAction:(id)arg1;
- (void)playCurrentSlideshowWithApplescriptMode:(int)arg1;
- (void)_stopPreview;
- (void)playTimerFire:(id)arg1;
- (void)previewSlideshowButtonAction:(id)arg1;
- (void)userSelectStyleButtonAction:(id)arg1;
- (void)selectNone;
- (void)selectAll;
- (void)clearSelection;
- (void)installSelection:(struct IPSelectionList *)arg1;
- (struct IPSelectionList *)retrieveSelection;
- (BOOL)canModifySelection;
- (BOOL)hasSelection;
- (long long)slideCount;
- (void)keyDown:(id)arg1;
- (void)thumbViewMoveSelection:(id)arg1 selection:(id)arg2 toIndex:(long long)arg3;
- (void)thumbViewSelectionChanged:(id)arg1 photoIndex:(long long)arg2 photoInfo:(struct IPPhotoInfo *)arg3;
- (void)_thumbViewSelectionToSlideshow;
- (BOOL)_textIsSelected;
- (void)_updateSelectedSlides;
- (void)_updateSlideshowViewToNewSelection;
- (void)_disconnectTransitions;
- (void)_reconnectTransitions;
- (void)_selectSlide:(id)arg1;
- (void)_moveTimeToSlideAtIndex:(long long)arg1;
- (void)_moveTimeToCurrentSlide;
- (long long)firstSelection;
- (void)jumpToTitleSlide;
- (void)_clearSelectedContainer;
- (void)timingDidChange;
- (void)unlockRendering;
- (void)lockRendering;
- (void)aspectRatioDidChange;
- (void)kenBurnsStateDidChange;
- (void)pause;
- (BOOL)allowThemeSelection;
- (BOOL)isPlaying;
- (id)visibleSlides;
- (void)slidesNeedUpdate;
- (void)needsRerender;
- (id)screen;
- (id)selectedSlides;
- (void)optionsPlayed;
- (void)slideGeometryDidChange;
- (void)slideOrderDidChange;
- (void)rebuildSlideThumbView;
- (void)optionsCancelled;
- (int)cropTypeForSlide:(id)arg1;
- (void)_updateUIAfterStyleChange;
- (void)styleDidChange:(id)arg1;
- (id)mainWindow;
- (void)resetSlideshow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)slideshow;
- (id)slideshowView;
- (id)album;
- (id)db;
- (id)slideThumbView;
- (void)dealloc;
- (void)awakeFromNib;
- (void)frameDidChange:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)windowWillMiniaturize:(id)arg1;
- (void)windowDidChangeScreen:(id)arg1;
- (BOOL)splitViewDoubleClicked:(id)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)_splitView:(id)arg1 resizeSubviewsStretchingLastWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)reconfigureAllIfNecessary;
- (void)_toggleFullscreen;
- (void)activateFromMultiPane:(id)arg1;
- (void)wasInstalledInMultiPane:(id)arg1;
- (void)wasUninstalledFromMultiPane:(id)arg1;
- (void)willBeUninstalledFromMultiPane:(id)arg1;
- (void)populateFooterToolbarForMultiPane:(id)arg1;
- (BOOL)wantsFooterToolbarForMultiPane:(id)arg1;
- (void)setMultiPaneController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
