//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NSCopying-Protocol.h>

@class NSArray;

@interface NAIdentity : NSObject <NSCopying>
{
    NSArray *_characteristics;
}

+ (id)na_identity;
@property(copy, nonatomic) NSArray *characteristics; // @synthesize characteristics=_characteristics;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isObject:(id)arg1 equalToObject:(id)arg2;
- (unsigned long long)hashOfObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCharacteristics:(id)arg1;

@end

