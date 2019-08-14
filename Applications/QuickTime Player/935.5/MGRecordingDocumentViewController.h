//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MGDocumentViewController.h"

#import "MGVisualContentContainer-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class AVAudioLevelIndicatorView, NSButton, NSMenu, NSString, NSTextField, NSView;

@interface MGRecordingDocumentViewController : MGDocumentViewController <NSMenuDelegate, MGVisualContentContainer>
{
    AVAudioLevelIndicatorView *_audioLevelIndicatorView;
    NSView *_redDotView;
    BOOL _optionPressed;
    BOOL _redDotViewHidden;
    NSTextField *_recordedTimeTextField;
    NSTextField *_recordedFileSizeTextField;
    NSButton *_recordButton;
    NSMenu *_captureOptionsMenu;
}

+ (id)keyPathsForValuesAffectingMaximumContentSize;
+ (id)keyPathsForValuesAffectingMinimumContentSize;
+ (id)recordButtonStopImage;
+ (id)recordButtonRecordImage;
+ (id)recordButtonPauseImage;
@property(readonly) NSMenu *captureOptionsMenu; // @synthesize captureOptionsMenu=_captureOptionsMenu;
@property(getter=isRedDotViewHidden) BOOL redDotViewHidden; // @synthesize redDotViewHidden=_redDotViewHidden;
@property(readonly) NSButton *recordButton; // @synthesize recordButton=_recordButton;
@property(readonly) NSTextField *recordedFileSizeTextField; // @synthesize recordedFileSizeTextField=_recordedFileSizeTextField;
@property(readonly) NSTextField *recordedTimeTextField; // @synthesize recordedTimeTextField=_recordedTimeTextField;
- (void).cxx_destruct;
- (struct CGSize)contentSize;
- (unsigned long long)preferredAutoresizeBehaviorFlags;
- (BOOL)prefersBorderedOverlays;
- (BOOL)prefersUnobscuredContent;
- (struct CGSize)maximumContentSize;
- (struct CGSize)minimumContentSize;
- (BOOL)prefersUserResizableContent;
- (BOOL)prefersConstrainedContentAspectRatio;
- (struct CGSize)naturalContentSize;
- (struct CGRect)contentFrameForBoundsSize:(struct CGSize)arg1;
- (struct CGRect)contentFrame;
- (id)_makeMicrophoneNotAuthorizedTextField;
- (id)_makeNoAudioDeviceTextField;
- (id)_makeVolumeControl;
- (id)_makeCaptureDeviceErrorImageView;
- (void)captureOptionsButtonPressed:(id)arg1;
- (id)_makeCaptureOptionsButton;
- (id)_makeFinishingRecordingProgressIndicator;
- (id)_makeRedDotView;
- (id)_makeRecordButton;
- (id)_makeRecordingStatusView;
- (void)flagsChanged:(id)arg1;
- (void)resignMainViewControllerForWindowController:(id)arg1;
- (void)becomeMainViewControllerForWindowController:(id)arg1;
- (void)updateAudioLevel:(double)arg1;
- (void)loadView;
@property(getter=isOptionPressed) BOOL optionPressed;
- (id)initWithDocument:(id)arg1 nibName:(id)arg2 bundle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

