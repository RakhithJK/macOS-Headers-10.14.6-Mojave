//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNFaceRegionMapGenerator : VNDetector
{
    struct shared_ptr<vision::mod::FaceRegionMap> mFaceRegionMapAlgorithmImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (BOOL)completeInitializationAndReturnError:(id *)arg1;

@end

