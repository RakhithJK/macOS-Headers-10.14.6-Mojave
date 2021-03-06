//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class IHInstallController, NSDateComponentsFormatter, NSProgressIndicator, NSTextField, NSView;

@interface IHWindowController : NSWindowController
{
    NSDateComponentsFormatter *durationFormatter;
    NSView *_installView;
    NSTextField *_installMessageText;
    NSTextField *_installInformativeText;
    NSView *_progressView;
    double _percentComplete;
    NSTextField *_progressTitleField;
    NSTextField *_progressStatusField;
    NSProgressIndicator *_progressBar;
    NSView *_installCompleteView;
    IHInstallController *_installer;
}

@property(retain) IHInstallController *installer; // @synthesize installer=_installer;
@property(retain) NSView *installCompleteView; // @synthesize installCompleteView=_installCompleteView;
@property NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property NSTextField *progressStatusField; // @synthesize progressStatusField=_progressStatusField;
@property NSTextField *progressTitleField; // @synthesize progressTitleField=_progressTitleField;
@property double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(retain) NSView *progressView; // @synthesize progressView=_progressView;
@property NSTextField *installInformativeText; // @synthesize installInformativeText=_installInformativeText;
@property NSTextField *installMessageText; // @synthesize installMessageText=_installMessageText;
@property(retain) NSView *installView; // @synthesize installView=_installView;
- (void).cxx_destruct;
- (void)enableNonProductionMarker;
- (void)presentError:(id)arg1;
- (void)_didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)setProgress:(double)arg1 currentState:(long long)arg2 estimatedTimeForState:(double)arg3;
- (void)switchToCompletedView;
- (void)switchToProgressView;
- (void)_switchFromView:(id)arg1 toView:(id)arg2;
- (void)didClickDone:(id)arg1;
- (void)didClickStopInstall:(id)arg1;
- (void)didClickGetXcode:(id)arg1;
- (void)didClickCancel:(id)arg1;
- (void)didClickInstall:(id)arg1;
- (void)finishInstallUI;
- (void)resetForController:(id)arg1 withName:(id)arg2;

@end

