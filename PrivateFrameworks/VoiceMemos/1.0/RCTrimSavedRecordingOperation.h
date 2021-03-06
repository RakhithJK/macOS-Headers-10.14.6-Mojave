//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VoiceMemos/RCTrimCompositionOperation.h>

@protocol RCMutableRecording, RCRecording;

@interface RCTrimSavedRecordingOperation : RCTrimCompositionOperation
{
    id <RCRecording> _sourceRecording;
    id <RCMutableRecording> _destinationRecording;
}

@property(readonly, nonatomic) id <RCMutableRecording> destinationRecording; // @synthesize destinationRecording=_destinationRecording;
@property(readonly, nonatomic) id <RCRecording> sourceRecording; // @synthesize sourceRecording=_sourceRecording;
- (void).cxx_destruct;
- (void)main;
- (id)initWithSourceRecording:(id)arg1 destinationRecording:(id)arg2 timeRange:(CDStruct_73a5d3ca)arg3 trimMode:(long long)arg4;

@end

