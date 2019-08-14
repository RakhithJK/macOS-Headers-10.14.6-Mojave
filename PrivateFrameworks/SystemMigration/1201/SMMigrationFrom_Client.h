//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemMigration/MigrationPairingEventsListener-Protocol.h>

@class NSNumber, NSXPCConnection, NSXPCInterface;
@protocol SMDMigrateFromProtocol;

@interface SMMigrationFrom_Client : NSObject <MigrationPairingEventsListener>
{
    BOOL _usingSharedSecretPassword;
    BOOL _paired;
    BOOL _serving;
    BOOL _daemonCrashed;
    NSNumber *_passcode;
    NSXPCInterface *_daemonInterface;
    NSXPCInterface *_exportedInterface;
    NSXPCConnection *_daemonConnection;
    id <SMDMigrateFromProtocol> _daemonProxy;
}

+ (id)pairingEventsListenerInterface;
@property(retain) id <SMDMigrateFromProtocol> daemonProxy; // @synthesize daemonProxy=_daemonProxy;
@property(retain) NSXPCConnection *daemonConnection; // @synthesize daemonConnection=_daemonConnection;
@property(retain) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain) NSXPCInterface *daemonInterface; // @synthesize daemonInterface=_daemonInterface;
@property BOOL daemonCrashed; // @synthesize daemonCrashed=_daemonCrashed;
@property BOOL serving; // @synthesize serving=_serving;
@property BOOL paired; // @synthesize paired=_paired;
@property BOOL usingSharedSecretPassword; // @synthesize usingSharedSecretPassword=_usingSharedSecretPassword;
@property(retain) NSNumber *passcode; // @synthesize passcode=_passcode;
- (void).cxx_destruct;
- (void)pairingCompleted;
- (void)receiveUpdatedPasscode:(id)arg1;
- (void)rejectTrustedPassCode;
- (void)acceptTrustedPassCode;
- (void)stopServingRemoteMacs;
- (void)startServingRemoteMacsUsingSourcePath:(id)arg1 andSecretPassword:(id)arg2;
- (void)startServingRemoteMacsWithSecretPassword:(id)arg1;
- (void)connectToDaemon;
- (id)init;

@end

