//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNObjectValidation-Protocol.h>
#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface CNActivityAlert : NSObject <CNObjectValidation, NSCopying, NSSecureCoding>
{
    BOOL _ignoreMute;
    NSString *_sound;
    NSString *_vibration;
    NSDictionary *_userInfo;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property BOOL ignoreMute; // @synthesize ignoreMute=_ignoreMute;
@property(copy) NSString *vibration; // @synthesize vibration=_vibration;
@property(copy) NSString *sound; // @synthesize sound=_sound;
- (void).cxx_destruct;
- (BOOL)isValid:(id *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSound:(id)arg1 vibration:(id)arg2 ignoreMute:(BOOL)arg3 userInfo:(id)arg4;
- (id)initWithSound:(id)arg1 vibration:(id)arg2 ignoreMute:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

