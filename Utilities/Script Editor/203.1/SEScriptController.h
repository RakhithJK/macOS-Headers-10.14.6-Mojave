//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OSAKit/OSAScriptController.h>

@class NSButton, NSProgress, NSProgressIndicator, NSTextField, SEDocument;

@interface SEScriptController : OSAScriptController
{
    SEDocument *_document;
    NSButton *_statusButton;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressText;
    NSProgress *__progress;
    struct _NSRange _statusErrorRange;
}

+ (void)initialize;
@property(retain) NSProgress *_progress; // @synthesize _progress=__progress;
- (void)revealErrorSource:(id)arg1;
- (void)_revealSourceRange:(struct _NSRange)arg1 withIndicator:(BOOL)arg2;
- (void)compileScript:(id)arg1;
- (void)runScriptApplication:(id)arg1;
- (void)saveBeforeRunAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)scriptDocument:(id)arg1 didSave:(BOOL)arg2 beforeRunningScriptApplication:(id)arg3;
- (void)doRunScriptApplication;
- (void)runScriptOnMainThread:(id)arg1;
- (void)runScript:(id)arg1;
- (void)runScriptWithContext:(void *)arg1 sender:(id)arg2;
- (void)confirmRunScriptAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)doRunScriptWithContext:(void *)arg1;
- (void)stopScript:(id)arg1;
- (void)recordScript:(id)arg1;
- (void)_clearStatus;
- (id)runScriptReturningResult:(id)arg1 displayValue:(id *)arg2;
- (void)runScriptInBackground:(id)arg1;
- (void)doRunScriptInBackground:(id)arg1;
- (void)_executeScript:(id)arg1;
- (void)_processScriptResults:(id)arg1;
- (void)endProgress;
- (void)beginProgress;
- (void)setProgress:(id)arg1;
- (id)_localizedProgressDescription;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)compile:(id)arg1;
- (id)scriptFromSource;
- (id)document;
- (void)awakeFromNib;

@end

