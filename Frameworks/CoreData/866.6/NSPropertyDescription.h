//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreData/NSCoding-Protocol.h>
#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSEntityDescription, NSMutableDictionary, NSString;

@interface NSPropertyDescription : NSObject <NSSecureCoding, NSCoding, NSCopying>
{
    NSString *_versionHashModifier;
    NSData *_versionHash;
    NSEntityDescription *_entity;
    NSString *_name;
    NSArray *_validationPredicates;
    NSArray *_validationWarnings;
    void *_extraIvars;
    NSMutableDictionary *_userInfo;
    struct __propertyDescriptionFlags {
        unsigned int _isReadOnly:1;
        unsigned int _isTransient:1;
        unsigned int _isOptional:1;
        unsigned int _isIndexed:1;
        unsigned int _skipValidation:1;
        unsigned int _isIndexedBySpotlight:1;
        unsigned int _isStoredInExternalRecord:1;
        unsigned int _extraIvarsAreInDataBlob:1;
        unsigned int _isOrdered:1;
        unsigned int _hasMaxValueInExtraIvars:1;
        unsigned int _hasMinValueInExtraIvars:1;
        unsigned int _storeBinaryDataExternally:1;
        unsigned int _preserveValueOnDelete:1;
        unsigned int _isTriggerBacked:1;
        unsigned int _isFileBackedFuture:1;
        unsigned int _reservedPropertyDescription:1;
    } _propertyDescriptionFlags;
    short _entitysReferenceIDForProperty;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
@property(copy) NSString *renamingIdentifier;
@property(getter=isStoredInExternalRecord) BOOL storedInExternalRecord;
@property(getter=isIndexedBySpotlight) BOOL indexedBySpotlight;
@property(copy) NSString *versionHashModifier;
@property(readonly, copy) NSData *versionHash;
@property(retain, nonatomic) NSDictionary *userInfo;
- (void)setValidationPredicates:(id)arg1 withValidationWarnings:(id)arg2;
@property(copy, nonatomic) NSString *name;
@property(getter=isTransient) BOOL transient;
@property(getter=isOptional) BOOL optional;
@property(readonly) NSArray *validationWarnings;
@property(readonly) NSArray *validationPredicates;
@property(readonly, nonatomic) NSEntityDescription *entity;
@property(getter=isIndexed) BOOL indexed;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_underlyingProperty;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_appendPropertyFieldsToData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (BOOL)_skipValidation;
- (void)_restoreValidation;
- (void)_stripForMigration;
- (BOOL)_comparePredicatesAndWarnings:(id)arg1;
- (BOOL)_nonPredicateValidateValue:(id *)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id *)arg4;
- (id)_rawValidationWarnings;
- (id)_rawValidationPredicates;
- (void)_setOrdered:(BOOL)arg1;
- (BOOL)_isOrdered;
- (void)setReadOnly:(BOOL)arg1;
- (BOOL)isReadOnly;
- (void)_throwIfNotEditable;
- (BOOL)_isEditable;
- (long long)_entitysReferenceID;
- (void)_setEntitysReferenceID:(long long)arg1;
- (void)_setEntityAndMaintainIndices:(id)arg1;
- (void)_setEntity:(id)arg1;
- (id)_initWithName:(id)arg1;
- (BOOL)_isToManyRelationship;
- (BOOL)_isRelationship;
- (unsigned long long)_propertyType;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_createCachesAndOptimizeState;
- (void)_replaceValidationPredicates:(id)arg1 andWarnings:(id)arg2;
- (struct _NSExtraPropertyIVars *)_extraIVars;
- (void)_initializeExtraIVars;
- (BOOL)_isSchemaEqual:(id)arg1;
- (BOOL)_epsilonEquals:(id)arg1 rhs:(id)arg2 withFlags:(int)arg3;
- (BOOL)_isFileBackedFuture;
- (BOOL)_isTriggerBacked;
- (BOOL)_preserveValueOnDelete;
- (BOOL)_storeBinaryDataExternally;
- (BOOL)_hasMinValueInExtraIvars;
- (BOOL)_hasMaxValueInExtraIvars;
- (void)setStoredInTruth:(BOOL)arg1;
- (BOOL)isStoredInTruth;
- (void)setStoredInTruthFile:(BOOL)arg1;
- (BOOL)isStoredInTruthFile;
- (void)setSpotlightIndexed:(BOOL)arg1;
- (BOOL)isSpotlightIndexed;
- (id)elementID;
- (void)setElementID:(id)arg1;

@end

