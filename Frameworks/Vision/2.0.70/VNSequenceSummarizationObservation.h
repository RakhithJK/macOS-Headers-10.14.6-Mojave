//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNObservation.h>

@class NSArray, NSNumber;

@interface VNSequenceSummarizationObservation : VNObservation
{
    NSArray *_lstmScores;
    NSNumber *_frameRate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *lstmScores; // @synthesize lstmScores=_lstmScores;
@property(retain, nonatomic) NSNumber *frameRate; // @synthesize frameRate=_frameRate;
- (void).cxx_destruct;
- (void)setLstmScores:(id)arg1;
- (id)generateSequenceSummaryWithMinClipDuration:(id)arg1 maxClipDuration:(id)arg2 maxSequenceSummaryDuration:(id)arg3 error:(id *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLSTMScores:(id)arg1 frameRate:(id)arg2 requestRevision:(unsigned long long)arg3;
- (id)initWithRequestRevision:(unsigned long long)arg1;

@end

