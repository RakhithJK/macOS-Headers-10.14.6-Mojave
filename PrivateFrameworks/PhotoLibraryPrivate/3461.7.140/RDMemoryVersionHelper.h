//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RDMemoryVersionHelper : NSObject
{
}

+ (id)removeVersionIds:(id)arg1 fromMemory:(id)arg2 withReason:(unsigned short)arg3 memoryVersionTableClass:(Class)arg4;
+ (id)setVersionIds:(id)arg1 forMemory:(id)arg2 memoryVersionTableClass:(Class)arg3;
+ (id)versionIds:(id)arg1 inMemoryId:(id)arg2 inDatabase:(id)arg3 memoryVersionTableClass:(Class)arg4;
+ (id)versionsForMemory:(id)arg1 loadOptions:(id)arg2 readOnlyModels:(BOOL)arg3 memoryVersionTableClass:(Class)arg4;
+ (id)versionsForMemory:(id)arg1 memoryVersionTableClass:(Class)arg2;
+ (id)versionIdListForMemoryIds:(id)arg1 fromDatabase:(id)arg2 memoryVersionTableClass:(Class)arg3;
+ (id)versionIdListForMemory:(id)arg1 memoryVersionTableClass:(Class)arg2;
+ (id)versionIdListForMemoryId:(id)arg1 fromDatabase:(id)arg2 memoryVersionTableClass:(Class)arg3;
+ (id)countOfVersionsForMemoryId:(id)arg1 inTrash:(BOOL)arg2 fromDatabase:(id)arg3 memoryVersionTableClass:(Class)arg4;
+ (id)memoryIdsForVersionIds:(id)arg1 fromDatabase:(id)arg2 memoryVersionTableClass:(Class)arg3;
+ (id)memoryIdsForVersionId:(id)arg1 fromDatabase:(id)arg2 memoryVersionTableClass:(Class)arg3;
+ (void)deleteFromAllMemories:(id)arg1 fromDatabase:(id)arg2 withReason:(unsigned short)arg3 memoryVersionTableClass:(Class)arg4;

@end

