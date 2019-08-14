//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CNQuickActionButton, NSString, NSTextField;

@interface CNQuickActionView : NSView
{
    BOOL _didCreateConstraints;
    CNQuickActionButton *_actionButton;
    NSTextField *_actionLabel;
    NSString *_actionName;
}

+ (id)makeActionLabel;
@property(nonatomic) BOOL didCreateConstraints; // @synthesize didCreateConstraints=_didCreateConstraints;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) NSTextField *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) CNQuickActionButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (void)updateConstraintsIfNecessary;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (BOOL)wantsDefaultClipping;
- (void)updateConstraints;
- (void)commonInitWithActionName:(id)arg1 actionIcon:(id)arg2;
- (id)initWithActionName:(id)arg1 actionIcon:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

