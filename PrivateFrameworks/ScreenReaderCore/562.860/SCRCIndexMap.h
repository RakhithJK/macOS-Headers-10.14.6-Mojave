//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReaderCore/NSCopying-Protocol.h>
#import <ScreenReaderCore/NSSecureCoding-Protocol.h>

@interface SCRCIndexMap : NSObject <NSCopying, NSSecureCoding>
{
    struct __CFDictionary *_map;
}

+ (BOOL)supportsSecureCoding;
- (id)description;
- (void)addObjectsFromIndexMap:(id)arg1;
- (id)indexes;
- (unsigned long long *)_createIndexesWithSize:(unsigned long long *)arg1;
- (unsigned long long)count;
- (id)objectForIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeObjectForIndex:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)deepCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initAndDeepCopyIndexMap:(id)arg1;
- (id)_initWithIndexMap:(id)arg1;
- (id)init;
- (id)initWithObjects:(const id *)arg1 andIndexes:(unsigned long long *)arg2 count:(unsigned long long)arg3;

@end

