//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SocialAppsCore/IMCloudKitEventHandler-Protocol.h>

@class NSString, NSWindow, iCloudPurchaseStorageController;

@interface SOCloudKitPurchaseStorageAlertController : NSObject <IMCloudKitEventHandler>
{
    iCloudPurchaseStorageController *_purchaseStorageController;
    NSWindow *_window;
    CDUnknownBlockType _completion;
}

@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property __weak NSWindow *window; // @synthesize window=_window;
@property(readonly) iCloudPurchaseStorageController *purchaseStorageController; // @synthesize purchaseStorageController=_purchaseStorageController;
- (void).cxx_destruct;
- (void)cloudKitEventNotificationManager:(id)arg1 didPerformAdditionalStorageRequiredCheck:(BOOL)arg2 additionalStorageRequired:(unsigned long long)arg3 forAccountId:(id)arg4 error:(id)arg5;
- (void)presentFetchingAccountIDFailedAlertWithError:(id)arg1;
- (void)presentUserNeedsMoreStorageAlertWithAccountID:(id)arg1;
- (void)presentPurchaseStorageControllerWithAccountID:(id)arg1;
- (void)_windowDidEndSheet:(id)arg1;
- (void)finishWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)removeObservers;
- (void)addObservers;
- (void)dealloc;
- (void)beginSheetModalForWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

