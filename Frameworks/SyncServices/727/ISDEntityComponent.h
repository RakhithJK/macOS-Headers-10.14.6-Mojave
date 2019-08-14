//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SyncServices/ISDDataObject.h>

#import <SyncServices/NSCoding-Protocol.h>

@class ISDEntity, NSArray, NSString;

@interface ISDEntityComponent : ISDDataObject <NSCoding>
{
    NSString *_extensionName;
    ISDEntity *_entity;
    NSArray *_attributes;
    NSArray *_relationships;
}

- (id)mainEntityName;
- (id)propertyWithName:(id)arg1;
- (id)relationshipWithName:(id)arg1;
- (id)attributeWithName:(id)arg1;
- (id)propertyNames;
- (void)setRelationships:(id)arg1;
- (id)relationships;
- (void)setAttributes:(id)arg1;
- (id)attributes;
- (void)setMainEntity:(id)arg1;
- (id)mainEntity;
- (id)extensionName;
- (BOOL)morphInToObject:(id)arg1;
- (void)_updatePropertiesFromComponent:(id)arg1 forKey:(id)arg2 didChange:(char *)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isCompatibleExtensionOf:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionName:(id)arg1 entity:(id)arg2;

@end

