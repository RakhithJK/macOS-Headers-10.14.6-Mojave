//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface INSerializedCacheItem : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;
    NSString *_identifier;
    NSDictionary *_payload;
}

+ (BOOL)supportsSecureCoding;
+ (void)deserializeCacheItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deserializeCacheItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)serializeCacheableObjects:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 payload:(id)arg3;
- (id)init;

@end

