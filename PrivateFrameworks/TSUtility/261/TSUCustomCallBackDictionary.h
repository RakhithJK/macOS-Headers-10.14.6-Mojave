//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface TSUCustomCallBackDictionary : NSMutableDictionary
{
    struct __CFDictionary *mDictionary;
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)allKeys;
- (id)objectEnumerator;
- (id)allValues;
- (id)objectForKey:(id)arg1;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (unsigned long long)count;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forUncopiedKey:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1 keyCallBacks:(const CDStruct_90be15af *)arg2 valueCallBacks:(const CDStruct_70d275a4 *)arg3;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCFDictionary:(struct __CFDictionary *)arg1;
- (id)init;

@end

