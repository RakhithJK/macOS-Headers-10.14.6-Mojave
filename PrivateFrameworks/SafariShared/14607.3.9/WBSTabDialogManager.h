//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WBSTabDialogManager : NSObject
{
    NSMutableDictionary *_webProcessIDToDialogSetMapping;
    NSMutableDictionary *_tabIDToDialogQueueMapping;
    unsigned long long _queueCapacity;
}

- (void).cxx_destruct;
- (id)_dialogBlockingWebProcessID:(int)arg1;
- (id)_dialogBlockingSlot:(CDStruct_497cfc99)arg1;
- (void)_dismissDialog:(id)arg1 withResponse:(id)arg2;
- (long long)_enqueueDialog:(id)arg1;
- (struct NSMutableSet *)_setForWebProcessID:(int)arg1 createIfNeeded:(BOOL)arg2;
- (struct NSMutableArray *)_queueForTabID:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2;
- (void)cancelAllDialogsForTabID:(unsigned long long)arg1 context:(id)arg2;
- (void)cancelAllDialogsForTabID:(unsigned long long)arg1 reason:(id)arg2;
- (void)cancelAllDialogsForTabID:(unsigned long long)arg1;
- (void)cancelAllDialogsBlockingWebProcessID:(int)arg1;
- (void)cancelAllDialogsBlockingSlot:(CDStruct_497cfc99)arg1;
- (void)dismissCurrentDialogForTabID:(unsigned long long)arg1 withResponse:(id)arg2;
- (void)presentNextDialogForSlot:(CDStruct_497cfc99)arg1;
- (void)enqueueOrPresentDialogInSlot:(CDStruct_497cfc99)arg1 presentationBlock:(CDUnknownBlockType)arg2 dismissalBlock:(CDUnknownBlockType)arg3 blocksWebProcessUntilDismissed:(BOOL)arg4;
- (void)enqueueOrPresentDialog:(id)arg1 inSlot:(CDStruct_497cfc99)arg2;
- (id)description;
- (id)init;

@end

