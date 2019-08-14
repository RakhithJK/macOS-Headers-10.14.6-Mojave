//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookCore/ABRecord.h>

@interface ABInfo : ABRecord
{
}

+ (id)nts_Info;
+ (id)nts_InfoWithAddressBook:(id)arg1;
+ (id)nts_InfoWithAddressBook:(id)arg1 forAccount:(id)arg2;
+ (id)infoUniqueIdForAccount:(id)arg1;
+ (Class)remoteObjectClass;
+ (id)makeInfoWithAddressBook:(id)arg1 forAccount:(id)arg2;
+ (id)fetchInfoWithAddressBook:(id)arg1 forAccount:(id)arg2;
+ (id)findValidInfo:(id)arg1;
+ (id)info;
+ (id)infoWithAddressBook:(id)arg1;
+ (id)builtInProperties;
- (BOOL)isReadOnly;
- (BOOL)validateValue:(id *)arg1 forProperty:(id)arg2 error:(id *)arg3;
- (id)nts_DescriptionDictionary;
- (id)nts_ParentGroups;
- (id)fetchUpdatedBackingObject;
- (BOOL)remoteBackingObjectIsStale;

@end

