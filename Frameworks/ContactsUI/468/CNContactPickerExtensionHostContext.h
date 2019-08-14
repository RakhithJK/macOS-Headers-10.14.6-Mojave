//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <ContactsUI/CNContactPickerHostProtocol-Protocol.h>
#import <ContactsUI/CNContactPickerServiceProtocol-Protocol.h>

@class CNContactPickerHostViewController, NSString;

__attribute__((visibility("hidden")))
@interface CNContactPickerExtensionHostContext : NSExtensionContext <CNContactPickerServiceProtocol, CNContactPickerHostProtocol>
{
    CNContactPickerHostViewController *_viewController;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(nonatomic) __weak CNContactPickerHostViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)pickerDidCancel;
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;
- (void)invalidateSelectionAnimated:(BOOL)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;
- (id)_derivedExtensionAuxiliaryHostProtocol;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

