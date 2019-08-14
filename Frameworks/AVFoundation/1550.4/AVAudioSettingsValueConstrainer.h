//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVAudioSettingsValueConstrainer : NSObject
{
    struct AudioStreamBasicDescription _inputASBD;
    struct AudioStreamBasicDescription _outputASBD;
    struct OpaqueAudioConverter *_audioConverter;
    unsigned int _outputDataRate;
    BOOL _needNewConverter;
    BOOL _needAvailableSampleRates;
    BOOL _needApplicableParameters;
    NSArray *_availableOutputSampleRates;
    NSMutableArray *_availableOutputDataRates;
    NSMutableArray *_applicableOutputSampleRatesForDataRate;
    NSMutableArray *_applicableOutputDataRatesForSampleRate;
}

- (float)_getAvailableOutputSampleRateFor:(float)arg1 rounding:(long long)arg2;
- (unsigned int)availableOutputChannelCountForDesiredChannelCount:(unsigned int)arg1 rounding:(long long)arg2;
- (float)applicableOutputSampleRateForDesiredSampleRate:(float)arg1 rounding:(long long)arg2;
@property(nonatomic) unsigned int outputDataRate;
@property(nonatomic) unsigned int outputChannelCount;
@property(nonatomic) unsigned int outputBitsPerChannel;
@property(nonatomic) unsigned int outputFormatFlags;
@property(nonatomic) unsigned int outputFormat;
@property(nonatomic) float outputSampleRate;
- (void)setInputPropertiesFromASBD:(struct AudioStreamBasicDescription)arg1;
- (void)_bringUpToDate;
- (id)_fetchApplicableOutputDataRates;
- (void)_buildApplicableDataRatesForSampleRates;
- (void)_buildAvailableSampleRates;
- (void)_buildAudioConverter;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

