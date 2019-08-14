//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXObjectsControllerChangeReceiver-Protocol.h"

@class IPXCollection, IPXDatabaseCollectionsController, IPXDatabaseMomentsController, IPXDatabaseYearsController, IPXLibrary, NSCalendar, NSMutableDictionary, NSString, PFCoalescer, PFDirectMessagingMulticaster, PFDispatchQueue;
@protocol IPXMomentsScrubberTileCacheMulticaster;

@interface IPXMomentsScrubberTileCache : NSObject <IPXObjectsControllerChangeReceiver>
{
    BOOL _placeholdersHaveStartedToBeDelivered;
    BOOL _shouldTintDiskCachePreviews;
    BOOL _rtlMode;
    unsigned long long _viewMode;
    NSMutableDictionary *_cacheDictionary;
    IPXLibrary *_library;
    IPXDatabaseYearsController *_databaseYearsController;
    IPXDatabaseCollectionsController *_databaseCollectionsController;
    IPXDatabaseMomentsController *_databaseMomentsController;
    PFDispatchQueue *_dispatchQueue;
    NSCalendar *_dateCalendar;
    long long _cacheHeight;
    struct PFDirectMessagingMulticaster *_multicaster;
    long long _contentsScale;
    double _previewSliceHeight;
    unsigned long long _collectionSequenceCount;
    PFCoalescer *_collectionUpdateCoalescer;
    IPXCollection *_collectionAwaitingUpdate;
}

+ (struct _IPXSignedRange)timeIntervalRangeForYearCollection:(id)arg1 withCalendar:(id)arg2;
+ (struct _IPXSignedRange)yearRangeForYearCollection:(id)arg1 withCalendar:(id)arg2;
+ (long long)numVersionsToInclude;
+ (id)cache;
+ (id)createCacheForLibrary:(id)arg1 cacheHeight:(long long)arg2;
@property BOOL rtlMode; // @synthesize rtlMode=_rtlMode;
@property BOOL shouldTintDiskCachePreviews; // @synthesize shouldTintDiskCachePreviews=_shouldTintDiskCachePreviews;
@property(retain) IPXCollection *collectionAwaitingUpdate; // @synthesize collectionAwaitingUpdate=_collectionAwaitingUpdate;
@property(retain) PFCoalescer *collectionUpdateCoalescer; // @synthesize collectionUpdateCoalescer=_collectionUpdateCoalescer;
@property BOOL placeholdersHaveStartedToBeDelivered; // @synthesize placeholdersHaveStartedToBeDelivered=_placeholdersHaveStartedToBeDelivered;
@property unsigned long long collectionSequenceCount; // @synthesize collectionSequenceCount=_collectionSequenceCount;
@property double previewSliceHeight; // @synthesize previewSliceHeight=_previewSliceHeight;
@property long long contentsScale; // @synthesize contentsScale=_contentsScale;
@property(retain) PFDirectMessagingMulticaster<IPXMomentsScrubberTileCacheMulticaster> *multicaster; // @synthesize multicaster=_multicaster;
@property long long cacheHeight; // @synthesize cacheHeight=_cacheHeight;
@property(retain) NSCalendar *dateCalendar; // @synthesize dateCalendar=_dateCalendar;
@property(retain) PFDispatchQueue *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain) IPXDatabaseMomentsController *databaseMomentsController; // @synthesize databaseMomentsController=_databaseMomentsController;
@property(retain) IPXDatabaseCollectionsController *databaseCollectionsController; // @synthesize databaseCollectionsController=_databaseCollectionsController;
@property(retain) IPXDatabaseYearsController *databaseYearsController; // @synthesize databaseYearsController=_databaseYearsController;
@property(retain) IPXLibrary *library; // @synthesize library=_library;
@property(retain) NSMutableDictionary *cacheDictionary; // @synthesize cacheDictionary=_cacheDictionary;
@property unsigned long long viewMode; // @synthesize viewMode=_viewMode;
- (void).cxx_destruct;
- (id)loadAllEntriesFromDiskCache;
- (void)removeEntryFromDiskCache:(id)arg1;
- (void)saveEntryToDiskCache:(id)arg1;
- (struct _IPXSignedRange)arrayToRange:(id)arg1;
- (id)rangeToArray:(struct _IPXSignedRange)arg1;
- (id)diskCacheArrayRemoving:(struct _IPXSignedRange)arg1 fromArray:(id)arg2;
- (id)thumbnailDiskCacheKeyForEntry:(id)arg1;
- (id)allEntries;
@property(readonly, copy) NSString *debugDescription;
- (id)yearRangeString:(struct _IPXSignedRange)arg1;
- (id)currentPreviewForYearCollection:(id)arg1;
- (id)filterYearCollections:(id)arg1 ycmUuidRanges:(id)arg2 returningDates:(id *)arg3;
- (struct CGImage *)tintPreview:(struct CGImage *)arg1;
- (void)postProcessYearBitmap:(struct CGContext *)arg1 forYearRange:(struct _IPXSignedRange)arg2;
- (struct CGContext *)newBitmapWithPlaceholdersForVersionCount:(long long)arg1;
- (struct CGContext *)newBitmapWithPlaceholdersForVersionCount:(long long)arg1 forYearRange:(struct _IPXSignedRange)arg2;
- (struct CGContext *)copyBitmapContext:(struct CGContext *)arg1;
- (struct CGContext *)newBitmapForVersionCount:(long long)arg1;
- (long long)widthForVersionCount:(long long)arg1;
- (void)sendPreviewBitmap:(struct CGContext *)arg1 toCallbacksForEntry:(id)arg2 isComplete:(BOOL)arg3;
- (void)entry:(id)arg1 renderVersions:(id)arg2 intoBitmapContext:(struct CGContext *)arg3 versionOrder:(id)arg4;
- (void)_buildPreviewForCacheEntry:(id)arg1;
- (void)evaluateNextCollectionForUpdate:(id)arg1;
- (id)cacheKeyFromYearRange:(struct _IPXSignedRange)arg1;
- (id)versionsSortedByYearFromSectionsCollection:(id)arg1 returningCollectionsByYear:(id *)arg2;
- (void)updateCacheIfNecessaryForCollection:(id)arg1 forViewMode:(unsigned long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)checkArrayForDuplicates:(id)arg1 checkDescription:(id)arg2;
- (struct _IPXSignedRange)yearRangeForYearCollection:(id)arg1;
- (void)processWaitingSectionsCollection;
- (void)objectsControllerObjectsCollectionChanged:(id)arg1;
- (void)prepopulateEntriesFromDiskCache;
- (void)databaseObjectsControllerDatabaseClosing:(id)arg1;
- (void)stopMonitoringCollectionChanges;
- (id)nameOfViewMode:(unsigned long long)arg1;
- (void)setCacheMode:(unsigned long long)arg1;
- (void)startBuildingTileCachesWithMode:(unsigned long long)arg1;
- (id)initWithLibrary:(id)arg1 cacheHeight:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
