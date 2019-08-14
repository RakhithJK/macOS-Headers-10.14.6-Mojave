//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSImage, NSNumber, NSString, NSURL, SMSystem;

@interface SMUser : NSObject
{
    NSString *_shortNameForImport;
    NSString *_longNameForImport;
    BOOL _dontNeedToCopyUserHome;
    BOOL _homeDirIsRedirected;
    BOOL _homeDirToBeCopiedByMigration;
    BOOL _homeDirToBeSymlinkedByMigration;
    BOOL _fdeSigned;
    BOOL _filevault;
    BOOL _portableHomeUser;
    BOOL _isAdminUser;
    BOOL _isRoleUser;
    BOOL _needsAttention;
    unsigned int _uid;
    unsigned int _gid;
    NSString *_UUID;
    SMSystem *_sourceSystem;
    NSString *_name;
    NSString *_iCloudName;
    NSArray *_iCloudNames;
    NSArray *_iCloudIdentifiers;
    NSString *_fullName;
    NSImage *_accountPicture;
    NSURL *_relativeHomeDir;
    NSNumber *_homeDirSize;
    unsigned long long _userConflictState;
    unsigned long long _userConflictResolutionOptions;
}

+ (id)keyPathsForValuesAffectingLongNameHasConflict;
+ (id)keyPathsForValuesAffectingShortNameHasConflict;
+ (id)keyPathsForValuesAffectingShouldPreserveConflictedHomeDirectory;
+ (id)keyPathsForValuesAffectingShouldOverwriteConflictedShortName;
+ (id)keyPathsForValuesAffectingAllowOverwriteOfConflictedShortName;
@property unsigned long long userConflictResolutionOptions; // @synthesize userConflictResolutionOptions=_userConflictResolutionOptions;
@property(readonly) unsigned long long userConflictState; // @synthesize userConflictState=_userConflictState;
@property BOOL needsAttention; // @synthesize needsAttention=_needsAttention;
@property(readonly) NSNumber *homeDirSize; // @synthesize homeDirSize=_homeDirSize;
@property(readonly) BOOL isRoleUser; // @synthesize isRoleUser=_isRoleUser;
@property(readonly) BOOL isAdminUser; // @synthesize isAdminUser=_isAdminUser;
@property BOOL portableHomeUser; // @synthesize portableHomeUser=_portableHomeUser;
@property BOOL filevault; // @synthesize filevault=_filevault;
@property BOOL fdeSigned; // @synthesize fdeSigned=_fdeSigned;
@property(readonly) NSURL *relativeHomeDir; // @synthesize relativeHomeDir=_relativeHomeDir;
@property(retain) NSImage *accountPicture; // @synthesize accountPicture=_accountPicture;
@property(retain) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain) NSArray *iCloudIdentifiers; // @synthesize iCloudIdentifiers=_iCloudIdentifiers;
@property(retain) NSArray *iCloudNames; // @synthesize iCloudNames=_iCloudNames;
@property(retain) NSString *iCloudName; // @synthesize iCloudName=_iCloudName;
@property(retain) NSString *name; // @synthesize name=_name;
@property BOOL homeDirToBeSymlinkedByMigration; // @synthesize homeDirToBeSymlinkedByMigration=_homeDirToBeSymlinkedByMigration;
@property BOOL homeDirToBeCopiedByMigration; // @synthesize homeDirToBeCopiedByMigration=_homeDirToBeCopiedByMigration;
@property BOOL homeDirIsRedirected; // @synthesize homeDirIsRedirected=_homeDirIsRedirected;
@property BOOL dontNeedToCopyUserHome; // @synthesize dontNeedToCopyUserHome=_dontNeedToCopyUserHome;
@property(readonly) SMSystem *sourceSystem; // @synthesize sourceSystem=_sourceSystem;
@property(retain) NSString *UUID; // @synthesize UUID=_UUID;
@property unsigned int gid; // @synthesize gid=_gid;
@property unsigned int uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)updateConflictStateForSystem:(id)arg1 consideringOtherUsers:(id)arg2;
- (id)sanitizedLoginStringForComparison:(id)arg1;
@property(readonly) BOOL longNameHasConflict;
@property(readonly) BOOL shortNameHasConflictWithOtherShortName;
@property(readonly) BOOL shortNameHasConflict;
- (void)resetNamesForImport;
@property(retain) NSString *longNameForImport;
@property(retain) NSString *shortNameForImport;
@property BOOL shouldPreserveConflictedHomeDirectory;
@property BOOL shouldOverwriteConflictedShortName;
@property BOOL allowOverwriteOfConflictedShortName;
@property(readonly) BOOL isRoot;
- (id)sizeForSubPath:(id)arg1;

@end

