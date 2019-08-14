//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AMSAudioDeviceBase : NSObject
{
    struct CAHALAudioDevice *halDevice;
    BOOL markedOffline;
    NSString *_uid;
}

+ (id)imageForDeviceState:(unsigned long long)arg1;
+ (id)nameForTransportType:(unsigned int)arg1;
@property(readonly) struct CAHALAudioDevice *halDevice; // @synthesize halDevice;
@property(readonly, copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)numberOfStreamsIsInput:(BOOL)arg1;
@property(nonatomic) double nominalSampleRate;
- (id)sampleRateForItemAtIndex:(long long)arg1;
- (long long)numberOfSampleRates;
- (unsigned int)getCurrentClockSourceID;
- (id)nameForDataSourceID:(unsigned int)arg1 input:(BOOL)arg2;
- (void)setCurrentDataSourceID:(unsigned int)arg1 input:(BOOL)arg2;
- (unsigned int)getCurrentDataSourceID:(BOOL)arg1;
- (BOOL)isDataSourceSettable:(BOOL)arg1;
- (id)getDataSourceIDs:(BOOL)arg1;
- (struct AudioChannelLayout *)createEmptyChannelLayout;
- (void)getPreferredChannelLayout:(struct AudioChannelLayout *)arg1;
- (void)getPreferredStereoChannelsLeft:(unsigned int *)arg1 right:(unsigned int *)arg2;
- (BOOL)multichannelConfigurationSupported;
- (BOOL)stereoConfigurationSupported;
- (unsigned int)getClockDomain;
- (id)getClockSources;
- (void)markOffline:(BOOL)arg1;
- (unsigned int)relatedDeviceIDAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long relatedDeviceCount;
@property(readonly, getter=isOnline) BOOL online;
@property(readonly, nonatomic, getter=isOutput) BOOL output;
@property(readonly, nonatomic, getter=isInput) BOOL input;
@property(readonly, nonatomic) unsigned long long outputChannelCount;
@property(readonly, nonatomic) unsigned long long inputChannelCount;
- (BOOL)isNameEditable;
@property(copy, nonatomic) NSString *name;
- (struct CAHALAudioDevice *)_device;
- (int)audioDevicePropertyChanged:(unsigned int)arg1 property:(unsigned int)arg2;
- (void)addListeners;
- (BOOL)isEqualTo:(id)arg1;
- (void)dealloc;
- (id)initWithUID:(id)arg1;
- (id)initWithAudioDeviceID:(unsigned int)arg1;

@end

