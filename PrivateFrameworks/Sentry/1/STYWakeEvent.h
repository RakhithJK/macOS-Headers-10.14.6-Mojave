//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class STYWakeDetectorDebugInfo;

@interface STYWakeEvent : NSObject
{
    unsigned long long _wakeType;
    unsigned long long _sleepType;
    unsigned long long _endType;
    unsigned long long _wakeStart;
    unsigned long long _kernelStart;
    unsigned long long _graphicsReady;
    unsigned long long _loginWindowWakeEnd;
    STYWakeDetectorDebugInfo *_debugInfo;
}

@property(retain, nonatomic) STYWakeDetectorDebugInfo *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(nonatomic) unsigned long long loginWindowWakeEnd; // @synthesize loginWindowWakeEnd=_loginWindowWakeEnd;
@property(nonatomic) unsigned long long graphicsReady; // @synthesize graphicsReady=_graphicsReady;
@property(nonatomic) unsigned long long kernelStart; // @synthesize kernelStart=_kernelStart;
@property(nonatomic) unsigned long long wakeStart; // @synthesize wakeStart=_wakeStart;
@property(nonatomic) unsigned long long endType; // @synthesize endType=_endType;
@property(nonatomic) unsigned long long sleepType; // @synthesize sleepType=_sleepType;
@property(nonatomic) unsigned long long wakeType; // @synthesize wakeType=_wakeType;
- (void).cxx_destruct;
- (id)description;
@property(readonly) unsigned long long wakeEnd;

@end
