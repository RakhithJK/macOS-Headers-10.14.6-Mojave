//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUImageTransform.h>

@interface NUImageTransformOrientation : NUImageTransform
{
    CDStruct_d58201db _inputImageSize;
    long long _orientation;
}

@property(readonly) long long orientation; // @synthesize orientation=_orientation;
- (id)description;
- (void)nu_updateDigest:(id)arg1;
- (BOOL)isEqualToGeometryTransformOrientation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (id)inverseTransform;
- (id)initWithOrientation:(long long)arg1 imageSize:(CDStruct_912cb5d2)arg2;
- (id)init;

@end
