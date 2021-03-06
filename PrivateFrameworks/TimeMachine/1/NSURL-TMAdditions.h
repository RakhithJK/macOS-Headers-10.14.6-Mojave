//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (TMAdditions)
- (BOOL)tm_compareToItem:(id)arg1 options:(unsigned long long)arg2 itemsMatch:(out char *)arg3 error:(out id *)arg4;
- (id)tm_physicalBlocksError:(id *)arg1;
- (void)tm_unlockAndRelockWithAccessor:(CDUnknownBlockType)arg1;
- (BOOL)tm_removeExtendedAttribute:(id)arg1 options:(int)arg2 error:(out id *)arg3;
- (BOOL)tm_setDataValue:(id)arg1 forExtendedAttribute:(id)arg2 options:(int)arg3 error:(out id *)arg4;
- (BOOL)tm_getDataValue:(out id *)arg1 forExtendedAttribute:(id)arg2 options:(int)arg3 error:(out id *)arg4;
- (BOOL)tm_setStringValue:(id)arg1 forExtendedAttribute:(id)arg2 terminate:(BOOL)arg3 options:(int)arg4 error:(out id *)arg5;
- (BOOL)tm_getStringValue:(out id *)arg1 forExtendedAttribute:(id)arg2 options:(int)arg3 error:(out id *)arg4;
- (id)tm_stringValueForExtendedAttribute:(id)arg1;
- (id)tm_extendedAttributeKeys;
- (BOOL)tm_boolResourceValueForKey:(id)arg1;
- (BOOL)tm_setResourceValue:(id)arg1 forKey:(id)arg2;
- (id)tm_resourceValueForKey:(id)arg1;
- (id)tm_URLByResolvingBonjourURL;
- (id)tm_URLByResolvingBonjourURLWithTimeout:(double)arg1;
- (id)tm_URLByRemovingSRPAuthSpecifier;
- (id)tm_URLByAddingSRPAuthSpecifier;
- (BOOL)tm_hasSRPAuthSpecifier;
- (id)tm_URLByInsertingPassword:(id)arg1;
- (id)tm_URLByDeletingPassword;
- (id)tm_hostNameForDisplay;
- (id)tm_URLForRemounting;
- (BOOL)tm_isValidMountPoint;
- (BOOL)tm_FULLFSYNC;
- (id)tm_volumeLastModifiedDate;
- (id)tm_volumeName;
- (id)tm_volumeUUID;
- (BOOL)tm_isCaseSensitiveVolume;
- (BOOL)tm_isLocalVolume;
- (unsigned long long)tm_totalVolumeCapacity;
- (unsigned long long)tm_availableVolumeCapacity;
- (id)tm_volumeURL;
- (BOOL)tm_isVolume;
- (BOOL)tm_setUserImmutable:(BOOL)arg1;
- (BOOL)tm_isUserImmutable;
- (unsigned long long)tm_fileSize;
- (unsigned short)tm_linkCount;
- (BOOL)tm_isPackage;
- (BOOL)tm_isSymbolicLink;
- (BOOL)tm_isDirectory;
@end

