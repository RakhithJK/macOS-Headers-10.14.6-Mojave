//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMModelObject.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface AVB17221AEMLocale : AVB17221AEMModelObject <NSCopying>
{
    unsigned short numberOfStrings;
    unsigned short baseStrings;
    NSString *localeIdentifier;
    NSArray *strings;
}

+ (id)keyPathsForValuesAffectingLocalizedModelObjectName;
@property(copy) NSArray *strings; // @synthesize strings;
@property unsigned short baseStrings; // @synthesize baseStrings;
@property unsigned short numberOfStrings; // @synthesize numberOfStrings;
@property(copy) NSString *localeIdentifier; // @synthesize localeIdentifier;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)renumberDescriptorWithNextIndexes:(id)arg1;
- (void)updateDependentContent;
- (id)debugLogStringWithIndentation:(id)arg1;
- (id)objectLogName;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)description;
- (void)setString:(id)arg1 forStringReference:(id)arg2;
- (id)stringForStringReference:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (id)localizedModelObjectName;
- (id)validChildrenDescriptorTypes;
- (id)xmlRepresentation;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlKey;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_abb5f99a *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_abb5f99a *)arg1 descriptorLength:(unsigned short)arg2;
- (id)init;

@end

