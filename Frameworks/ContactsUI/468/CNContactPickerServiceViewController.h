//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/CNContactPickerContentViewController.h>

#import <ContactsUI/CNContactPickerContentDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactPickerServiceViewController : CNContactPickerContentViewController <CNContactPickerContentDelegate>
{
}

- (void)pickerDidCancel;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (id)_filteredProperty:(id)arg1;
- (id)_filteredContact:(id)arg1 withKeys:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

