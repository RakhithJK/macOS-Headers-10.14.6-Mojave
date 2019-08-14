//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSSecureTextField, NSTextField, NSView, NSWindow;

@interface PasswordWindowController : NSWindowController
{
    NSView *askPasswordView;
    NSSecureTextField *askPasswordPasswordField;
    NSTextField *askPasswordPrompt;
    NSButton *cancelButton;
    NSButton *okButton;
    long long minimumPasswordLength;
    int mode;
    struct _NSModalSession *session;
    NSWindow *hostingWindow;
}

@property(retain, nonatomic) NSWindow *hostingWindow; // @synthesize hostingWindow;
@property(nonatomic) int mode; // @synthesize mode;
@property(nonatomic) long long minimumPasswordLength; // @synthesize minimumPasswordLength;
@property(retain, nonatomic) NSButton *okButton; // @synthesize okButton;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton;
@property(retain, nonatomic) NSTextField *askPasswordPrompt; // @synthesize askPasswordPrompt;
@property(retain, nonatomic) NSSecureTextField *askPasswordPasswordField; // @synthesize askPasswordPasswordField;
@property(retain, nonatomic) NSView *askPasswordView; // @synthesize askPasswordView;
- (void)endWindow;
- (void)runWindow;
- (void)controlTextDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1;

@end

