//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/TSUFlushable-Protocol.h>

@class NSString, TSUFlushingManager;
@protocol NSLocking;

@interface TSUFlushableObject : NSObject <TSUFlushable>
{
    int _retainCount;
    int _ownerCount;
    TSUFlushingManager *_flushingManager;
    NSObject<NSLocking> *_flushingManagerIvarLock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)flush;
- (BOOL)hasFlushableContent;
- (void)unload;
- (void)addOwner;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)ownerDidAccess;
- (void)ownerWillAccess;
- (id)ownerAutoreleasedAccess;
- (void)ownerRelease;
- (id)ownerRetain;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

