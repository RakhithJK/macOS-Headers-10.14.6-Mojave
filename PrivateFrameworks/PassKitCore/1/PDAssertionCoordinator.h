//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PDXPCService.h>

#import <PassKitCore/PDAssertionCoordinatorExportedInterface-Protocol.h>
#import <PassKitCore/PDAssertionRequestDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSString, PKEntitlementWhitelist;
@protocol OS_dispatch_queue, PDAssertionCoordinatorDelegate;

@interface PDAssertionCoordinator : PDXPCService <PDAssertionRequestDelegate, PDAssertionCoordinatorExportedInterface>
{
    NSMutableDictionary *_assertionsByType;
    NSObject<OS_dispatch_queue> *_coordinatorSerialQueue;
    PKEntitlementWhitelist *_whitelist;
    long long _suppressionPermissionState;
    NSMutableArray *_pendingAssertionRequests;
    BOOL _isForegroundApplication;
    id <PDAssertionCoordinatorDelegate> _delegate;
    NSString *_bundleIdentifier;
}

@property(nonatomic) BOOL isForegroundApplication; // @synthesize isForegroundApplication=_isForegroundApplication;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) __weak id <PDAssertionCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelPendingAssertionRequests;
- (void)processPendingAssertionRequests;
- (id)assertionsOfType:(unsigned long long)arg1;
- (void)invalidateAssertionsForBackgroundApplicationState;
- (void)invalidateAllAssertions;
- (void)assertionRequestDidTimeout:(id)arg1;
- (void)_processPendingAssertionRequests;
- (void)_cancelPendingAssertionRequest:(id)arg1;
- (void)_addRequestForAssertion:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_acquireAssertion:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_acquireContactlessInterfaceSuppressionAssertion:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_showAlertForContactlessInterfaceSuppression;
- (void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 isValid:(CDUnknownBlockType)arg3;
- (void)assertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 shouldInvalidateWhenBackgrounded:(BOOL)arg3;
- (void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 reason:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

