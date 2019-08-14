//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTDictionarySerializable-Protocol.h>
#import <MobileTimer/NAEquatable-Protocol.h>
#import <MobileTimer/NSCopying-Protocol.h>
#import <MobileTimer/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface MTSound : NSObject <MTDictionarySerializable, NAEquatable, NSCopying, NSSecureCoding>
{
    unsigned long long _soundType;
    NSString *_toneIdentifier;
    NSNumber *_mediaItemIdentifier;
    NSString *_vibrationIdentifier;
    NSNumber *_soundVolume;
}

+ (BOOL)supportsSecureCoding;
+ (void)_saveDefaultTimerSound:(id)arg1;
+ (void)_saveDefaultAlarmSound:(id)arg1;
+ (id)_loadDefaultTimerSound;
+ (id)_loadDefaultAlarmSound;
+ (id)songSoundWithIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 volume:(id)arg3;
+ (id)toneSoundWithIdentifier:(id)arg1 vibrationIdentifer:(id)arg2 volume:(id)arg3;
+ (void)setDefaultSound:(id)arg1 forCategory:(unsigned long long)arg2;
+ (id)defaultSoundForCategory:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *soundVolume; // @synthesize soundVolume=_soundVolume;
@property(readonly, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
@property(readonly, nonatomic) NSNumber *mediaItemIdentifier; // @synthesize mediaItemIdentifier=_mediaItemIdentifier;
@property(readonly, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
@property(readonly, nonatomic) unsigned long long soundType; // @synthesize soundType=_soundType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)interruptAudio;
- (BOOL)isEqualToSound:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithSound:(id)arg1 usingVolume:(id)arg2;
- (id)initWithMediaItemIdentifier:(id)arg1 vibrationIdentifier:(id)arg2 volume:(id)arg3;
- (id)initWithToneIdentifier:(id)arg1 vibrationIdentifer:(id)arg2 volume:(id)arg3;
- (id)unSoundIsGoToBed:(BOOL)arg1 isEarlyWakeUp:(BOOL)arg2 isWakeUp:(BOOL)arg3;
- (id)unSound;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

