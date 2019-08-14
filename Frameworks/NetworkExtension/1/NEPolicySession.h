//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>

@class NSData, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NEPolicySession : NSObject <NEPrettyDescription>
{
    unsigned int _lastSendMessageID;
    int _sessionFD;
    long long _internalPriority;
    NSMutableDictionary *_policies;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    NSData *_lastReceivedResponse;
}

+ (id)parseTLVResponseForDump:(id)arg1;
+ (id)readTLVOfType:(unsigned char)arg1 startCursor:(char *)arg2 currentCursor:(char **)arg3 totalLength:(unsigned long long)arg4 readTLVInstance:(unsigned int)arg5;
+ (BOOL)isTLVValid:(char *)arg1 cursorCurrent:(char *)arg2 totalLength:(unsigned long long)arg3;
+ (id)policyDumpFromData:(id)arg1;
+ (unsigned int)messageIDForMessage:(id)arg1;
+ (unsigned int)policyIDFromMessage:(id)arg1;
+ (id)errorFromMessage:(id)arg1;
+ (unsigned char)getTLVtypeForBytes:(const char *)arg1 includeHeaderOffset:(BOOL)arg2 nextTLVOffset:(unsigned int *)arg3;
+ (id)copyTLVForBytes:(const char *)arg1 messageLength:(unsigned long long)arg2 type:(unsigned char)arg3 includeHeaderOffset:(BOOL)arg4 n:(int)arg5;
+ (void)addTLVToMessage:(id)arg1 type:(unsigned char)arg2 length:(unsigned long long)arg3 value:(const void *)arg4;
@property int sessionFD; // @synthesize sessionFD=_sessionFD;
@property unsigned int lastSendMessageID; // @synthesize lastSendMessageID=_lastSendMessageID;
@property(retain) NSData *lastReceivedResponse; // @synthesize lastReceivedResponse=_lastReceivedResponse;
@property(retain) NSObject<OS_dispatch_semaphore> *responseSemaphore; // @synthesize responseSemaphore=_responseSemaphore;
@property(retain) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain) NSMutableDictionary *policies; // @synthesize policies=_policies;
@property long long internalPriority; // @synthesize internalPriority=_internalPriority;
- (void).cxx_destruct;
- (BOOL)removeAllPolicies;
- (BOOL)removePolicyWithID:(unsigned long long)arg1;
- (id)policyWithID:(unsigned long long)arg1;
- (BOOL)apply;
- (id)dumpKernelPolicies;
- (unsigned long long)addPolicy:(id)arg1;
- (BOOL)unregisterServiceUUID:(id)arg1;
- (BOOL)registerServiceUUID:(id)arg1;
- (BOOL)lockSessionToCurrentProcess;
@property long long priority;
- (id)createTLVMessage:(unsigned char)arg1;
- (int)dupSocket;
- (id)priorityString;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithSocket:(int)arg1;

@end

