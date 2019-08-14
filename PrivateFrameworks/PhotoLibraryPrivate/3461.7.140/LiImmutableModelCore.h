//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryPrivate/LiModelCore-Protocol.h>

@class LiTable, NSString;

@interface LiImmutableModelCore : NSObject <LiModelCore>
{
    LiTable *_table;
    const struct PropertyIndexMap *_propertyIndexMap;
    id *_values;
}

- (void).cxx_destruct;
- (unsigned long long)searchTokensToInvalidateOnSave;
- (void)setSearchTokensToInvalidateOnSave:(unsigned long long)arg1;
- (void)saveWithModelId:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)prepareForTransactionContextSave;
- (void)waitForPersist;
- (void)completePersistWithProperties:(id)arg1;
- (id)preparePropertiesForPersist;
- (BOOL)makeReadOnlyCheck;
- (void)detach;
- (id)debugInflightProperties;
- (id)dirtyPropertiesKeyIndexes;
- (void)setDirtyProperties:(id)arg1;
- (id)dirtyProperties;
- (void)setLocalProperty:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)setProperty:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 propertyChanged:(char *)arg4;
- (BOOL)close;
- (void)openWithReason:(unsigned short)arg1;
- (void)open;
- (void)setIsUpdating:(BOOL)arg1;
- (unsigned long long)openCount;
- (unsigned short)modelChangeReason;
- (void)setIsInTransaction:(BOOL)arg1;
- (BOOL)isInTransaction;
- (BOOL)isDirty;
- (BOOL)isDetached;
- (BOOL)isUpdating;
- (void)setLocalProperty:(id)arg1 forPropertyIndex:(id)arg2;
- (id)localProperties;
- (id)keyPathsMissingFromLocalProperties:(id)arg1 uuid:(id)arg2;
- (BOOL)localPropertiesContainKeyPaths:(id)arg1 uuid:(id)arg2;
- (id)localRawPropertyForKeyPath:(id)arg1;
- (void *)sortPropertyForPropertyIndex:(struct __CFNumber *)arg1;
- (id)propertyForKeyPath:(id)arg1;
- (BOOL)hasLocalProperties;
- (BOOL)isReadOnly;
- (id)table;
@property(readonly, copy) NSString *description;
- (id)copyCoreWithCapacity:(unsigned long long)arg1 modelId:(unsigned long long)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithModelId:(unsigned long long)arg1 table:(id)arg2 properties:(id)arg3 defaultProperties:(id)arg4;
- (id)initWithModelId:(unsigned long long)arg1 table:(id)arg2 localProperties:(id)arg3;
- (id)initWithTable:(id)arg1 propertyIndexMap:(const struct PropertyIndexMap *)arg2 values:(id *)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

