//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLTransformComponent-Protocol.h>
#import <ModelIO/NSCopying-Protocol.h>

@class CAAnimation, NSArray, NSString;

@interface MDLTransform : NSObject <NSCopying, MDLTransformComponent>
{
    // Error parsing type: {MDLAffineTransform="_keyedTranslation"{vector<std::__1::pair<double, float __attribute__((ext_vector_type(3)))>, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > >="__begin_"^{pair<double, float __attribute__((ext_vector_type(3)))>}"__end_"^{pair<double, float __attribute__((ext_vector_type(3)))>}"__end_cap_"{__compressed_pair<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> *, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > >="__value_"^{pair<double, float __attribute__((ext_vector_type(3)))>}}}"_keyedRotation"{vector<std::__1::pair<double, float __attribute__((ext_vector_type(3)))>, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > >="__begin_"^{pair<double, float __attribute__((ext_vector_type(3)))>}"__end_"^{pair<double, float __attribute__((ext_vector_type(3)))>}"__end_cap_"{__compressed_pair<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> *, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > >="__value_"^{pair<double, float __attribute__((ext_vector_type(3)))>}}}"_keyedShear"{vector<std::__1::pair<double, float __attribute__((ext_vector_type(3)))>, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > >="__begin_"^{pair<double, float __attribute__((ext_vector_type(3)))>}"__end_"^{pair<double, float __attribute__((ext_vector_type(3)))>}"__end_cap_"{__compressed_pair<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> *, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > >="__value_"^{pair<double, float __attribute__((ext_vector_type(3)))>}}}"_keyedScale"{vector<std::__1::pair<double, float __attribute__((ext_vector_type(3)))>, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > >="__begin_"^{pair<double, float __attribute__((ext_vector_type(3)))>}"__end_"^{pair<double, float __attribute__((ext_vector_type(3)))>}"__end_cap_"{__compressed_pair<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> *, std::__1::allocator<std::__1::pair<double, float __attribute__((ext_vector_type(3)))> > >="__value_"^{pair<double, float __attribute__((ext_vector_type(3)))>}}}"_startTime"d"_greatestTime"d"_identity"B"_resetTransformStack"B"_evaluationTime"d"_transform"{float4x4="columns"[4]}"_invTransform"{float4x4="columns"[4]}"_jacobiRotation"{float4x4="columns"[4]}"_invJacobiRotation"{float4x4="columns"[4]}}, name: _transform
}

+     // Error parsing type: {?=[4]}32@0:8@16d24, name: globalTransformWithObject:atTime:
+     // Error parsing type: {?=[4]}32@0:8@16d24, name: localTransformWithObject:atTime:
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) CAAnimation *transformAnimation;
-     // Error parsing type: {?=[4]}24@0:8d16, name: rotationMatrixAtTime:
-     // Error parsing type: {?=[4]}24@0:8d16, name: localTransformAtTime:
-     // Error parsing type: v80@0:8{?=[4]}16, name: setLocalTransform:
-     // Error parsing type: v88@0:8{?=[4]}16d80, name: setLocalTransform:forTime:
- (id)copyWithZone:(struct _NSZone *)arg1;
-     // Error parsing type: @84@0:8{?=[4]}16c80, name: initWithMatrix:resetsTransform:
-     // Error parsing type: @80@0:8{?=[4]}16, name: initWithMatrix:
- (id)initWithTransformComponent:(id)arg1 resetsTransform:(BOOL)arg2;
- (id)initWithTransformComponent:(id)arg1;
- (void)setIdentity;
- (id)initWithIdentity;
- (id)init;
@property(nonatomic) BOOL resetsTransform;
- (void)setTranslation:(double)arg1 forTime: /* Error: Ran out of types for this method. */;
- (void)setScale:(double)arg1 forTime: /* Error: Ran out of types for this method. */;
- (void)setShear:(double)arg1 forTime: /* Error: Ran out of types for this method. */;
- (void)setRotation:(double)arg1 forTime: /* Error: Ran out of types for this method. */;
-     // Error parsing type: v88@0:8{?=[4]}16d80, name: setMatrix:forTime:
-     // Error parsing type: 24@0:8d16, name: rotationAtTime:
-     // Error parsing type: 24@0:8d16, name: translationAtTime:
-     // Error parsing type: 24@0:8d16, name: shearAtTime:
-     // Error parsing type: 24@0:8d16, name: scaleAtTime:
// Error parsing type for property rotation:
// Property attributes: T,N

// Error parsing type for property scale:
// Property attributes: T,N

// Error parsing type for property shear:
// Property attributes: T,N

// Error parsing type for property translation:
// Property attributes: T,N

// Error parsing type for property matrix:
// Property attributes: T{?=[4]},N

@property(readonly, nonatomic) double maximumTime;
@property(readonly, nonatomic) double minimumTime;
@property(readonly, copy, nonatomic) NSArray *keyTimes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

