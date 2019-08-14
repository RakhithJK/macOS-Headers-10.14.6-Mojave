//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NSCopying-Protocol.h>

@class NAIdentity, NSMutableArray;

@interface NAIdentityBuilder : NSObject <NSCopying>
{
    NSMutableArray *_characteristics;
    NAIdentity *_builtIdentity;
}

+ (id)buildPointerIdentity;
+ (id)na_identity;
+ (id)builderWithIdentity:(id)arg1;
+ (id)builder;
@property(retain, nonatomic) NAIdentity *builtIdentity; // @synthesize builtIdentity=_builtIdentity;
@property(retain, nonatomic) NSMutableArray *characteristics; // @synthesize characteristics=_characteristics;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)build;
- (BOOL)isObject:(id)arg1 equalToObject:(id)arg2;
- (unsigned long long)hashOfObject:(id)arg1;
- (id)appendCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2 comparatorBlock:(CDUnknownBlockType)arg3 hashBlock:(CDUnknownBlockType)arg4;
- (id)appendRangeCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;
- (id)appendDoubleCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;
- (id)appendFloatCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;
- (id)appendUnsignedIntegerCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;
- (id)appendIntegerCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;
- (id)appendCharacteristic:(CDUnknownBlockType)arg1 withRole:(long long)arg2;
- (id)appendRangeCharacteristic:(CDUnknownBlockType)arg1;
- (id)appendDoubleCharacteristic:(CDUnknownBlockType)arg1;
- (id)appendFloatCharacteristic:(CDUnknownBlockType)arg1;
- (id)appendUnsignedIntegerCharacteristic:(CDUnknownBlockType)arg1;
- (id)appendIntegerCharacteristic:(CDUnknownBlockType)arg1;
- (id)appendCharacteristic:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentity:(id)arg1;
- (id)init;

@end

