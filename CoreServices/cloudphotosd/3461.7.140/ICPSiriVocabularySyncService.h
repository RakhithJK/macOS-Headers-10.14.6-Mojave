//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICPAgentService-Protocol.h"

@class NSString, RDSiriVocabularySyncManager;
@protocol ICPAgentServiceManager, NSObject;

@interface ICPSiriVocabularySyncService : NSObject <ICPAgentService>
{
    RDSiriVocabularySyncManager *_syncManager;
    id <NSObject> _preferencesObserver;
    NSObject<ICPAgentServiceManager> *serviceManager;
}

@property __weak NSObject<ICPAgentServiceManager> *serviceManager; // @synthesize serviceManager;
- (void).cxx_destruct;
- (void)setSyncInhibitedForInitialDownload:(BOOL)arg1;
- (void)systemDidDarkWake;
- (void)systemDidWake;
- (void)systemDidSleep;
- (id)clientProtocolForConnection:(id)arg1;
- (id)serviceProtocolForConnection:(id)arg1;
- (id)listenerEndpoint;
- (id)serviceIdentifier;
- (void)assistantPreferencesChanged;
- (void)pingForLibraryKey:(id)arg1;
- (void)waitForInitialization:(CDUnknownBlockType)arg1;
- (void)shutdownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

