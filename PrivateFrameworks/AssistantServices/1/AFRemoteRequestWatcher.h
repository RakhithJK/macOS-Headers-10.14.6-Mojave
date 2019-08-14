//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriActivationListenerDelegate-Protocol.h>

@class AFSiriActivationListener, NSString;
@protocol OS_dispatch_queue;

@interface AFRemoteRequestWatcher : NSObject <AFSiriActivationListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _prewarmHandler;
    CDUnknownBlockType _requestHandler;
    CDUnknownBlockType _dismissalHandler;
    CDUnknownBlockType _intentHandler;
    int _speechRequestToken;
    CDUnknownBlockType _speechRequestHandler;
    AFSiriActivationListener *_siriActivationListener;
}

- (void).cxx_destruct;
- (void)setNewSpeechRequestHandler:(CDUnknownBlockType)arg1;
- (void)_setupSpeechRequestListener;
- (void)setIntentHandler:(CDUnknownBlockType)arg1;
- (void)setDismissalHandler:(CDUnknownBlockType)arg1;
- (void)setRequestHandler:(CDUnknownBlockType)arg1;
- (void)setNewRequestHandler:(CDUnknownBlockType)arg1;
- (void)setPrewarmHandler:(CDUnknownBlockType)arg1;
- (void)_setupRequestListener;
- (void)siriActivationListener:(id)arg1 handleIntent:(id)arg2 inBackgroundAppWithBundleId:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)siriActivationListener:(id)arg1 deactivateForReason:(long long)arg2 options:(unsigned long long)arg3 analyticsContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)siriActivationListener:(id)arg1 activateWithRequestInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)siriActivationListener:(id)arg1 prewarmWithRequestInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

