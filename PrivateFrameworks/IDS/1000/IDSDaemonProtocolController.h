//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSGroupContextNotifyingObserver, NSXPCConnection;
@protocol IDSGroupContextCacheMiddlewareDaemonProtocol, IDSGroupContextDataSourceDaemonProtocol;

@interface IDSDaemonProtocolController : NSObject
{
    NSXPCConnection *_connection;
    IDSGroupContextNotifyingObserver *_observer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IDSGroupContextNotifyingObserver *observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <IDSGroupContextCacheMiddlewareDaemonProtocol> groupContextCacheMiddleware;
@property(readonly, nonatomic) id <IDSGroupContextDataSourceDaemonProtocol> groupContextDataSource;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;

@end

