//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModelAction.h>

@class NSMapTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IPXRenderChangeAction : RDModelAction
{
    NSMapTable *_savedDescriptions;
    NSObject<OS_dispatch_queue> *_waitSemaphoresQueue;
    NSMutableDictionary *_waitSemaphoreByVersionAddress;
    BOOL _supportsPlayback;
    BOOL _canceled;
}

@property BOOL canceled; // @synthesize canceled=_canceled;
- (void).cxx_destruct;
- (void)showExternalEditAlertIfNeededForExternalEditController:(id)arg1 inWindow:(id)arg2 onContinueExecuteAndRegisterWithUndoManager:(id)arg3;
- (int)performUndo;
- (int)waitForInputForVersion:(id)arg1 renderDescription:(id)arg2;
- (int)performAction;
- (int)performPlaybackChange:(id)arg1;
- (int)performRenderChange:(id)arg1;
- (void)interrupt;
- (BOOL)shouldProcessVersion:(id)arg1;
- (BOOL)requiresMasters;
- (BOOL)_someMastersOffline;

@end

