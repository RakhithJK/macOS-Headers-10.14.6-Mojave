//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSImageView, NSTextField, NSWindow;

@interface RestartBaseStationViewController : NSViewController
{
    NSWindow *_window;
    NSImageView *_icon;
    NSTextField *_message;
    NSButton *_dontWarnCheckbox;
    NSButton *_ok;
    NSButton *_cancel;
    id _contextInfo;
    NSWindow *hostingWindow;
}

@property(retain, nonatomic) id contextInfo; // @synthesize contextInfo=_contextInfo;
@property(retain, nonatomic) NSWindow *hostingWindow; // @synthesize hostingWindow;
- (void)cancelSheet:(id)arg1;
- (void)finishSheet:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 attachToWindow:(id)arg3 contextInfo:(id)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 attachToWindow:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

