//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNImageRegistrationRequest.h>

@interface VNHomographicImageRegistrationRequest : VNImageRegistrationRequest
{
}

- (BOOL)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (BOOL)allowsCachingOfResults;
-     // Error parsing type: c72@0:8^{?=[3]}16^{__CVBuffer=}24^{__CVBuffer=}32^{ImageRegistrationCtx_s=}40^v48r^{?=[3]}56^@64, name: _calculateHomographicWarpTransform:ofFloatingImagePixelBuffer:ontoReferenceImagePixelBuffer:usingImageRegistrationContext:glContext:seededWithPreviousWarpTransform:error:
- (BOOL)_createN:(unsigned long long)arg1 CVPixelBuffers:(struct __CVBuffer **)arg2 withPixelFormat:(unsigned int)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 error:(id *)arg6;
- (struct __CVBuffer *)_createHomographicPixelBufferFromImageBuffer:(id)arg1 cropRect:(struct CGRect)arg2 options:(id)arg3 error:(id *)arg4;

@end

