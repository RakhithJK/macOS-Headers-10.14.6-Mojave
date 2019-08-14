//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocs/BRQueryItem.h>

@class BRCAppLibrary, BRCItemGlobalID, BRFileObjectID, NSMutableSet, NSSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BRCNotification : BRQueryItem
{
    BOOL _isInDocumentScope;
    BOOL _isInDataScope;
    BOOL _isInTrashScope;
    BRCItemGlobalID *_itemGlobalID;
    BRCItemGlobalID *_parentGlobalID;
    unsigned long long _oldParentFileID;
    NSSet *_parentGlobalIDs;
    NSMutableSet *_appLibraryIDsWithReverseAliases;
    BRCAppLibrary *_appLibrary;
    NSString *_oldAppLibraryID;
    NSString *_aliasSourceAppLibraryID;
    NSString *_unsaltedBookmarkData;
}

+ (id)notificationWithAliasItem:(id)arg1 targetItemNotification:(id)arg2;
+ (id)notificationFromItem:(id)arg1 relpath:(id)arg2;
+ (id)notificationGatheredFromItem:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL isInTrashScope; // @synthesize isInTrashScope=_isInTrashScope;
@property(readonly, nonatomic) BOOL isInDataScope; // @synthesize isInDataScope=_isInDataScope;
@property(readonly, nonatomic) BOOL isInDocumentScope; // @synthesize isInDocumentScope=_isInDocumentScope;
@property(retain, nonatomic) NSString *unsaltedBookmarkData; // @synthesize unsaltedBookmarkData=_unsaltedBookmarkData;
@property(readonly, nonatomic) NSString *aliasSourceAppLibraryID; // @synthesize aliasSourceAppLibraryID=_aliasSourceAppLibraryID;
@property(readonly, nonatomic) NSString *oldAppLibraryID; // @synthesize oldAppLibraryID=_oldAppLibraryID;
@property(readonly, nonatomic) BRCAppLibrary *appLibrary; // @synthesize appLibrary=_appLibrary;
@property(retain, nonatomic) NSMutableSet *appLibraryIDsWithReverseAliases; // @synthesize appLibraryIDsWithReverseAliases=_appLibraryIDsWithReverseAliases;
@property(retain, nonatomic) NSSet *parentGlobalIDs; // @synthesize parentGlobalIDs=_parentGlobalIDs;
@property(readonly, nonatomic) unsigned long long oldParentFileID; // @synthesize oldParentFileID=_oldParentFileID;
@property(readonly, nonatomic) BRCItemGlobalID *parentGlobalID; // @synthesize parentGlobalID=_parentGlobalID;
@property(readonly, nonatomic) BRCItemGlobalID *itemGlobalID; // @synthesize itemGlobalID=_itemGlobalID;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isDocumentsFolder;
- (void)generateLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (void)merge:(id)arg1;
- (BOOL)canMerge:(id)arg1;
- (id)notificationByStrippingSharingInfoIfNeeded;
- (id)initWithAliasItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (void)_addAliasDecoration:(id)arg1;
- (void)setNumberAttribute:(id)arg1 forKey:(id)arg2;
- (id)initWithLocalItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)classForCoder;
@property(readonly, nonatomic) BRFileObjectID *parentFileObjectID;
@property(readonly, nonatomic) BRFileObjectID *oldParentFileObjectID;
- (id)subclassDescription;

// Remaining properties
@property(readonly, nonatomic) NSURL *url; // @dynamic url;

@end

