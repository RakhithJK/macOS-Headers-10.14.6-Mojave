//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CalCalendarPopupTarget-Protocol.h"

@class CALMainController, CalCalendarPopUpButton, EKCalendar, NSButton, NSPanel, NSPopUpButton, NSString, NSTableView, NSTextField;

@interface CALiTIPController : NSObject <CalCalendarPopupTarget>
{
    CalCalendarPopUpButton *calendarAddList;
    NSPanel *publishAddAlert;
    NSTextField *_importTitle;
    NSTextField *_importBody;
    EKCalendar *_selectedCalendar;
    CALMainController *_controller;
    NSPopUpButton *_currentList;
    NSTableView *_entitiesTable;
    NSTextField *_head;
    NSTextField *_body;
    NSButton *_currentCheckBox;
    BOOL _notify;
    BOOL _includeEventCalendars;
    NSButton *_okButton;
}

@property(retain, nonatomic) NSButton *okButton; // @synthesize okButton=_okButton;
- (void).cxx_destruct;
- (BOOL)includeEventCalendars;
- (void)calendarSelected:(id)arg1;
- (id)selectedCalendar;
- (void)doCancel:(id)arg1;
- (void)doOk:(id)arg1;
- (long long)runModalImportDialogNumEvents:(unsigned long long)arg1;
- (long long)runModalImportDialog;
- (BOOL)askedNotify;
- (void)handleCheckBox:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

