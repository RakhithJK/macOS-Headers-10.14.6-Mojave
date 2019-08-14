//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOLogAdaptor-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface GEOBaseLogAdaptor : NSObject <GEOLogAdaptor>
{
    NSMutableArray *_supportedLogMessageTypes;
    NSObject<OS_dispatch_queue> *_adaptorQueue;
}

- (void).cxx_destruct;
- (id)adaptorQueue;
- (BOOL)isLogFrameworkAdaptor;
- (void)flushLogs;
- (void)queueLogMessage:(id)arg1;
- (BOOL)acceptsLogMessageOfType:(int)arg1;
- (void)removeSupportForLogMessageType:(int)arg1;
- (void)addSupportForLogMessageType:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

