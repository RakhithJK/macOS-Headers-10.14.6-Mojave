//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface SUManualProductAdopter : NSObject
{
    NSXPCConnection *_connection;
    NSString *_archivePath;
    NSString *_displayName;
    NSString *_displayVersion;
    struct AuthorizationOpaqueRef *_authRef;
    BOOL _allowDevSigned;
    BOOL _didFail;
    BOOL _shouldStashCredentials;
}

+ (BOOL)restartNow;
@property BOOL allowDevSigned; // @synthesize allowDevSigned=_allowDevSigned;
@property(copy) NSString *displayVersion; // @synthesize displayVersion=_displayVersion;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
- (BOOL)_bridgeOSUpdatePrepared;
- (void)_setProgressPhases:(id)arg1;
- (BOOL)installRestartingNow;
- (BOOL)installAfterLogoutRestartingNow:(BOOL)arg1;
- (BOOL)adoptReturningError:(id *)arg1;
- (BOOL)authorize:(struct AuthorizationOpaqueRef *)arg1;
- (void)dealloc;
- (id)initWithManualProductArchiveAtPath:(id)arg1 error:(id *)arg2;

@end

