//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface VCPCNNFaceLandmarkDetector : NSObject
{
    NSMutableArray *_landmarks;
}

+ (id)detector;
- (void).cxx_destruct;
- (id)landmarks;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withFaceBounds:(struct CGRect)arg2;
- (int)computeLandmarks:(float *)arg1;
- (float *)getInputBuffer;

@end

