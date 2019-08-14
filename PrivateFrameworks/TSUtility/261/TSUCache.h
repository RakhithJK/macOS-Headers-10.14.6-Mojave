//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSUtility/TSUFlushableObject.h>

@class NSMutableDictionary, NSString;

@interface TSUCache : TSUFlushableObject
{
    NSString *mCacheName;
    NSMutableDictionary *mCache;
}

- (id)description;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)hasFlushableContent;
- (void)unload;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)p_objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (void)p_addEntriesFromDictionary:(id)arg1;
- (id)p_objectForKey:(id)arg1;

@end

