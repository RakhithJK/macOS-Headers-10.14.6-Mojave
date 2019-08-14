//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CXCallDirectoryManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_defaultConnection;
    NSXPCConnection *_maintenanceConnection;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSXPCConnection *maintenanceConnection; // @synthesize maintenanceConnection=_maintenanceConnection;
@property(retain, nonatomic) NSXPCConnection *defaultConnection; // @synthesize defaultConnection=_defaultConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)setPrioritizedExtensionIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)compactStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)synchronizeExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setEnabled:(BOOL)arg1 forExtensionWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reloadExtensionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)maintenanceConnectionRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)defaultConnectionRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

