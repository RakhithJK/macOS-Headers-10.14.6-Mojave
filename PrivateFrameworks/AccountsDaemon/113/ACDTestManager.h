//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface ACDTestManager : NSObject
{
    NSXPCListener *_accountStoreConnectionListener;
    NSXPCListener *_oauthSignerConnectionListener;
    NSXPCListener *_authenticationDialogConnectionListener;
    NSString *_storePath;
}

+ (id)testServer;
- (void).cxx_destruct;
- (id)_pseudoUniqueDatabasePath;
@property(readonly, nonatomic) NSXPCListenerEndpoint *remoteOAuthSignerEndpoint;
@property(readonly, nonatomic) NSXPCListenerEndpoint *remoteAccountStoreEndpoint;
- (void)stopTestServer;
- (void)startTestServer;

@end

