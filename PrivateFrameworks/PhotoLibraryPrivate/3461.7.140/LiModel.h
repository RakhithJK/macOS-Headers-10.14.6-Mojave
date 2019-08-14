//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryPrivate/NSCopying-Protocol.h>
#import <PhotoLibraryPrivate/NSMutableCopying-Protocol.h>

@class LiTable, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol LiModelCore;

@interface LiModel : NSObject <NSCopying, NSMutableCopying>
{
    LiTable *_table;
    long long _modelId;
    NSString *_uuid;
    id <LiModelCore> _core;
    unsigned char _persisted;
    BOOL _isReadOnly;
    BOOL _isDeleted;
    BOOL _isDetached;
    int _optimisticLock;
}

+ (id)mutableCoreFromModel:(id)arg1 withTable:(id)arg2;
+ (Class)stringMapper;
+ (id)modelsForAddresses:(id)arg1;
+ (id)modelForAddress:(id)arg1;
+ (id)modelsForIds:(id)arg1 fromLibrary:(id)arg2;
+ (id)modelForId:(id)arg1 fromLibrary:(id)arg2;
+ (Class)tableClass;
@property(nonatomic) long long modelId; // @synthesize modelId=_modelId;
@property(readonly, nonatomic) BOOL isDetached; // @synthesize isDetached=_isDetached;
@property(nonatomic) BOOL isDeleted; // @synthesize isDeleted=_isDeleted;
@property(readonly, nonatomic) BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(readonly, nonatomic) LiTable *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (id)allProperties;
- (BOOL)closeAndWait:(id *)arg1;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)close;
- (void)openWithReason:(unsigned short)arg1;
- (void)open;
@property(retain, nonatomic) NSMutableDictionary *localProperties;
- (id)debugLocalProperties;
@property(readonly, nonatomic) NSArray *localKeyPaths;
- (id)dirtyPropertyKeyPaths;
- (id)debugDirtyProperties;
@property(readonly, nonatomic) NSArray *dirtyPropertiesKeyIndexes;
@property(readonly, nonatomic) NSDictionary *dirtyProperties;
@property(readonly, nonatomic) id <LiModelCore> core;
- (id)debugInflightProperties;
@property(readonly, nonatomic) BOOL hasLocalProperties;
- (void)makeReadOnly;
- (void)detach;
@property(readonly, nonatomic) unsigned short modelChangeReason;
@property(readonly, nonatomic) BOOL isInTransaction;
@property(readonly, nonatomic) BOOL isUpdating;
@property(readonly, nonatomic) BOOL isDirty;
- (void)deleteModelWithReason:(unsigned short)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prepareForDeleteInTransactionContext:(id)arg1;
- (CDUnknownBlockType)prepareForTransactionContextDelete;
- (CDUnknownBlockType)willBeDeleted:(BOOL)arg1;
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)prepareForTransactionContextSave;
- (void)save;
- (void)waitForPersist;
@property(nonatomic) long long optimisticLock;
@property(readonly, nonatomic) BOOL temporaryModelId;
- (BOOL)persistAndWait:(id *)arg1;
- (BOOL)persistWithCompletionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)prepareForTransactionContextInsert;
- (void)didInsertIntoTransactionContext:(id)arg1;
- (BOOL)persist;
- (CDUnknownBlockType)willPersist;
- (BOOL)shouldBeReplacedByModel:(id)arg1;
- (BOOL)isEqualToModel:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setLocalProperty:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)setProperty:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3;
- (BOOL)setProperty:(id)arg1 forKeyPath:(id)arg2;
- (id)keyPathsMissingFromLocalProperties:(id)arg1;
- (BOOL)localPropertiesContainKeyPaths:(id)arg1;
- (id)localPropertyForKeyPath:(id)arg1;
- (id)localRawPropertyForKeyPath:(id)arg1;
- (id)propertyForKeyPath:(id)arg1;
@property(readonly, nonatomic) BOOL isPersisted;
- (id)address;
- (id)library;
- (void)cacheUuid:(id)arg1;
@property(retain, nonatomic) NSString *uuid;
@property(readonly) BOOL hasLocalUuid;
- (id)shortDescription;
- (id)longDescription;
- (id)debugDescription;
- (id)debugDescriptionLegend;
- (id)description;
- (BOOL)addToTablePrePersistedObjects;
- (void)resetModelDefaultsAfterCopy;
- (void)setModelDefaults;
- (void)commonInit;
- (void)setCore:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithModelId:(unsigned long long)arg1 uuid:(id)arg2 persisted:(unsigned char)arg3 optimisticLock:(long long)arg4 table:(id)arg5 core:(id)arg6;
- (id)initWithModelId:(unsigned long long)arg1 uuid:(id)arg2 persisted:(unsigned char)arg3 readOnly:(BOOL)arg4 optimisticLock:(long long)arg5 table:(id)arg6 localProperties:(id)arg7;
- (id)initDetachedWithTable:(id)arg1;
- (id)initWithModelId:(unsigned long long)arg1 forTable:(id)arg2;
- (id)initWithModel:(id)arg1 forTable:(id)arg2;
- (id)initWithTable:(id)arg1;
- (id)init;

@end

