//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, __NSHostExtraIvars;

@interface NSHost : NSObject
{
    NSArray *names;
    NSArray *addresses;
    id reserved;
}

+ (void)flushHostCache;
+ (void)setHostCacheEnabled:(BOOL)arg1;
+ (BOOL)isHostCacheEnabled;
+ (id)hostWithAddress:(id)arg1;
+ (id)hostWithName:(id)arg1;
+ (id)currentHost;
@property(retain, nonatomic) __NSHostExtraIvars *reserved; // @synthesize reserved;
- (void)dealloc;
- (id)description;
@property(readonly, copy) NSString *localizedName;
@property(readonly, copy) NSArray *addresses;
@property(readonly, copy) NSString *address;
@property(readonly, copy) NSArray *names;
@property(readonly, copy) NSString *name;
- (BOOL)isEqualToHost:(id)arg1;
- (void)resolveCurrentHostWithHandler:(CDUnknownBlockType)arg1;
- (void)__resolveWithFlags:(int)arg1 resultArray:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)blockingResolveUntil:(int)arg1;
- (void)resolve:(CDUnknownBlockType)arg1;
- (id)_thingToResolve;
- (id)initToResolve:(id)arg1 as:(int)arg2;

@end

