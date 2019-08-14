//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface PPQuickTypeQuery : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _type;
    unsigned char _subtype;
    unsigned char _semanticTag;
    unsigned char _time;
    unsigned int _fields;
    NSArray *_subFields;
    NSString *_label;
    NSArray *_people;
    NSString *_localeIdentifier;
    NSString *_bundleIdentifier;
    NSArray *_recipients;
}

+ (id)_peopleNamesFromLMQualifiers:(id)arg1;
+ (id)_labelFromLMFieldString:(id)arg1 qualifiers:(id)arg2;
+ (id)_subfieldsFromString:(id)arg1;
+ (unsigned char)_timeFromString:(id)arg1;
+ (unsigned int)_fieldsFromStrings:(id)arg1;
+ (unsigned char)_semanticTagFromString:(id)arg1;
+ (unsigned char)_subtypeFromString:(id)arg1;
+ (unsigned char)_typeFromString:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)quickTypeQueryWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 semanticTag:(unsigned char)arg3 fields:(unsigned int)arg4 time:(unsigned char)arg5 subFields:(id)arg6 label:(id)arg7 people:(id)arg8 localeIdentifier:(id)arg9 bundleIdentifier:(id)arg10 recipients:(id)arg11;
+ (id)quickTypeQueryWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 semanticTag:(unsigned char)arg3 fields:(unsigned int)arg4 time:(unsigned char)arg5 label:(id)arg6 people:(id)arg7 localeIdentifier:(id)arg8 bundleIdentifier:(id)arg9 recipients:(id)arg10;
+ (id)quickTypeQueryFromLMTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(retain, nonatomic) NSArray *people; // @synthesize people=_people;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSArray *subFields; // @synthesize subFields=_subFields;
@property(nonatomic) unsigned char time; // @synthesize time=_time;
@property(nonatomic) unsigned int fields; // @synthesize fields=_fields;
@property(nonatomic) unsigned char semanticTag; // @synthesize semanticTag=_semanticTag;
@property(nonatomic) unsigned char subtype; // @synthesize subtype=_subtype;
@property(nonatomic) unsigned char type; // @synthesize type=_type;
- (void).cxx_destruct;
- (BOOL)isEqualToQuickTypeQuery:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 semanticTag:(unsigned char)arg3 fields:(unsigned int)arg4 time:(unsigned char)arg5 subFields:(id)arg6 label:(id)arg7 people:(id)arg8 localeIdentifier:(id)arg9 bundleIdentifier:(id)arg10 recipients:(id)arg11;

@end

