//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SafariSandboxBrokerConnection, SandboxFileExtensionController;

__attribute__((visibility("hidden")))
@interface SandboxExtensionPresentationController : NSObject
{
    long long _tag;
    SandboxFileExtensionController *_sandboxExtensionController;
    SafariSandboxBrokerConnection *_sandboxBrokerConnection;
}

@property(readonly, nonatomic) SafariSandboxBrokerConnection *sandboxBrokerConnection; // @synthesize sandboxBrokerConnection=_sandboxBrokerConnection;
@property(readonly, nonatomic) SandboxFileExtensionController *sandboxExtensionController; // @synthesize sandboxExtensionController=_sandboxExtensionController;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)openFileURL:(id)arg1 permissions:(unsigned long long)arg2 identifier:(id)arg3 category:(long long)arg4 delegate:(id)arg5 error:(id *)arg6;
- (void)openFileURL:(id)arg1 permissions:(unsigned long long)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_tryCreatingTokenForURLWithoutUI:(id)arg1 permissions:(unsigned long long)arg2 error:(id *)arg3;
- (void)_tryCreatingTokenForURLWithoutUI:(id)arg1 permissions:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_tryCreatingTokenForURLWithSynchronousUI:(id)arg1 permissions:(unsigned long long)arg2 identifier:(id)arg3 category:(long long)arg4 delegate:(id)arg5 error:(id *)arg6;
- (void)_tryCreatingTokenForURLWithAsynchronousUI:(id)arg1 permissions:(unsigned long long)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_createOpenPanel;
- (id)_createTokenForAccessibleURL:(id)arg1 isSecurityScoped:(BOOL)arg2 permissions:(unsigned long long)arg3 error:(id *)arg4;
- (void)_createTokenForAccessibleURL:(id)arg1 isSecurityScoped:(BOOL)arg2 permissions:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)_canWriteFileAtURL:(id)arg1;
- (BOOL)_canReadFileAtURL:(id)arg1;
- (id)initWithSandboxExtensionController:(id)arg1 sandboxBrokerConnection:(id)arg2;
- (id)initWithSandboxExtensionController:(id)arg1;

@end

