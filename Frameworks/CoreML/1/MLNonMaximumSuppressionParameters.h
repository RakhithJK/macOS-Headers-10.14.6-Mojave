//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MLNonMaximumSuppressionParameters : NSObject
{
    _Bool _perClass;
    int _suppressionMethod;
    double _iouThreshold;
    double _confidenceThreshold;
    unsigned long long _minBoxes;
    long long _maxBoxes;
    unsigned long long _numClasses;
    NSString *_confidenceInputFeatureName;
    NSString *_coordinatesInputFeatureName;
    NSString *_iouThresholdInputFeatureName;
    NSString *_confidenceThresholdInputFeatureName;
    NSString *_confidenceOutputFeatureName;
    NSString *_coordinatesOutputFeatureName;
    NSArray *_labelNames;
}

@property(retain) NSArray *labelNames; // @synthesize labelNames=_labelNames;
@property(retain) NSString *coordinatesOutputFeatureName; // @synthesize coordinatesOutputFeatureName=_coordinatesOutputFeatureName;
@property(retain) NSString *confidenceOutputFeatureName; // @synthesize confidenceOutputFeatureName=_confidenceOutputFeatureName;
@property(retain) NSString *confidenceThresholdInputFeatureName; // @synthesize confidenceThresholdInputFeatureName=_confidenceThresholdInputFeatureName;
@property(retain) NSString *iouThresholdInputFeatureName; // @synthesize iouThresholdInputFeatureName=_iouThresholdInputFeatureName;
@property(retain) NSString *coordinatesInputFeatureName; // @synthesize coordinatesInputFeatureName=_coordinatesInputFeatureName;
@property(retain) NSString *confidenceInputFeatureName; // @synthesize confidenceInputFeatureName=_confidenceInputFeatureName;
@property _Bool perClass; // @synthesize perClass=_perClass;
@property unsigned long long numClasses; // @synthesize numClasses=_numClasses;
@property long long maxBoxes; // @synthesize maxBoxes=_maxBoxes;
@property unsigned long long minBoxes; // @synthesize minBoxes=_minBoxes;
@property double confidenceThreshold; // @synthesize confidenceThreshold=_confidenceThreshold;
@property double iouThreshold; // @synthesize iouThreshold=_iouThreshold;
@property int suppressionMethod; // @synthesize suppressionMethod=_suppressionMethod;
- (void).cxx_destruct;
- (id)objectBoundingBoxOutputDescription;

@end
