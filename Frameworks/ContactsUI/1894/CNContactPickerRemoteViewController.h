//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ViewBridge/NSRemoteViewController.h>

#import <ContactsUI/CNContactPickerInternalResponseDelegate-Protocol.h>
#import <ContactsUI/CNContactPickerInternalSetup-Protocol.h>
#import <ContactsUI/CNContactPickerViewController-Protocol.h>

@class NSString, NSXPCConnection;
@protocol CNContactPickerInternalResponseDelegate;

@interface CNContactPickerRemoteViewController : NSRemoteViewController <CNContactPickerViewController, CNContactPickerInternalSetup, CNContactPickerInternalResponseDelegate>
{
    id <CNContactPickerInternalResponseDelegate> _responseDelegate;
    NSXPCConnection *_connection;
}

+ (id)internalResponseDelegateInterface;
@property __weak id <CNContactPickerInternalResponseDelegate> responseDelegate; // @synthesize responseDelegate=_responseDelegate;
- (void).cxx_destruct;
- (void)traceUsageStatistics;
- (void)resetUsageStatistics;
- (void)setSearchFieldVisible:(BOOL)arg1;
- (void)registerSectionsForDraggedTypes:(id)arg1;
- (void)showSectionWithIdentifier:(id)arg1;
- (void)addSection:(id)arg1;
- (void)didShowSectionWithIdentifier:(id)arg1;
- (void)didSearchForString:(id)arg1;
- (void)didSelectContact:(id)arg1 key:(id)arg2 value:(id)arg3 identifier:(id)arg4;
- (void)pickerDidCreate;
- (void)setDisplayedKeys:(id)arg1;
- (void)establishConnection;
- (id)pickerControlProxy;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

