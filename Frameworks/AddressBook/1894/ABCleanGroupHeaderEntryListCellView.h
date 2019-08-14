//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import <AddressBook/ABMainWindowGroupListCellView-Protocol.h>

@class NSButton, NSStackView, NSString, NSTextField, NSView;

@interface ABCleanGroupHeaderEntryListCellView : NSTableCellView <ABMainWindowGroupListCellView>
{
    NSStackView *_stackView;
    NSButton *_groupPlusButton;
    BOOL _shouldShowGroupPlusButton;
    NSView *_accessoryView;
}

@property(retain, nonatomic) NSView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) NSButton *groupPlusButton; // @synthesize groupPlusButton=_groupPlusButton;
@property(nonatomic) NSStackView *stackView; // @synthesize stackView=_stackView;
- (void)mouseExited:(id)arg1 rowView:(id)arg2;
- (void)mouseEntered:(id)arg1 rowView:(id)arg2;
- (void)updateAppearanceWithRowView:(id)arg1;
- (void)setGroupEntry:(id)arg1;
- (void)constraintViewSizeToSquare:(id)arg1;
- (void)addAccessoryViewToStackView;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) NSTextField *textField;

@end

