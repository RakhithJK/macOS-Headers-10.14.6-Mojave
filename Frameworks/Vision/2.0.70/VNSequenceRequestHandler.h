//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/VNRequestCancelling-Protocol.h>
#import <Vision/VNRequestWarming-Protocol.h>

@class VNRequestPerformer;

@interface VNSequenceRequestHandler : NSObject <VNRequestWarming, VNRequestCancelling>
{
    VNRequestPerformer *_requestPerformer;
}

+ (id)asyncProcessingDispatchQueue;
+ (void)forcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanupWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestForcedCleanupWithOptions:(id)arg1;
+ (void)forcedCleanup;
+ (void)requestForcedCleanup;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (BOOL)prepareForPerformingRequests:(id)arg1 error:(id *)arg2;
- (BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id *)arg2;
- (BOOL)performRequests:(id)arg1 onImageSpecifier:(id)arg2 gatheredForensics:(id *)arg3 error:(id *)arg4;
- (BOOL)performRequests:(id)arg1 onImageSpecifier:(id)arg2 error:(id *)arg3;
- (BOOL)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id *)arg4 error:(id *)arg5;
- (BOOL)performRequests:(id)arg1 onImageData:(id)arg2 orientation:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)performRequests:(id)arg1 onImageData:(id)arg2 error:(id *)arg3;
- (BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id *)arg4 error:(id *)arg5;
- (BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 gatheredForensics:(id *)arg3 error:(id *)arg4;
- (BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 orientation:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)performRequests:(id)arg1 onImageURL:(id)arg2 error:(id *)arg3;
- (BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id *)arg4 error:(id *)arg5;
- (BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 gatheredForensics:(id *)arg3 error:(id *)arg4;
- (BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 orientation:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)performRequests:(id)arg1 onCIImage:(id)arg2 error:(id *)arg3;
- (BOOL)performRequests:(id)arg1 onCGImage:(struct CGImage *)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id *)arg4 error:(id *)arg5;
- (BOOL)performRequests:(id)arg1 onCGImage:(struct CGImage *)arg2 gatheredForensics:(id *)arg3 error:(id *)arg4;
- (BOOL)performRequests:(id)arg1 onCGImage:(struct CGImage *)arg2 orientation:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)performRequests:(id)arg1 onCGImage:(struct CGImage *)arg2 error:(id *)arg3;
- (BOOL)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer *)arg2 orientation:(unsigned int)arg3 gatheredForensics:(id *)arg4 error:(id *)arg5;
- (BOOL)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer *)arg2 gatheredForensics:(id *)arg3 error:(id *)arg4;
- (BOOL)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer *)arg2 orientation:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)performRequests:(id)arg1 onCVPixelBuffer:(struct __CVBuffer *)arg2 error:(id *)arg3;
- (BOOL)_performRequests:(id)arg1 onUnvettedImageBuffer:(id)arg2 gatheredForensics:(id *)arg3 error:(id *)arg4;
- (id)init;

@end

