//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class CRDevice, NSButton, NSMutableArray, NSObjectController, NSProgressIndicator, NSString, NSTabView, NSTextField, NSView, NSWindow, RUDeviceOperation;

@interface RURaidManagementWindowController : NSWindowController
{
    CRDevice *_device;
    RUDeviceOperation *_currentOperation;
    NSMutableArray *_operations;
    double _totalLength;
    double _amountCompleted;
    double _lastOpCompleted;
    BOOL _indeterminate;
    BOOL _preflighting;
    NSString *_statusMessage;
    NSWindow *_parent;
    NSTabView *tabView;
    NSView *progressContainer;
    NSProgressIndicator *spinner;
    NSTextField *progressInfo;
    NSObjectController *selfController;
    NSButton *okButton;
    NSButton *cancelButton;
    NSButton *helpButton;
}

- (void)operationDidFinish:(id)arg1;
- (void)operationDidProgress:(id)arg1;
- (void)operationWillBegin:(id)arg1;
- (void)completeProgressWithError:(id)arg1;
- (void)beginProgress;
- (void)helpButtonClick:(id)arg1;
- (void)cancelButtonClick:(id)arg1;
- (void)okButtonClick:(id)arg1;
- (void)managerPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)release;
- (id)retain;
- (void)beginSheetModalForWindow:(id)arg1;
- (void)runModal;
- (void)setOperations:(id)arg1;
- (id)operations;
- (id)currentOperation;
- (void)setCurrentOperation:(id)arg1;
- (BOOL)canCancel;
- (void)setStatusMessage:(id)arg1;
- (id)statusMessage;
- (void)setIndeterminate:(BOOL)arg1;
- (BOOL)indeterminate;
- (BOOL)preflighting;
- (void)setPreflighting:(BOOL)arg1;
- (void)setAmountCompleted:(double)arg1;
- (double)amountCompleted;
- (void)setTotalLength:(double)arg1;
- (double)totalLength;
- (BOOL)running;
- (BOOL)canShowHelp;
- (id)infoString;
- (void)setupOperations;
- (void)manageRAID;
- (id)device;
- (void)setDevice:(id)arg1;
- (void)dealloc;

@end

