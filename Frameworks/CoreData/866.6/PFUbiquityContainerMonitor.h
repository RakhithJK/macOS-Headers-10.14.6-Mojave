//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PFUbiquityContainerIdentifier, PFUbiquityLocation;
@protocol NSObject><NSCopying><NSCoding, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PFUbiquityContainerMonitor : NSObject
{
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    int _containerState;
    int _monitorState;
    BOOL _hasScheduledCheckBlock;
    int _scheduleSpinLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
    id <NSObject><NSCopying><NSCoding> _currentIdentityToken;
    PFUbiquityContainerIdentifier *_containerIdentifier;
    NSString *_identityTokenOverride;
}

@property(readonly, nonatomic) id <NSObject><NSCopying><NSCoding> currentIdentityToken; // @synthesize currentIdentityToken=_currentIdentityToken;
@property(readonly, nonatomic) PFUbiquityContainerIdentifier *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(nonatomic) int monitorState; // @synthesize monitorState=_monitorState;
@property(nonatomic) int containerState; // @synthesize containerState=_containerState;
- (void)checkStoresAndContainer:(id)arg1;
- (void)scheduleCheckBlock:(id)arg1;
- (void)ubiquityIdentityChanged:(id)arg1;
- (void)_applicationResumed:(id)arg1;
- (void)containerDeleteDetected:(id)arg1;
- (void)stopMonitor;
- (BOOL)startMonitor:(id *)arg1;
- (void)didChangeContainerIdentifier:(unsigned long long)arg1;
- (void)willChangeContainerIdentifier:(unsigned long long)arg1;
- (void)didChangeMonitorState;
- (void)willChangeMonitorState;
- (void)didChangeContainerState;
- (void)willChangeContainerState;
- (void)setContainerIdentifier:(id)arg1 transitionType:(unsigned long long)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithProcessingQueue:(id)arg1 localPeerID:(id)arg2 storeName:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (id)init;

@end

