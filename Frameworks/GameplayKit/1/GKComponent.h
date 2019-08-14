//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSCopying-Protocol.h>
#import <GameplayKit/NSSecureCoding-Protocol.h>

@class GKComponentSystem, GKEntity, NSString;

@interface GKComponent : NSObject <NSCopying, NSSecureCoding>
{
    GKEntity *_entity;
    int _usesPerComponentUpdateCount;
    GKComponentSystem *_componentSystem;
    NSString *_componentName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)willRemoveFromEntity;
- (void)didAddToEntity;
- (void)updateWithDeltaTime:(double)arg1;
@property(readonly, nonatomic) __weak GKEntity *entity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) GKComponentSystem *componentSystem;
@property(nonatomic) NSString *componentName;
@property(nonatomic) BOOL usesPerComponentUpdate;
- (void)setEntity:(id)arg1;
- (id)initWithName:(id)arg1;

@end

