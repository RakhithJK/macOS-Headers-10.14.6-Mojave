//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDuet/NSObject-Protocol.h>

@class _CDPModelTuning;

@protocol _CDSocialInteractionAdvisorTuningDelegate <NSObject>
- (void)modelTunerWillStop:(_CDPModelTuning *)arg1;
- (void)modelTunerWillResume:(_CDPModelTuning *)arg1;
- (void)modelTuner:(_CDPModelTuning *)arg1 heartBeatWithlambda:(float)arg2 w0:(float)arg3 threshold:(float)arg4 score:(float)arg5 progress:(float)arg6;
@end
