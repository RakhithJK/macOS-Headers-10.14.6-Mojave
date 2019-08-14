//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol NWNetworkAgent, OS_dispatch_queue, OS_dispatch_source;

@interface NWNetworkAgentRegistration : NSObject
{
    int _registrationSocket;
    Class _networkAgentClass;
    NSObject<NWNetworkAgent> *_networkAgent;
    NSUUID *_registeredUUID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_readSource;
}

+ (BOOL)useNetworkAgent:(id)arg1 returnUseCount:(unsigned long long *)arg2;
+ (BOOL)removeActiveAssertionFromNetworkAgent:(id)arg1;
+ (BOOL)addActiveAssertionToNetworkAgent:(id)arg1;
+ (int)newRegistrationFileDescriptor;
@property(retain) NSObject<OS_dispatch_source> *readSource; // @synthesize readSource=_readSource;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property int registrationSocket; // @synthesize registrationSocket=_registrationSocket;
@property(retain) NSUUID *registeredUUID; // @synthesize registeredUUID=_registeredUUID;
@property(retain) NSObject<NWNetworkAgent> *networkAgent; // @synthesize networkAgent=_networkAgent;
@property Class networkAgentClass; // @synthesize networkAgentClass=_networkAgentClass;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long useCount;
- (BOOL)assignNexusData:(id)arg1 toClient:(id)arg2;
- (BOOL)removeNetworkAgentFromInterfaceNamed:(id)arg1;
- (BOOL)addNetworkAgentToInterfaceNamed:(id)arg1;
- (BOOL)unregisterNetworkAgent;
- (BOOL)updateNetworkAgent:(id)arg1;
- (BOOL)setRegisteredNetworkAgent:(id)arg1 fileDescriptor:(int)arg2;
- (BOOL)registerNetworkAgent:(id)arg1;
- (BOOL)registerNetworkAgent:(id)arg1 withFileDescriptor:(int)arg2;
- (BOOL)createReadSourceWithRegistrationSocket:(int)arg1;
- (void)handleMessageFromAgent;
- (int)dupRegistrationFileDescriptor;
@property(readonly, nonatomic, getter=isRegistered) BOOL registered;
- (void)dealloc;
- (id)initWithNetworkAgentClass:(Class)arg1;

@end

