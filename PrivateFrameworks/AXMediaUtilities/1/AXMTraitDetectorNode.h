//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@interface AXMTraitDetectorNode : AXMEvaluationNode <NSSecureCoding>
{
    BOOL _shouldEvaluateColorInformation;
    long long _sampleFrequency;
    double _colorDistanceTheshold;
}

+ (id)title;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) double colorDistanceTheshold; // @synthesize colorDistanceTheshold=_colorDistanceTheshold;
@property(nonatomic) BOOL shouldEvaluateColorInformation; // @synthesize shouldEvaluateColorInformation=_shouldEvaluateColorInformation;
@property(nonatomic) long long sampleFrequency; // @synthesize sampleFrequency=_sampleFrequency;
- (void)_evaluateColorInformation:(id)arg1;
- (id)_blurValueForVisionObservation:(id)arg1;
- (id)_brightnessValueForVisionObservation:(id)arg1;
- (void)evaluate:(id)arg1;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (BOOL)requiresVisionFramework;
- (void)nodeInitialize;

@end
