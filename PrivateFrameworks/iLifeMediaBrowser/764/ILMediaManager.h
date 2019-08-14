//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ILChangeManager, ILMediaGroup, ILPluginLoadManager, NSBundle, NSDate, NSLock, NSMutableArray, NSMutableDictionary, NSString;

@interface ILMediaManager : NSObject
{
    ILMediaGroup *_rootMediaGroup;
    NSMutableDictionary *_mediaGroupsDict;
    NSMutableDictionary *_mediaObjectsDict;
    ILPluginLoadManager *_loadState;
    NSLock *_mediaDictsAccessLock;
    BOOL _reserved7;
    BOOL _reserved8;
    NSMutableDictionary *_reserved9;
    BOOL _reserved10;
    BOOL _reserved11;
    NSMutableArray *_reserved12;
    BOOL _reserved13;
    BOOL _reserved14;
    NSMutableDictionary *_extendedAttributes;
    double _loadThreadPriority;
    NSBundle *_pluginBundle;
    NSString *_pluginSourceIdentifier;
    NSDate *_modificationDate;
    BOOL _reserved15;
    BOOL _reserved16;
    BOOL _reserved17;
    ILChangeManager *_changeManager;
    id _reserved1;
    id _reserved2;
    id _reserved3;
}

+ (id)photoStreamEnabledServices;
+ (id)supportedPasteboardTypes;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (BOOL)isManagedMediaSource;
- (id)photoStreamLibraryId;
- (BOOL)isEmbeddedPlugin;
- (BOOL)isFolderSourcePlugin;
- (BOOL)isApplePlugin;
- (BOOL)isAppDefFolderPlugin;
- (BOOL)isMoviesFolderPlugin;
- (BOOL)isPhotoBoothPlugin;
- (BOOL)isFolderPlugin;
- (BOOL)isGarageBandPlugin;
- (BOOL)isiMoviePlugin;
- (BOOL)isAperturePlugin;
- (BOOL)isiTunesPlugin;
- (BOOL)isiPhotoPlugin;
- (BOOL)isPhotosPlugin;
- (void)setLoadState:(int)arg1;
- (void)setLoading:(BOOL)arg1;
- (BOOL)shouldDisplayChildGroupsForMediaGroup:(id)arg1;
- (id)localizedString:(id)arg1;
- (BOOL)hasMediaObjectsInMediaGroup:(id)arg1 forBrowserType:(unsigned long long)arg2;
- (id)filteredMediaObjectsOfMediaGroup:(id)arg1 forBrowserType:(unsigned long long)arg2;
- (id)_recursiveMediaGroup:(id)arg1 toFindMediaObjectID:(id)arg2;
- (id)_recursiveMediaGroup:(id)arg1 toFindMediaGroupID:(id)arg2;
- (void)_recursiveToCollectSubTreeInfoForMediaGroup:(id)arg1 objsDict:(id)arg2 groupsDict:(id)arg3;
- (void)_recursiveToCollectSubTreeInfoForMediaGroup:(id)arg1 objsSet:(id)arg2 groupsSet:(id)arg3 groupsArray:(id)arg4;
- (void)resetQueryCanceler;
- (BOOL)mediaObjectsLoadingWasCanceled:(id)arg1;
- (BOOL)shouldCancelMediaObjectsLoadingForGroup:(id)arg1;
- (void)signalQueryCancelerForMediaGroup:(id)arg1;
- (void)cancelMediaGroupLoadingExcludingMediaGroups:(id)arg1;
- (BOOL)shouldDisplayMediaObject:(id)arg1 forBrowserType:(unsigned long long)arg2;
- (id)changeManager;
- (id)mediaObjectsProviderForGroup:(id)arg1;
- (BOOL)checkAndCreateRootMediaGroup:(BOOL)arg1;
- (void)setRootMediaGroup:(id)arg1;
- (void)setRootMediaGroupInternal:(id)arg1;
- (void)setMediaObjectsDict:(id)arg1;
- (void)setMediaGroupsDict:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)iconForMediaGroupType:(unsigned long long)arg1;
- (id)iconForMediaGroupTypeIdentifier:(id)arg1;
- (id)mediaObjectsFromPasteboard:(id)arg1;
- (id)mediaGroupsFromPasteboard:(id)arg1;
- (BOOL)writeMediaObjects:(id)arg1 toPasteboard:(id)arg2;
- (BOOL)writeMediaGroups:(id)arg1 toPasteboard:(id)arg2;
- (id)searchOptions:(id)arg1;
- (id)searchOptionsMenu:(id)arg1;
- (id)contextMenuForMediaGroup:(id)arg1;
- (id)contextMenuForMediaObject:(id)arg1 inMediaGroup:(id)arg2;
- (unsigned long long)mediaTypesSupported;
- (id)performLoadData;
- (id)defaultNoDataMessage:(id)arg1;
- (id)defaultLoadingMessage;
- (BOOL)mediaGroupSupportsSkimming:(id)arg1;
- (id)badgeIconForMediaGroup:(id)arg1 inMode:(unsigned long long)arg2;
- (id)thumbnailOverlayForMediaObject:(id)arg1 inMediaGroups:(id)arg2 atSize:(struct CGSize)arg3;
- (id)badgeInfoForMediaObject:(id)arg1 inMediaGroups:(id)arg2 thumbnailRect:(struct CGRect)arg3;
- (id)displayItemCountStringForMediaGroups:(id)arg1 withItemCount:(unsigned long long)arg2;
- (unsigned long long)displayMediaTypesForBrowserType:(unsigned long long)arg1;
- (id)rootMediaGroupIcon;
- (id)rootMediaGroupTitle;
- (id)modificationDate;
- (void)setModificationDate:(id)arg1;
- (id)pluginIdentifier;
- (id)pluginBundle;
- (void)cacheDeletePeriodic:(id)arg1 urgency:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cacheDeleteCancel;
- (void)cacheDeletePurge:(id)arg1 urgency:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cacheDeletePurgeable:(id)arg1 urgency:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)volumeDidMount:(id)arg1;
- (void)volumeWillUnmount:(id)arg1;
- (void)watchedQueryChanged:(id)arg1 queryScope:(id)arg2;
- (void)watchedQueryChanged:(id)arg1;
- (BOOL)appInstalled;
- (BOOL)canLoadData;
- (id)uniqueID;
- (void)stopWatchingMediaGroupAndChildGroups:(id)arg1;
- (void)removeMediaGroup:(id)arg1;
- (void)addMediaGroup:(id)arg1;
- (void)_unloadDataThreaded;
- (void)_loadDataThreaded;
- (void)_performLoadData;
- (id)iconNamed:(id)arg1;
- (long long)maxRating;
- (void)setLoadingDisabled:(BOOL)arg1;
- (id)applicationVersion;
- (double)loadThreadPriority;
- (void)setLoadThreadPriority:(double)arg1;
- (id)mediaLibraryAttributes;
- (id)extendedAttributeForKey:(id)arg1;
- (void)setExtendedAttributes:(id)arg1;
- (void)_resetObjectsAndGroupsDictionaries;
- (void)removeMediaGroupFromIDMap:(id)arg1;
- (id)newMediaObjectWithType:(unsigned long long)arg1 name:(id)arg2 objectID:(id)arg3;
- (id)newMediaObjectWithType:(unsigned long long)arg1 name:(id)arg2 objectID:(id)arg3 objectClass:(Class)arg4;
- (void)changeID:(id)arg1 forMediaGroup:(id)arg2;
- (id)newMediaGroupWithTypeIdentifier:(id)arg1 groupID:(id)arg2;
- (id)mediaObjectForID:(id)arg1;
- (id)mediaGroupForID:(id)arg1;
- (id)mediaObjects;
- (id)mediaGroups;
- (id)rootMediaGroup;
- (BOOL)firstTimeCallingLoadData;
- (BOOL)isCancelLoadRequestPending;
- (BOOL)isLoadingDisabled;
- (BOOL)isAutoReloadEnabled;
- (void)setAutoReloadEnabled:(BOOL)arg1;
- (BOOL)needsReload;
- (void)setNeedsReload:(BOOL)arg1;
- (BOOL)isLoaded;
- (BOOL)isLoading;
- (int)loadState;
- (void)unloadData;
- (void)_loadDataIfNeeded;
- (void)cancelLoadData;
- (void)loadData;
- (void)reloadData;
- (BOOL)_loadData;
- (void)dealloc;
- (id)init;

@end

