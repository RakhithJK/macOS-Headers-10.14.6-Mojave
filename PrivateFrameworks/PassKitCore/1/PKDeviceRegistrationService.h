//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKXPCService;

@interface PKDeviceRegistrationService : NSObject
{
    PKXPCService *_remoteService;
    BOOL _isRegistering;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)performDeviceRegistrationForReason:(id)arg1 actionType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performDeviceRegistrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
