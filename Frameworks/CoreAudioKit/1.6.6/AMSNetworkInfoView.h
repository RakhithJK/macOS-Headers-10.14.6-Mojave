//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class AudioBox, NSBundle, NSButton, NSTextField;

__attribute__((visibility("hidden")))
@interface AMSNetworkInfoView : NSView
{
    NSButton *infoButton;
    NSTextField *deviceInfoLabel;
    NSTextField *serialLabel;
    NSTextField *firmwareLabel;
    NSTextField *deviceNameField;
    NSTextField *serialNumberField;
    NSTextField *firmwareField;
    NSTextField *noSelectionLabel;
    AudioBox *box;
    NSBundle *currentBundle;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)drawRect:(struct CGRect)arg1;
- (void)displayInfoForAudioBox:(id)arg1;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

