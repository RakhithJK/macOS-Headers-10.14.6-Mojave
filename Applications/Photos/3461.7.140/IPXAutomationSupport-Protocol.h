//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXChangeBurstFavoritesAction, ImportAsset, NSArray, NSError, NSIndexSet, NSSet, NSString, RDVersion, RKDatabase;
@protocol IPXAutomationProjectBrowser, IPXAutomationSlideshowAdHocController, IPXAutomationViewerSupport;

@protocol IPXAutomationSupport <NSObject>
- (NSArray *)viewerControllers;
- (id <IPXAutomationViewerSupport>)viewer;
- (id)touchBar;
- (id)topViewController;
- (id)mondrianMediaView;
- (ImportAsset *)selectedImportAsset;
- (unsigned long long)selectionManagerVersionsCount;
- (void)selectionManagerSelectAll;
- (void)selectionManagerSelectPrevious;
- (void)selectionManagerSelectNext;
- (void)selectionManagerSelectNone;
- (RDVersion *)selectionManagerVersionAtOffset:(long long)arg1;
- (RDVersion *)selectionManagerPrimarySelection;
- (NSArray *)selectionManagerSelectedVersions;
- (NSIndexSet *)selectionManagerSelectedIndexes;
- (void)selectionManagerSelectVersionsAtIndexes:(NSIndexSet *)arg1;
- (void)selectionManagerExtendSelectVersionAtIndex:(unsigned long long)arg1;
- (void)selectionManagerSelectVersionAtIndex:(unsigned long long)arg1;
- (unsigned long long)selectionManagerIndexOfVersion:(RDVersion *)arg1;
- (id <IPXAutomationSlideshowAdHocController>)slideshowAdHocController;
- (id <IPXAutomationProjectBrowser>)projectBrowser;
- (id)sourceListSelectedContainer;
- (void)sourceListSelectContainer:(id)arg1;
- (void)openEditorWithVersion:(RDVersion *)arg1;
- (NSArray *)searchLibrary:(NSString *)arg1;
- (NSArray *)versionsForCount:(unsigned long long)arg1;
- (NSArray *)versionsForModelIds:(NSString *)arg1;
- (NSArray *)versionsForContainer:(id)arg1;
- (NSArray *)versionsForSelectedContainer;
- (void)versionsForSelectedContainer:(void (^)(NSArray *))arg1;
- (NSError *)setCanonicalLibraryPath:(NSString *)arg1;
- (RKDatabase *)databaseForUuid:(NSString *)arg1 wait:(BOOL)arg2;
- (RKDatabase *)defaultDatabase:(BOOL)arg1;
- (RKDatabase *)database;
- (NSString *)libraryPath;
- (void)setLibraryPath:(NSString *)arg1;
- (IPXChangeBurstFavoritesAction *)burstFavoriteAction:(NSSet *)arg1 versionsToUnfavorite:(NSSet *)arg2 favoritingOption:(long long)arg3;
@end

