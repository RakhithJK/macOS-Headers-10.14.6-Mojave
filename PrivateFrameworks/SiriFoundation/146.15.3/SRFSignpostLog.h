//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SRFSignpostLog : NSObject
{
}

+ (void)audioManagerUnpausedMediaClient:(id)arg1;
+ (void)audioManagerPausedMediaClient:(id)arg1;
+ (void)audioManagerUnduckedAudio;
+ (void)audioManagerDuckedAudio;
+ (void)audioManagerUnpausedMusic;
+ (void)audioManagerPausedMusic;
+ (void)SRFSpeechVocalizationEnd;
+ (void)SRFSpeechVocalizationBegin;
+ (void)SRFSpeechCreation:(unsigned long long)arg1;
+ (void)SRFSiriViewDidLayoutEvent;
+ (void)SRFSiriViewWillLayoutEvent;
+ (void)SRFSiriViewDidAppearEvent;
+ (void)SRFSiriViewWillAppearEvent;
+ (void)SRFSiriViewDidLoadEvent;
+ (void)SRFSiriLoadViewEvent;
+ (void)SRFSiriViewDidMoveToWindowEvent;
+ (void)SRFSiriViewWillMoveToWindowEvent;
+ (void)SRFSiriAwakeFromNibEvent;
+ (void)SRFReleaseDarkWakeAssertionEvent;
+ (void)SRFHoldDarkWakeAssertionEvent;
+ (void)SRFPresentAlertEvent;
+ (void)SRFInvokeEventReceived:(id)arg1;
+ (void)SRFInvokeEvent:(id)arg1;
+ (id)sharedInstance;

@end

