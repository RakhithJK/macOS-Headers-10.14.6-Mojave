//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXLibraryLocalDefaultsChangeReceiver-Protocol.h"
#import "IPXObjectsControllerChangeReceiver-Protocol.h"
#import "SBLSharedServicesManagerReceiver-Protocol.h"

@class IPXDatabaseAlbumsAndFoldersController, IPXDatabaseMagicAlbumsController, IPXDatabaseProjectsController, IPXRecentActivityAssetsController, IPXSharedObjectsController, IPXSharedStreamsController, IPXWorkspaceModel, NSArray, NSMutableDictionary, NSNumber, NSString, PMRActivity, RDDatabase;
@protocol IPXSidebarModelChangeMulticaster;

@interface IPXSidebarModelController : NSObject <IPXObjectsControllerChangeReceiver, IPXLibraryLocalDefaultsChangeReceiver, SBLSharedServicesManagerReceiver>
{
    PMRActivity *_pmrActivity;
    IPXDatabaseAlbumsAndFoldersController *_rootAlbumsAndFoldersController;
    IPXRecentActivityAssetsController *_sharedActivityAssetsController;
    IPXSharedObjectsController *_sharedObjectsController;
    IPXSharedStreamsController *_sharedStreamsController;
    IPXDatabaseMagicAlbumsController *_magicAlbumsController;
    IPXDatabaseProjectsController *_projectsController;
    BOOL _monitoring;
    RDDatabase *_database;
    NSNumber *_mediaTypesFolderHidden;
    unsigned long long _librarySectionSequence;
    unsigned long long _albumsSectionSequence;
    unsigned long long _rootAlbumsSequence;
    id _systemLibraryChangeObserver;
    NSMutableDictionary *_controllerForFolder;
    BOOL _didLoadInitialData;
    IPXWorkspaceModel *_workspaceModel;
    id <IPXSidebarModelChangeMulticaster> _changeMulticaster;
}

@property(nonatomic) BOOL didLoadInitialData; // @synthesize didLoadInitialData=_didLoadInitialData;
@property(readonly, nonatomic) id <IPXSidebarModelChangeMulticaster> changeMulticaster; // @synthesize changeMulticaster=_changeMulticaster;
@property(readonly, nonatomic) IPXWorkspaceModel *workspaceModel; // @synthesize workspaceModel=_workspaceModel;
- (void).cxx_destruct;
- (void)importSourceNameChanged:(id)arg1;
- (void)importSourcesRemoved:(id)arg1;
- (void)importSourcesAdded:(id)arg1;
- (void)startListeningForSystemLibraryChanges;
- (void)sharedPhotoStreamsLibraryChanged:(id)arg1 error:(id)arg2;
- (void)_disconnectFromSharingDatabases;
- (void)_connectToSharingDatabases;
@property(nonatomic, getter=isHiddenPhotosAlbumHidden) BOOL hiddenPhotosAlbumHidden;
- (void)updateCustomSortOrderForProjects;
- (void)updateCustomSortOrderForAlbums;
- (id)baseFolderForProjects;
- (id)baseFolderForAlbums;
- (id)mediaTypesFolder;
- (void)rootAlbumsContentDidChange;
- (id)devicesSectionObjectCollection;
- (id)projectsSectionObjectCollection;
- (id)sharedStreamsObjectCollection;
- (id)sharedSectionObjectCollection;
- (id)collectionForFolder:(id)arg1;
- (id)albumsSectionObjectCollection;
- (id)librarySectionObjectCollection;
- (void)populateFolder:(id)arg1;
- (BOOL)isItemIdentifierExpanded:(id)arg1;
- (void)setExpanded:(BOOL)arg1 forItemIdentifier:(id)arg2;
- (BOOL)isSectionIdentifierCollapsed:(id)arg1;
- (void)setCollapsed:(BOOL)arg1 forSectionIdentifier:(id)arg2;
- (void)moveSectionIdentifier:(id)arg1 afterSectionIdentifier:(id)arg2;
@property(readonly, nonatomic) NSArray *arrangedSectionIdentifiers;
- (void)libraryLocalDefaults:(id)arg1 didChangeValueForProperty:(id)arg2;
- (void)databaseObjectsControllerDatabaseClosing:(id)arg1;
- (void)objectsController:(id)arg1 representativeImageProperties:(unsigned long long)arg2 changedForObjects:(id)arg3;
- (void)objectsController:(id)arg1 metadataChanged:(id)arg2 forObjects:(id)arg3;
- (void)objectsControllerObjectsCollectionChanged:(id)arg1;
- (void)stopMonitoringObjectsSource;
- (void)startMonitoringObjectsSourceAndWaitForInitialData:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (BOOL)_updateMediaTypesFolderHiddenValueWithCollectionObjectCount:(unsigned long long)arg1;
- (void)_removeIdentifier:(id)arg1 forProperty:(id)arg2;
- (void)_addIdentifier:(id)arg1 forProperty:(id)arg2;
- (id)_identifiersForProperty:(id)arg1;
- (void)_setIdentifiers:(id)arg1 forProperty:(id)arg2;
- (void)dealloc;
- (id)initWithWorkspaceModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
