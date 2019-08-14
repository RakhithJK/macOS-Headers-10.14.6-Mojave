//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface BiometricKitXPCClientConnection : NSObject
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_clients;
    int serverStartedNotificationToken;
}

+ (id)connectionWithDeviceType:(long long)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;
- (void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)touchIDButtonPressed:(BOOL)arg1 client:(unsigned long long)arg2;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (void)statusMessage:(unsigned int)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollResult:(id)arg1 client:(unsigned long long)arg2;
- (id)client:(unsigned long long)arg1;
- (BOOL)removeClient:(id)arg1;
- (BOOL)addClient:(id)arg1;
- (void)dealloc;
- (id)initWithDeviceType:(long long)arg1;

@end

