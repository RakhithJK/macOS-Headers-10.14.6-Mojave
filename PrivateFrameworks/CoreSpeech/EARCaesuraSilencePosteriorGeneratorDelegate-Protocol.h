//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class EARClientSilenceFeatures;

@protocol EARCaesuraSilencePosteriorGeneratorDelegate <NSObject>
- (void)clientSilenceFeaturesAvailable:(EARClientSilenceFeatures *)arg1;

@optional
- (void)silenceDurationEstimateAvailable:(float *)arg1 numEstimates:(unsigned long long)arg2 clientProcessedAudioMs:(float)arg3;
@end
