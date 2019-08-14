//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDocument, NSDocumentControllerPersistentRestoration, NSDocumentControllerSubMenuDelegate, NSError, NSMenuItem, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSharingServicePicker, NSString, NSTouchBar, NSWindow;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSDocumentControllerMoreIVars : NSObject
{
    BOOL shouldCreateUI;
    double autosavingDelay;
    int cachedUTIUsage;
    NSDocumentControllerSubMenuDelegate *subMenuDelegate;
    NSMutableDictionary *cachedRecentDocumentInfoPerKey;
    NSMutableDictionary *orderedPendingRecentDocumentURLsPerKey;
    NSObject<OS_dispatch_queue> *pendingRecentsQueue;
    NSOperationQueue *recentDocumentAccessQueue;
    NSOperationQueue *backgroundRecentDocumentResolutionQueue;
    struct __CFSet *javaVariantMethodsBeingInvoked;
    NSError *javaLastError;
    unsigned long long isAutoreopening;
    NSArray *autoreopenRecordsBeingReopened;
    NSMutableArray *autoreopenRecordsForMissingDocuments;
    BOOL hasAutoreopened;
    BOOL isClosingBeforeSavingDuringTermination;
    BOOL isClosingAfterSavingDuringTermination;
    NSMutableArray *autoreopenRecordsBeingCollectedDuringTermination;
    BOOL autoreopenRecordsNeedRewritingDuringTermination;
    BOOL isAsyncOpeningOrPrinting;
    CDUnknownBlockType asyncOpeningOrPrintingWaiter;
    NSArray *batchedOpenings;
    BOOL batchedOpeningTriedToReopen;
    NSMutableDictionary *documentOpeningWaitersByURL;
    NSMutableArray *autoreopenRecordsAlreadyReopenedByTAL;
    NSString *untitledTypeToCreate;
    NSWindow *windowThatBecameKeyDuringOpening;
    BOOL appIsBecomingActiveDuringOpening;
    id appWillBecomeActiveObserver;
    id windowDidBecomeKeyObserver;
    id appDidBecomeActiveObserver;
    BOOL appIsResigningActiveDuringOpening;
    id appWillResignActiveObserver;
    id windowDidResignKeyObserver;
    id appDidResignActiveObserver;
    NSObject<OS_dispatch_queue> *mainThreadUnblockingQueue;
    NSMutableArray *mainThreadUnblockerStack;
    NSMutableArray *mainThreadBlockingInterrupters;
    NSDocumentControllerPersistentRestoration *restorationInfo;
    BOOL dontDisplayDuringReopening;
    NSMutableSet *reservedAutosavingContentsPaths;
    NSDocument *documentBeingDuplicated;
    NSOperationQueue *documentCoordinatingQueue;
    NSOperationQueue *documentOpeningQueue;
    NSMutableArray *documentsStillPreservingVersions;
    NSMutableSet *openRecentDocumentIDs;
    NSOperationQueue *openRecentDocumentUpdatingQueue;
    BOOL requestingSecurityScopedURLsFromOpenPanel;
    BOOL shouldInvertImplicitTabbingBehavior;
    BOOL tabPlusButtonWasClicked;
    NSTouchBar *newDocumentTouchBar;
    BOOL showNewDocumentTouchBar;
    NSSharingServicePicker *currentSharingServicePicker;
    NSMenuItem *selectedSharingServiceMenuItem;
}

@end

