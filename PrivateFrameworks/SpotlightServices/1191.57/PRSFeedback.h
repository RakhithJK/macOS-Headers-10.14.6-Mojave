//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightServices/NSCoding-Protocol.h>
#import <SpotlightServices/NSCopying-Protocol.h>
#import <SpotlightServices/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface PRSFeedback : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    NSString *_input;
    long long _timestamp;
    NSDictionary *_attributes;
    NSData *_thumbnailData;
    NSString *_keyboardLanguage;
}

+ (id)JSONDictionaryForFeedbackArray:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property(retain, nonatomic) NSData *thumbnailData; // @synthesize thumbnailData=_thumbnailData;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSString *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (id)description;
- (id)plist;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)validate;
- (id)initWithFeedback:(id)arg1;
@property(readonly, nonatomic) NSString *typeString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 timestamp:(long long)arg2;
- (id)init;

@end

