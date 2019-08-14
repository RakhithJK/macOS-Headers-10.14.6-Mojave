//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreData/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSExpression, NSString;

@interface NSPropertyMapping : NSObject <NSSecureCoding>
{
    void *_reserved;
    NSArray *_transformValidations;
    NSArray *_propertyTransforms;
    NSString *_name;
    NSExpression *_valueExpression;
    NSDictionary *_userInfo;
    struct __propertyMappingFlags {
        unsigned int _isInUse:1;
        unsigned int _reservedPropertyMapping:31;
    } _propertyMappingFlags;
}

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
@property(retain) NSDictionary *userInfo;
@property(retain) NSExpression *valueExpression;
@property(copy) NSString *name;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)_transformValidations;
- (void)_setTransformValidations:(id)arg1;
- (id)_propertyTransforms;
- (void)_setPropertyTransforms:(id)arg1;
- (void)_throwIfNotEditable;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_createCachesAndOptimizeState;
- (BOOL)isEditable;
- (id)initWithName:(id)arg1 valueExpression:(id)arg2;
- (id)_initWithDestinationName:(id)arg1 valueExpression:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

