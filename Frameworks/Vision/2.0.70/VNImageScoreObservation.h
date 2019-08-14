//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNObservation.h>

@class NSNumber;

@interface VNImageScoreObservation : VNObservation
{
    NSNumber *_blurScore;
    NSNumber *_exposureScore;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *exposureScore; // @synthesize exposureScore=_exposureScore;
@property(retain, nonatomic) NSNumber *blurScore; // @synthesize blurScore=_blurScore;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

