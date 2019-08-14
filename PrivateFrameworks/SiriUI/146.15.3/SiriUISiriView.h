//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <SiriUI/AFUISiriRemoteViewHosting-Protocol.h>
#import <SiriUI/SiriUIFlamesAndAuraViewDelegate-Protocol.h>
#import <SiriUI/SiriUISiriStatusViewDelegate-Protocol.h>

@class NSString, SiriUIButton, SiriUIConfiguration, SiriUIFlamesAndAuraView, SiriUIHelpButton, SiriUISiriStatusView;
@protocol SiriUISiriViewDelegate;

__attribute__((visibility("hidden")))
@interface SiriUISiriView : NSView <SiriUISiriStatusViewDelegate, SiriUIFlamesAndAuraViewDelegate, AFUISiriRemoteViewHosting>
{
    BOOL _disabled;
    BOOL _statusViewHidden;
    BOOL _keepStatusViewHidden;
    NSView *_remoteContentView;
    SiriUISiriStatusView *_statusView;
    SiriUIHelpButton *_helpButton;
    SiriUIButton *_reportBugButton;
    SiriUIButton *_closeButton;
    SiriUIConfiguration *_configuration;
    id <SiriUISiriViewDelegate> _delegate;
    long long _siriSessionState;
    long long _mode;
    SiriUIFlamesAndAuraView *_flamesAndAuraView;
}

@property(retain) SiriUIFlamesAndAuraView *flamesAndAuraView; // @synthesize flamesAndAuraView=_flamesAndAuraView;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long siriSessionState; // @synthesize siriSessionState=_siriSessionState;
@property(nonatomic) BOOL keepStatusViewHidden; // @synthesize keepStatusViewHidden=_keepStatusViewHidden;
@property(nonatomic) BOOL statusViewHidden; // @synthesize statusViewHidden=_statusViewHidden;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <SiriUISiriViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) SiriUIConfiguration *configuration; // @synthesize configuration=_configuration;
@property __weak SiriUIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain) SiriUIButton *reportBugButton; // @synthesize reportBugButton=_reportBugButton;
@property(retain) SiriUIHelpButton *helpButton; // @synthesize helpButton=_helpButton;
@property(retain) SiriUISiriStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) NSView *remoteContentView; // @synthesize remoteContentView=_remoteContentView;
- (void).cxx_destruct;
- (struct CGRect)flamesBoundsForViewBounds:(struct CGRect)arg1;
- (void)flamesAndAuraDidDisappear;
- (float)audioLevel;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1;
- (void)setBugReportingAvailable:(BOOL)arg1;
- (void)reportBugButtonTapped:(id)arg1;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_showsReportBugButton;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)siriStatusView:(id)arg1 didReceiveTextInput:(id)arg2;
- (void)siriStatusViewHoldDidEnd:(id)arg1;
- (void)siriStatusViewHoldDidBegin:(id)arg1;
- (void)siriStatusViewWasClicked:(id)arg1;
- (void)closeButtonTapped:(id)arg1;
- (void)setHideCloseButton:(BOOL)arg1;
- (void)helpButtonTapped:(id)arg1;
- (void)pulseHelpButton;
- (void)setHelpButtonEmphasized:(BOOL)arg1;
- (void)_animateButtonsHidden:(BOOL)arg1;
- (void)_updateControlsAppearance;
- (void)_updateFlamesAndAuraViewState;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_createFlamesView;
- (void)_createCloseButtonImage;
- (void)awakeFromNib;
- (void)cleanupFlames;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

