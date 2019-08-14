//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOServer;

__attribute__((visibility("hidden")))
@interface _GEOServerProxy : NSObject
{
    Class _serverClass;
    GEOServer *_server;
}

+ (id)proxyForClass:(Class)arg1;
+ (id)proxyForServer:(id)arg1 daemon:(id)arg2;
@property(readonly, nonatomic) GEOServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) Class serverClass; // @synthesize serverClass=_serverClass;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToServerProxy:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2;
- (void)startServerWithDaemon:(id)arg1;
- (void)_setServer:(id)arg1 daemon:(id)arg2;

@end

