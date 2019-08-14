//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSImageView, NSProgressIndicator, NSString, NSTextField;

@interface FTPinWindowController : NSWindowController
{
    NSString *_pin;
    NSString *_alias;
    NSImageView *_faceTimeIconView;
    NSTextField *_messageLabel;
    NSTextField *_PINNumberLabel;
    NSProgressIndicator *_spinner;
    NSTextField *_spinnerLabel;
    NSButton *_cancelButton;
}

@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSTextField *spinnerLabel; // @synthesize spinnerLabel=_spinnerLabel;
@property __weak NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property __weak NSTextField *PINNumberLabel; // @synthesize PINNumberLabel=_PINNumberLabel;
@property __weak NSTextField *messageLabel; // @synthesize messageLabel=_messageLabel;
@property __weak NSImageView *faceTimeIconView; // @synthesize faceTimeIconView=_faceTimeIconView;
@property(retain) NSString *alias; // @synthesize alias=_alias;
@property(retain) NSString *pin; // @synthesize pin=_pin;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)pinVerificationSucceeded:(BOOL)arg1 cancelled:(BOOL)arg2;
- (void)windowDidLoad;
- (id)initWithPIN:(id)arg1 alias:(id)arg2;

@end

