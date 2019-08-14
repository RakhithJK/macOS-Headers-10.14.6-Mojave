//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface SFSessionCache : NSObject <NSSecureCoding>
{
    BOOL _activated;
    BOOL _invalidated;
    struct NSMutableDictionary *_sessions;
    struct NSMutableDictionary *_timestamps;
    unsigned long long _capacity;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    NSUUID *_identifier;
    NSString *_serviceIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (BOOL)cacheFull;
- (id)activeSessions;
- (id)activePeerDeviceIDs;
- (id)sessionWithDevice:(id)arg1 activate:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sendWithFlags:(unsigned int)arg1 object:(id)arg2 toDevice:(id)arg3;
- (void)sendRequestWithFlags:(unsigned int)arg1 object:(id)arg2 responseHandler:(CDUnknownBlockType)arg3 toDevice:(id)arg4;
- (void)invalidate;
- (void)clearCache;
- (void)activate;
- (void)_sessionWasInvalidated:(id)arg1;
- (void)_sessionWasInterrupted:(id)arg1;
- (id)_sessionWithDevice:(id)arg1 activate:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_popCache;
- (void)_ensureStopped;
- (void)_ensureStarted;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

