//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MGDocumentViewController.h"

#import "MGVisualContentContainer-Protocol.h"

@class AVAudioView, MGPlayerDocument, NSString, NSWindowController;

@interface MGAudioPlaybackViewController : MGDocumentViewController <MGVisualContentContainer>
{
    struct CGSize _initialViewSize;
    unsigned int _inStateRestore:1;
    CDStruct_1b6d18a9 _maximumTrimDuration;
    CDStruct_1b6d18a9 _trimControlsSavedReversePlaybackEndTime;
    CDStruct_1b6d18a9 _trimControlsSavedForwardPlaybackEndTime;
    MGPlayerDocument *_observedDocument;
    NSWindowController *_parentWindowController;
    AVAudioView *_audioView;
}

+ (id)keyPathsForValuesAffectingIsShowingTrimControls;
+ (void)initialize;
@property __weak AVAudioView *audioView; // @synthesize audioView=_audioView;
@property(readonly, nonatomic) __weak NSWindowController *parentWindowController; // @synthesize parentWindowController=_parentWindowController;
- (void).cxx_destruct;
- (void)invalidateRestorableState;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (BOOL)_canPerformSelector:(SEL)arg1;
- (void)gotoPreviousChapter:(id)arg1;
- (void)gotoNextChapter:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)presentTrimDidFailErrorForMediaClip:(id)arg1 dueToUnloadedAssetForMediaClip:(id)arg2;
- (CDStruct_1b6d18a9)mediaClipOffsetInMediaTrack:(id)arg1;
- (void)startTrimForMediaClip:(id)arg1 withMaximumDuration:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startTrim:(id)arg1;
@property(readonly, nonatomic, getter=isShowingTrimControls) BOOL showingTrimControls;
@property(readonly, nonatomic) BOOL canTrim;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)maximumContentSize;
- (struct CGSize)minimumContentSize;
- (BOOL)prefersConstrainedContentAspectRatio;
- (struct CGSize)naturalContentSize;
- (struct CGRect)contentFrameForBoundsSize:(struct CGSize)arg1;
- (struct CGRect)contentFrame;
- (void)close;
- (void)resignMainViewControllerForWindowController:(id)arg1;
- (void)becomeMainViewControllerForWindowController:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

