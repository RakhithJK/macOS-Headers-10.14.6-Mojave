//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutputSettings.h>

@class AVAudioOutputSettings;

__attribute__((visibility("hidden")))
@interface AVCaptureAudioSettings : AVCaptureOutputSettings
{
    AVAudioOutputSettings *_avAudioOutputSettings;
}

@property(readonly, nonatomic) AVAudioOutputSettings *avAudioOutputSettings; // @synthesize avAudioOutputSettings=_avAudioOutputSettings;
- (id)outputSettingsDictionary;
- (void)dealloc;
- (id)initWithTrustedAudioSettingsDictionary:(id)arg1;
- (id)initWithAudioSettingsDictionary:(id)arg1;

@end
