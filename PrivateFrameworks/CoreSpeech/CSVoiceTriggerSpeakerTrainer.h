//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSVoiceTriggerSpeakerTrainer : NSObject
{
}

+ (id)sharedTrainer;
- (void)notifyImplicitTrainingUtteranceAvailable:(id)arg1 forVoiceProfileId:(id)arg2 withRecordDeviceInfo:(id)arg3 withRecordCtxt:(id)arg4 withVoiceTriggerCtxt:(id)arg5 withOtherCtxt:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;
- (BOOL)trainUtterance:(id)arg1 languageCode:(id)arg2 payload:(BOOL)arg3;
- (BOOL)trainUtterance:(id)arg1 languageCode:(id)arg2;

@end

