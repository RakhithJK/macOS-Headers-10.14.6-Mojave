//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class CIImage, CIRenderDestination, CIRenderTask;

@protocol NURenderer <NSObject>
- (CIRenderTask *)renderImage:(CIImage *)arg1 rect:(CDStruct_996ac03c)arg2 toDestination:(CIRenderDestination *)arg3 atPoint:(CDStruct_912cb5d2)arg4 error:(out id *)arg5;
@end

