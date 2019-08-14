//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class IPXLibraryImportConfirmViewController, IPXLibraryImportProgressViewController, IPXMainWindowController, NSOperationQueue, NSString, NSURL, RDSyncSettings;
@protocol RDSyncOperation;

@interface IPXLibraryImportWindowController : NSWindowController
{
    BOOL _performDupeDetection;
    IPXMainWindowController *_mainWindowController;
    NSURL *_sourceLibrary;
    IPXLibraryImportConfirmViewController *_confirmViewController;
    IPXLibraryImportProgressViewController *_progressViewController;
    id _processInfoActivity;
    id <RDSyncOperation> _syncOperation;
    NSString *_sourceLibName;
    NSString *_targetLibName;
    RDSyncSettings *_syncSettings;
    NSOperationQueue *_workQueue;
}

@property(readonly) NSOperationQueue *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) RDSyncSettings *syncSettings; // @synthesize syncSettings=_syncSettings;
@property(copy) NSString *targetLibName; // @synthesize targetLibName=_targetLibName;
@property(copy) NSString *sourceLibName; // @synthesize sourceLibName=_sourceLibName;
@property(retain) id <RDSyncOperation> syncOperation; // @synthesize syncOperation=_syncOperation;
@property(retain) id processInfoActivity; // @synthesize processInfoActivity=_processInfoActivity;
@property(retain) IPXLibraryImportProgressViewController *progressViewController; // @synthesize progressViewController=_progressViewController;
@property(retain) IPXLibraryImportConfirmViewController *confirmViewController; // @synthesize confirmViewController=_confirmViewController;
@property(retain) NSURL *sourceLibrary; // @synthesize sourceLibrary=_sourceLibrary;
@property(readonly) __weak IPXMainWindowController *mainWindowController; // @synthesize mainWindowController=_mainWindowController;
@property BOOL performDupeDetection; // @synthesize performDupeDetection=_performDupeDetection;
- (void).cxx_destruct;
- (void)startImport;
- (void)stopImport;
- (void)changeSettingsWithSelectedTag:(long long)arg1;
- (void)endSheet;
- (void)selectLibrary:(id)arg1;
- (id)shortDisplayName:(id)arg1;
- (void)runConfirmAlert:(id)arg1;
- (id)initWithMainWindowController:(id)arg1 sourceLibrary:(id)arg2 performDupeDetect:(BOOL)arg3;

@end

