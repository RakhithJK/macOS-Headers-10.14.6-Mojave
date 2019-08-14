//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSView.h>

@class NSButton, NSDatePicker, NSPopUpButton, NSTextField;

@interface SetDateOptions : NSView
{
    NSDatePicker *mDatePicker;
    NSButton *mAddTimeSwitch;
    NSTextField *mAddTimeValue;
    NSPopUpButton *mAddTimeQuanta;
    NSTextField *mAddTimePrompt;
    NSButton *mEmbedSwitch;
    BOOL mCanAddTime;
}

- (int)addTimeQuanta;
- (int)addTimeValue;
- (BOOL)addTime;
- (BOOL)embed;
- (void)_selectQuanta:(int)arg1;
- (id)date;
- (void)addTimeValueChanged:(id)arg1;
- (void)addTimeSwitchChanged:(id)arg1;
- (void)setCanAddTime:(BOOL)arg1;
- (void)saveToPrefs;
- (void)loadFromPrefs;
- (void)dealloc;
- (void)awakeFromNib;

@end
