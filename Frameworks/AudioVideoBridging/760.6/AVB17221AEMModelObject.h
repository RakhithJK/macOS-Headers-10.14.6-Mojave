//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMObject.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface AVB17221AEMModelObject : AVB17221AEMObject <NSCopying>
{
    unsigned short descriptorType;
    unsigned short descriptorIndex;
    unsigned short _mirrorIndex;
    AVB17221AEMModelObject *parent;
}

+ (id)keyPathsForValuesAffectingLocalizedModelObjectName;
+ (id)keyPathsForValuesAffectingLocalizedDescriptorType;
+ (unsigned short)descriptorTypeForLocalizedName:(id)arg1;
+ (unsigned short)descriptorTypeForName:(id)arg1;
+ (id)localizedNameForDescriptorType:(unsigned short)arg1;
+ (id)nameForDescriptorType:(unsigned short)arg1;
@property AVB17221AEMModelObject *parent; // @synthesize parent;
@property unsigned short mirrorIndex; // @synthesize mirrorIndex=_mirrorIndex;
@property unsigned short descriptorIndex; // @synthesize descriptorIndex;
@property unsigned short descriptorType; // @synthesize descriptorType;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly) unsigned short configurationIndex; // @dynamic configurationIndex;
- (id)_configuration;
@property(readonly, nonatomic) NSArray *allSourceObjectTypes; // @dynamic allSourceObjectTypes;
- (id)_allSourceObjects;
- (id)allSourceObjectsOfType:(unsigned short)arg1;
- (id)allObjectsOfType:(unsigned short)arg1;
- (void)renumberDescriptorWithNextIndexes:(id)arg1;
- (void)updateDependentContent;
@property(readonly, nonatomic) NSString *localizedModelObjectName; // @dynamic localizedModelObjectName;
@property(readonly, nonatomic) NSArray *validChildrenDescriptorTypes; // @dynamic validChildrenDescriptorTypes;
- (id)debugLogStringWithIndentation:(id)arg1;
- (id)objectLogName;
- (void)appendVariableDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *localizedDescriptorType; // @dynamic localizedDescriptorType;
- (unsigned short)_descriptorTypeForIndexing;
- (BOOL)updateWithXML:(id)arg1;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_abb5f99a *)arg1;
- (BOOL)updateWithDescriptorData:(id)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_abb5f99a *)arg1 descriptorLength:(unsigned short)arg2;
- (id)descriptorData;
- (id)initWithDescriptorData:(id)arg1;
- (id)initWithDescriptor:(CDUnion_abb5f99a *)arg1 descriptorLength:(unsigned short)arg2;
- (id)init;

@end

