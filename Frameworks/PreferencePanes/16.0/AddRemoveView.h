//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSPopUpButtonCell, NSSegmentedControl;

@interface AddRemoveView : NSView
{
    NSSegmentedControl *mAddRemoveControl;
    id mTarget;
    SEL mAddAction;
    SEL mDeleteAction;
    BOOL mShowsActionButton;
    BOOL mShowsArrow;
    NSPopUpButtonCell *mActionPopupCell;
}

@property(nonatomic) BOOL popupButtonShowsArrow; // @synthesize popupButtonShowsArrow=mShowsArrow;
@property(nonatomic) BOOL showsActionButton; // @synthesize showsActionButton=mShowsActionButton;
@property(nonatomic) SEL deleteAction; // @synthesize deleteAction=mDeleteAction;
@property(nonatomic) SEL addAction; // @synthesize addAction=mAddAction;
@property(retain, nonatomic) id target; // @synthesize target=mTarget;
- (void).cxx_destruct;
@property(nonatomic, getter=isActionButtonEnabled) BOOL actionButtonEnabled; // @dynamic actionButtonEnabled;
- (void)setActionButtonMenu:(id)arg1;
- (BOOL)setActionButtonAXOverrideValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)setDeleteButtonAXOverrideValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)setAddButtonAXOverrideValue:(id)arg1 forAttribute:(id)arg2;
- (void)setActionButtonKeyEquivalent:(id)arg1;
- (void)setDeleteButtonKeyEquivalent:(id)arg1;
- (void)setAddButtonKeyEquivalent:(id)arg1;
- (void)setActionButtonToolTip:(id)arg1;
- (void)setDeleteButtonToolTip:(id)arg1;
- (void)setAddButtonToolTip:(id)arg1;
@property(nonatomic, getter=isDeleteButtonEnabled) BOOL deleteButtonEnabled; // @dynamic deleteButtonEnabled;
@property(nonatomic, getter=isAddButtonEnabled) BOOL addButtonEnabled; // @dynamic addButtonEnabled;
- (void)setMenu:(id)arg1;
- (void)_createButtons;
- (void)_segmentAction:(id)arg1;

@end

