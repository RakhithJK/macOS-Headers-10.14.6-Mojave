//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVKit/AVPlayerControlsViewController.h>

#import <AVKit/AVTrimViewDelegate-Protocol.h>
#import <AVKit/NSTouchBarDelegate-Protocol.h>

@class AVPlayerControllerTimeResolver, AVTouchBarTrimControlsViewController, AVTrimView, NSButton, NSCustomTouchBarItem, NSString, NSView;
@protocol AVTrimControlsViewControllerDelegate;

@interface AVTrimControlsViewController : AVPlayerControlsViewController <NSTouchBarDelegate, AVTrimViewDelegate>
{
    NSView *_buttonsContainerView;
    AVTrimView *_trimView;
    NSCustomTouchBarItem *_trimControlsTouchBarItem;
    NSButton *_trimButton;
    NSButton *_touchBarTrimButton;
    NSButton *_touchBarRevertButton;
    AVTouchBarTrimControlsViewController *_touchBarTrimControlsViewController;
    AVPlayerControllerTimeResolver *_timeResolver;
    NSView *_initialFirstResponder;
    unsigned long long _trackedPart;
    CDUnknownBlockType _nextKeyViewSetupBlock;
    BOOL _includesTrimAndCancelButtons;
    id <AVTrimControlsViewControllerDelegate> _delegate;
    double _maximumSelectionDuration;
    unsigned long long _preferredTrimViewStyle;
    double _originalMinTime;
    double _originalMaxTime;
    double _selectionStart;
    double _selectionEnd;
}

+ (id)keyPathsForValuesAffectingRevertButtonEnabled;
+ (id)keyPathsForValuesAffectingTrimButtonEnabled;
@property double selectionEnd; // @synthesize selectionEnd=_selectionEnd;
@property double selectionStart; // @synthesize selectionStart=_selectionStart;
@property double originalMaxTime; // @synthesize originalMaxTime=_originalMaxTime;
@property double originalMinTime; // @synthesize originalMinTime=_originalMinTime;
@property BOOL includesTrimAndCancelButtons; // @synthesize includesTrimAndCancelButtons=_includesTrimAndCancelButtons;
@property(readonly) unsigned long long preferredTrimViewStyle; // @synthesize preferredTrimViewStyle=_preferredTrimViewStyle;
@property double maximumSelectionDuration; // @synthesize maximumSelectionDuration=_maximumSelectionDuration;
@property __weak id <AVTrimControlsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)revert:(id)arg1;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (void)trim:(id)arg1;
- (BOOL)trimViewCanStartTracking:(id)arg1;
- (void)trimView:(id)arg1 didZoomBy:(double)arg2;
- (void)trimViewHideTimeIndicatorPopover:(id)arg1;
- (void)trimView:(id)arg1 didChangeTimeIndicatorPopoverValue:(double)arg2;
- (void)trimView:(id)arg1 showTimeIndicatorPopoverWithValue:(double)arg2;
- (void)trimView:(id)arg1 didStopTracking:(unsigned long long)arg2;
- (void)trimView:(id)arg1 willStartTracking:(unsigned long long)arg2;
- (id)initialFirstResponder;
- (void)setupNextKeyView;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)updateTrimButtonState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLayout;
- (void)loadView;
- (BOOL)isRevertButtonEnabled;
@property(readonly, getter=isTrimButtonEnabled) BOOL trimButtonEnabled;
@property(readonly) AVPlayerControllerTimeResolver *timeResolver;
@property(readonly) NSView *trimView;
@property(readonly) NSView *buttonsContainerView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

