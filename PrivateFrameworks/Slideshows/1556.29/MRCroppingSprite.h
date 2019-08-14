//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRCroppingSprite : NSObject
{
    float mModelViewProjectionMatrix[16];
    BOOL mPreservesImageAspectRatio;
    BOOL mHitIsActive;
    BOOL mNeedsInSpriteCoordinates;
    BOOL _usesOwnMatrixForHitTest;
    unsigned char mMeshType;
    double mRotation;
    struct CGPoint mPosition;
    struct CGSize mHalfSize;
    struct CGSize mSpriteCoordinatesFactor;
    struct CGPoint mSpriteCoordinatesOffset;
    struct CGRect mInnerRect;
    struct CGRect mOuterRect;
}

+ (void)renderImage:(id)arg1 inContext:(id)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4 withReferenceAspectRatio:(float)arg5 andJustifications:(struct CGPoint)arg6;
+ (void)renderImage:(id)arg1 withMask:(id)arg2 inContext:(id)arg3 atPosition:(struct CGPoint)arg4 andSize:(struct CGSize)arg5 zRotation:(float)arg6;
+ (void)renderImage:(id)arg1 inContext:(id)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4 zRotation:(float)arg5;
+ (void)renderImage:(id)arg1 inContext:(id)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4;
+ (void)renderDumbImage:(id)arg1 inContext:(id)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4 zRotation:(float)arg5;
+ (void)renderDumbImage:(id)arg1 inContext:(id)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4;
@property(nonatomic) unsigned char meshType; // @synthesize meshType=mMeshType;
@property(nonatomic) struct CGPoint spriteCoordinatesOffset; // @synthesize spriteCoordinatesOffset=mSpriteCoordinatesOffset;
@property(nonatomic) struct CGSize spriteCoordinatesFactor; // @synthesize spriteCoordinatesFactor=mSpriteCoordinatesFactor;
@property(nonatomic) BOOL usesOwnMatrixForHitTest; // @synthesize usesOwnMatrixForHitTest=_usesOwnMatrixForHitTest;
@property(nonatomic) BOOL needsInSpriteCoordinates; // @synthesize needsInSpriteCoordinates=mNeedsInSpriteCoordinates;
@property(nonatomic) BOOL hitIsActive; // @synthesize hitIsActive=mHitIsActive;
@property(nonatomic) BOOL preservesImageAspectRatio; // @synthesize preservesImageAspectRatio=mPreservesImageAspectRatio;
@property(nonatomic) struct CGRect outerRect; // @synthesize outerRect=mOuterRect;
@property(nonatomic) struct CGRect innerRect; // @synthesize innerRect=mInnerRect;
@property(readonly, nonatomic) double rotation; // @synthesize rotation=mRotation;
@property(readonly, nonatomic) struct CGSize halfSize; // @synthesize halfSize=mHalfSize;
@property(readonly, nonatomic) struct CGPoint position; // @synthesize position=mPosition;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2;
- (BOOL)hitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)renderImageOuter:(id)arg1 inContext:(id)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4 zRotation:(float)arg5;
- (void)renderImageMiddle:(id)arg1 inContext:(id)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4 zRotation:(float)arg5;
- (void)renderImageInner:(id)arg1 inContext:(id)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4 zRotation:(float)arg5;
- (void)renderImageOuter:(id)arg1 inContext:(id)arg2;
- (void)renderImageMiddle:(id)arg1 inContext:(id)arg2;
- (void)renderImageInner:(id)arg1 inContext:(id)arg2;
- (void)renderImage:(id)arg1 inContext:(id)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4 withReferenceAspectRatio:(float)arg5 andJustifications:(struct CGPoint)arg6;
- (void)renderImage:(id)arg1 withMask:(id)arg2 inContext:(id)arg3 atPosition:(struct CGPoint)arg4 andSize:(struct CGSize)arg5 zRotation:(float)arg6;
- (void)renderImage:(id)arg1 inContext:(id)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4 zRotation:(float)arg5;
- (void)renderImage:(id)arg1 inContext:(id)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4;
- (void)renderDumbImage:(id)arg1 inContext:(id)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4 zRotation:(float)arg5;
- (void)renderDumbImage:(id)arg1 inContext:(id)arg2 atPosition:(struct CGPoint)arg3 andSize:(struct CGSize)arg4;
- (void)getOpaquePosition:(struct CGPoint *)arg1 andHalfSize:(struct CGSize *)arg2;
- (void)fakeRenderInContext:(id)arg1 atPosition:(struct CGPoint)arg2 andSize:(struct CGSize)arg3 zRotation:(float)arg4;
- (void)reset;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 zRotation:(float)arg3 innerRect:(struct CGRect)arg4 outerRect:(struct CGRect)arg5 context:(id)arg6;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 zRotation:(float)arg3 innerRect:(struct CGRect)arg4 context:(id)arg5;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 zRotation:(float)arg3 context:(id)arg4;
- (id)init;

@end

