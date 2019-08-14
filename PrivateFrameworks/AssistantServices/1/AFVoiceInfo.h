//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface AFVoiceInfo : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isCustom;
    BOOL _wasInitalizedFromDictionaryRepresentation;
    NSString *_languageCode;
    long long _footprint;
    NSString *_name;
    NSNumber *_contentVersion;
    NSString *_masteredVersion;
    long long _gender;
}

+ (BOOL)supportsSecureCoding;
+ (long long)defaultGenderForOutputVoiceLanguageCode:(id)arg1;
+ (id)voiceInfoForLanguageCode:(id)arg1;
+ (id)allVoicesForSiriSessionLanguage:(id)arg1;
@property(readonly, nonatomic) BOOL wasInitalizedFromDictionaryRepresentation; // @synthesize wasInitalizedFromDictionaryRepresentation=_wasInitalizedFromDictionaryRepresentation;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) NSString *masteredVersion; // @synthesize masteredVersion=_masteredVersion;
@property(readonly, nonatomic) NSNumber *contentVersion; // @synthesize contentVersion=_contentVersion;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property(nonatomic) BOOL isCustom; // @synthesize isCustom=_isCustom;
@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (void).cxx_destruct;
- (id)footprintString;
- (id)genderString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithLanguageCode:(id)arg1;
- (id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(BOOL)arg3;
- (id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 isCustom:(BOOL)arg3 name:(id)arg4 footprint:(long long)arg5 contentVersion:(id)arg6 masteredVersion:(id)arg7;
- (BOOL)isValidForSiriSessionLanguage:(id)arg1;

@end

