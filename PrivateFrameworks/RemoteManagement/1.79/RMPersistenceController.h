//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteManagement/RMPersistenceControllerProtocol-Protocol.h>

@class NSMutableDictionary, NSPersistentContainer, NSString;
@protocol OS_dispatch_queue;

@interface RMPersistenceController : NSObject <RMPersistenceControllerProtocol>
{
    NSObject *_lastPersistentHistoryTokenByStoreIdentifierLock;
    NSPersistentContainer *_persistentContainer;
    NSMutableDictionary *_lastPersistentHistoryTokenByStoreIdentifier;
    NSObject<OS_dispatch_queue> *_coreDataQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *coreDataQueue; // @synthesize coreDataQueue=_coreDataQueue;
@property(readonly, copy, nonatomic) NSMutableDictionary *lastPersistentHistoryTokenByStoreIdentifier; // @synthesize lastPersistentHistoryTokenByStoreIdentifier=_lastPersistentHistoryTokenByStoreIdentifier;
@property(retain, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (void).cxx_destruct;
- (void)_persistentStoreCoordinatorStoresDidChange:(id)arg1;
- (void)_remotePersistentStoreDidChange:(id)arg1;
- (id)descriptionForPersistentStore:(id)arg1;
- (void)savePersistentHistoryToken:(id)arg1 forStore:(id)arg2;
- (id)persistentHistoryTokenForStore:(id)arg1;
- (id)viewContext;
- (id)newBackgroundContext;
- (void)performBackgroundTaskAndWait:(CDUnknownBlockType)arg1;
- (void)performBackgroundTask:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

