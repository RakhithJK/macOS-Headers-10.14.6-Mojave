//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookCore/ABAccountFactory.h>

@interface ABTargetedAccountFactory : ABAccountFactory
{
}

- (BOOL)shouldUseACAccountPersistence;
- (id)uncachedLdapAccounts;
- (id)directoryServicesAccount;
- (id)makeComponentsValidationHelperWithComponents:(id)arg1;
- (Class)builderOverrideSourceClass;
- (id)accountBuilderForAccountAtPath:(id)arg1 withIdentifier:(id)arg2;

@end

