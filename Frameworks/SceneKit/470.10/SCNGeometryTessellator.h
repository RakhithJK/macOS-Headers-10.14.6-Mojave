//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSMutableSet;

@interface SCNGeometryTessellator : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableSet *_clients;
    BOOL _adaptive;
    BOOL _screenSpace;
    float _maximumEdgeLength;
    float _edgeTessellationFactor;
    float _insideTessellationFactor;
    float _tessellationFactorScale;
    long long _smoothingMode;
    unsigned long long _partitionMode;
}

+ (BOOL)supportsSecureCoding;
+ (id)SCNUID_instanciateWithOption:(id)arg1;
+ (id)SCNUID_creationOptions;
@property(nonatomic) unsigned long long tessellationPartitionMode;
@property(nonatomic) double maximumEdgeLength;
@property(nonatomic) double insideTessellationFactor;
@property(nonatomic) double edgeTessellationFactor;
@property(nonatomic) double tessellationFactorScale;
@property(nonatomic, getter=isScreenSpace) BOOL screenSpace;
- (BOOL)screenSpace;
@property(nonatomic, getter=isAdaptive) BOOL adaptive;
- (BOOL)adaptive;
@property(nonatomic) long long smoothingMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)tessellatorValueDidChangeForClient:(id)arg1;
- (CDStruct_14ccb760)_tessellatorValueForGeometry:(id)arg1;
- (void)tessellatorValueDidChange;
- (void)clientWillDie:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

