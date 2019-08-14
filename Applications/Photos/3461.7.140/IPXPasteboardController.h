//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSPasteboard, NSString;
@protocol IPXCollection;

@interface IPXPasteboardController : NSObject
{
    NSMutableArray *_modelReferences;
    NSArray *_cachedModels;
    NSString *_pageLayoutPhotoID;
    BOOL _checkedForDeletedVersions;
    BOOL _versionsAreInTrash;
    long long _pasteboardChangeCount;
    NSPasteboard *_pasteboard;
    NSString *_uuid;
    unsigned long long _lifetimeSequence;
}

+ (id)databaseForUuid:(id)arg1;
+ (void)cacheDatabase:(id)arg1 forUuid:(id)arg2;
+ (id)databaseCache;
@property(nonatomic) unsigned long long lifetimeSequence; // @synthesize lifetimeSequence=_lifetimeSequence;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSPasteboard *pasteboard; // @synthesize pasteboard=_pasteboard;
@property long long pasteboardChangeCount; // @synthesize pasteboardChangeCount=_pasteboardChangeCount;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *filePromiseReceivers;
@property(readonly, nonatomic) NSArray *fileURLs;
- (BOOL)containsExternalFolders;
- (BOOL)containsExternalFiles;
- (id)allHeaders;
- (BOOL)containsSharedVersions;
- (BOOL)containsDeletedVersions;
- (BOOL)containsMagicAlbums;
- (BOOL)containsSharedAlbums;
- (BOOL)containsVersions;
- (BOOL)containsFolders;
- (BOOL)containsAlbums;
- (BOOL)containsAlbumsOrFolders;
- (BOOL)containsLibraryItems;
- (BOOL)_needExportForVersion:(id)arg1;
- (id)_versions;
- (id)_reconstructModel:(id)arg1;
- (id)_databaseForModelInfo:(id)arg1;
- (id)allSharedStreams;
@property(readonly, nonatomic) id <IPXCollection> allModelsCollections;
- (id)allContainedVersions;
- (id)allModelsOfClass:(Class)arg1;
- (id)allModels;
- (BOOL)containsOnlyItemsWithTypes:(unsigned long long)arg1;
- (BOOL)containsAnyItemsWithTypes:(unsigned long long)arg1;
- (unsigned long long)numberOfItemsWithTypes:(unsigned long long)arg1;
- (id)_itemsWithTypes:(unsigned long long)arg1;
- (id)_pasteboardContentsArray;
- (void)clearPasteboard;
- (void)populatePasteboard;
- (void)addHeaderItem:(id)arg1;
- (void)addSharedStream:(id)arg1;
- (void)addDatabaseModel:(id)arg1;
- (void)addDatabaseModels:(id)arg1;
- (void)_didChange;
- (id)initWithPasteboard:(id)arg1;
- (BOOL)copyVersionsToSharedStream:(id)arg1 context:(id)arg2;
- (BOOL)copyVersionsToAlbum:(id)arg1 context:(id)arg2;
- (BOOL)copyVersionsToLibraryWithContext:(id)arg1;
- (unsigned long long)validateActionTargetingFolder:(id)arg1 childIndex:(long long)arg2;
- (unsigned long long)validateActionTargetingSharedStream:(id)arg1;
- (unsigned long long)validateActionTargetingAlbum:(id)arg1;
- (unsigned long long)validateActionTargetingLibrary;
- (BOOL)containsValidVersionsOrFilesForNewAlbumInParentFolder:(id)arg1;
- (void)_trashVersions:(id)arg1 view:(id)arg2;

@end

