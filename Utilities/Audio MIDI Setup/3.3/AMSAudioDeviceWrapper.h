//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AMSAudioDeviceBase.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface AMSAudioDeviceWrapper : AMSAudioDeviceBase
{
    NSArray *subdevices;
    NSArray *_inputStreams;
    NSArray *_outputStreams;
}

+ (id)imageForDevice:(id)arg1;
- (void).cxx_destruct;
- (id)streamWithStartingChannel:(unsigned long long)arg1 isInput:(BOOL)arg2;
- (void)setThruControlValue:(BOOL)arg1 channel:(unsigned int)arg2 isInput:(BOOL)arg3;
- (BOOL)thruControlValue:(unsigned int)arg1 isInput:(BOOL)arg2;
- (BOOL)isThruControlSettableForChannel:(unsigned int)arg1 isInput:(BOOL)arg2;
- (BOOL)hasThruControlForChannel:(unsigned int)arg1 isInput:(BOOL)arg2;
- (void)setMuteControlValue:(BOOL)arg1 channel:(unsigned int)arg2 isInput:(BOOL)arg3;
- (BOOL)muteControlValue:(unsigned int)arg1 isInput:(BOOL)arg2;
- (BOOL)isMuteControlSettableForChannel:(unsigned int)arg1 isInput:(BOOL)arg2;
- (BOOL)hasMuteControlForChannel:(unsigned int)arg1 isInput:(BOOL)arg2;
- (void)setVolumeControlDBValue:(float)arg1 channel:(unsigned int)arg2 isInput:(BOOL)arg3;
- (void)setVolumeControlScalarValue:(float)arg1 channel:(unsigned int)arg2 isInput:(BOOL)arg3;
- (void)updateMuteControlForInput:(BOOL)arg1;
- (float)maxVolumeDBValueForChannel:(unsigned int)arg1 isInput:(BOOL)arg2;
- (float)minVolumeDBValueForChannel:(unsigned int)arg1 isInput:(BOOL)arg2;
- (struct AudioValueRange)dbValueRangeForChannel:(unsigned int)arg1 isInput:(BOOL)arg2;
- (float)volumeControlDBValueForChannel:(unsigned int)arg1 isInput:(BOOL)arg2;
- (float)volumeControlScalarValueForChannel:(unsigned int)arg1 isInput:(BOOL)arg2;
- (BOOL)isVolumeControlSettableForChannel:(unsigned int)arg1 isInput:(BOOL)arg2;
- (BOOL)hasVolumeControlForChannel:(unsigned int)arg1 isInput:(BOOL)arg2;
- (id)longestChannelNameForInput:(BOOL)arg1;
- (void)setChannelName:(id)arg1 forChannel:(unsigned int)arg2 isInput:(BOOL)arg3;
- (id)channelNameForChannel:(unsigned int)arg1 isInput:(BOOL)arg2;
- (id)channelNameForChannel:(unsigned int)arg1 isInput:(BOOL)arg2 generateNameIfNecessary:(BOOL)arg3;
@property(readonly, nonatomic, getter=outputStreamNames) NSArray *outputStreamNames;
@property(readonly, nonatomic, getter=inputStreamNames) NSArray *inputStreamNames;
- (id)getStreamNames:(BOOL)arg1;
- (void)resetStreams;
@property(readonly, nonatomic, getter=getOutputStreams) NSArray *outputStreams;
@property(readonly, nonatomic, getter=getInputStreams) NSArray *inputStreams;
- (id)getCurrentStreams:(BOOL)arg1;
- (void)removeSubdevice:(id)arg1;
- (void)addSubdevice:(id)arg1;
- (void)resampleSubdevicesForNewClockDevice:(id)arg1;
- (BOOL)isNotInterleaved:(BOOL)arg1;
- (id)masterSubdevice;
- (id)subdeviceAtIndex:(unsigned long long)arg1;
- (unsigned long long)subdeviceCount;
@property(retain) NSDictionary *compositionDictionary;
@property(readonly) NSString *customConfigAppBundleID;
@property(readonly) BOOL hasCustomConfigApp;
- (BOOL)hasHeadphones;
- (BOOL)canBeDefaultInput;
- (BOOL)canBeSystemOutput;
- (BOOL)canBeDefaultOutput;
- (unsigned long long)outputChannelCount;
@property(readonly, getter=isStacked) BOOL stacked;
@property(readonly, getter=isAggregate) BOOL aggregate;
@property(getter=isDefaultInput) BOOL defaultInput;
@property(getter=isSystemOutput) BOOL systemOutput;
@property(getter=isDefaultOutput) BOOL defaultOutput;
@property(readonly, nonatomic) unsigned int transportType;
@property(readonly, copy, nonatomic) NSURL *iconLocation;
- (int)audioDevicePropertyChanged:(unsigned int)arg1 property:(unsigned int)arg2;
- (void)addAggregateListeners;
@property(readonly) NSArray *subdevices;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)getSubdeviceList;
- (id)initWithAudioDeviceID:(unsigned int)arg1;

@end

