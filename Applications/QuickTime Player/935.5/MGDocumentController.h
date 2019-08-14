//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSDocumentController.h>

#import "NSMenuDelegate-Protocol.h"

@class MGScreenRecordingDocument, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MGDocumentController : NSDocumentController <NSMenuDelegate>
{
    NSMutableArray *_URLsToAddToRecentDocumentsSharedFileLists;
    struct OpaqueLSSharedFileListRef *_applicationRecentDocumentsSharedFileList;
    unsigned long long _numberOfRecordingsOpen;
    unsigned int _recentDocumentsSharedFileListsNeedsUpdate:1;
    id _didEnterFullScreenToken;
    id _didExitFullScreenToken;
    id _didChangeOcclusionStateToken;
    id _didChangeProfilesToken;
    BOOL _allowsScreenRecording;
    MGScreenRecordingDocument *_screenRecordingDocument;
    NSObject<OS_dispatch_queue> *_recentsQueue;
}

+ (id)recentDocumentURLPropertyListForURL:(id)arg1;
+ (id)_recentMenuItemTitlesFromURLComponentChains:(id)arg1 includingIcons:(BOOL)arg2;
+ (void)initialize;
@property(nonatomic) BOOL allowsScreenRecording; // @synthesize allowsScreenRecording=_allowsScreenRecording;
@property(retain) NSObject<OS_dispatch_queue> *recentsQueue; // @synthesize recentsQueue=_recentsQueue;
@property(retain) MGScreenRecordingDocument *screenRecordingDocument; // @synthesize screenRecordingDocument=_screenRecordingDocument;
- (void).cxx_destruct;
- (void)updateAllowsScreenRecording;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)_populateExportAsMenu:(id)arg1;
- (void)populateMenu:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)updateFullScreenExclusivePlaybackModes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)defaultURLScheme;
- (id)supportedURLSchemes;
- (void)enumerateSupportedURLTypesUsingBlock:(CDUnknownBlockType)arg1;
- (id)openNewScreenRecordingDocument;
- (id)openNewDeviceRecordingDocumentWithRecordingType:(unsigned long long)arg1;
- (void)openURLDocument:(id)arg1;
- (void)newScreenRecordingDocument:(id)arg1;
- (void)newAudioRecordingDocument:(id)arg1;
- (void)newMovieRecordingDocument:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (Class)documentClassForType:(id)arg1;
- (id)typeForContentsOfURL:(id)arg1 error:(id *)arg2;
- (void)_updateRecentDocumentsSharedFileListsIfNeeded;
- (void)updateRecentDocumentsSharedFileListsIfNeeded;
- (void)setRecentDocumentsSharedFileListsNeedsUpdate;
- (void)addURLToRecentDocumentsSharedFileLists:(id)arg1;
@property(readonly) struct OpaqueLSSharedFileListRef *applicationRecentDocumentsSharedFileList;
- (id)_recentDocumentURLsUsingQueue:(id)arg1;
- (void)_installOpenRecentMenus;
- (void)_populateOpenRecentMenu:(id)arg1 includingIcons:(BOOL)arg2;
- (void)_depopulateOpenRecentMenu:(id)arg1;
- (void)_openRecentDocument:(id)arg1;
- (id)recentDocumentURLs;
- (void)noteNewRecentDocumentURL:(id)arg1;
- (void)noteNewRecentDocument:(id)arg1;
- (void)clearRecentDocuments:(id)arg1;
- (void)beginOpenPanel:(id)arg1 forTypes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeDocument:(id)arg1;
- (void)addDocument:(id)arg1;
- (id)documentForURL:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
