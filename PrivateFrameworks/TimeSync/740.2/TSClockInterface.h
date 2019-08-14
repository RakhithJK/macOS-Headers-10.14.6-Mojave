//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TimeSync/TSClockClient-Protocol.h>

@class NSString, TSClock;
@protocol OS_dispatch_queue;

@interface TSClockInterface : NSObject <TSClockClient>
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    CDUnknownFunctionPointerType _lockStateCallback;
    void *_lockStateRefcon;
    CDUnknownFunctionPointerType _masterChangeCallback;
    void *_masterChangeRefcon;
    CDUnknownFunctionPointerType _gptpGrandmasterCallback;
    void *_gptpGrandmasterRefcon;
    CDUnknownFunctionPointerType _gptpGrandmasterPortCallback;
    void *_gptpGrandmasterPortRefcon;
    CDUnknownFunctionPointerType _gptpLocalPortCallback;
    void *_gptpLocalPortRefcon;
    TSClock *_clock;
}

@property(retain, nonatomic) TSClock *clock; // @synthesize clock=_clock;
- (void)dealloc;
- (void)didChangeLocalPortWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3;
- (void)didEndClockGrandmasterChangeForClock:(id)arg1;
- (void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2;
- (void)didChangeClockMasterForClock:(id)arg1;
- (void)setgPTPLocalPortNotificationCallback:(CDUnknownFunctionPointerType)arg1 refcon:(void *)arg2;
- (void)setgPTPGrandmasterIDAndPortNotificationCallback:(CDUnknownFunctionPointerType)arg1 refcon:(void *)arg2;
- (void)setgPTPGrandmasterNotificationCallback:(CDUnknownFunctionPointerType)arg1 refcon:(void *)arg2;
- (void)setMasterChangeNotificationCallback:(CDUnknownFunctionPointerType)arg1 refcon:(void *)arg2;
- (void)setLockStateNotificationCallback:(CDUnknownFunctionPointerType)arg1 refcon:(void *)arg2;
- (id)initWithClockIdentifier:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

