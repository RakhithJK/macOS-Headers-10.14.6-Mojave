//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSVoiceTriggerDelegate-Protocol.h>

@class CSAudioCircularBuffer, NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerFidesClient : NSObject <CSVoiceTriggerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    CSAudioCircularBuffer *_audioBuffer;
}

@property(nonatomic) __weak CSAudioCircularBuffer *audioBuffer; // @synthesize audioBuffer=_audioBuffer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)voiceTriggerGotSuperVector:(id)arg1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;
- (void)_logDESRecordWithType:(long long)arg1 result:(id)arg2;
- (id)_lastTriggerDataWithResult:(id)arg1;
- (id)initWithAudioBuffer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

