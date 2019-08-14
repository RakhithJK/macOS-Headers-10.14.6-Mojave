//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

#import <FrontBoard/FBProcessManagerObserver-Protocol.h>

@class BSWatchdog, FBProcess, NSString;

@interface FBWaitForProcessDeathTransaction : FBTransaction <FBProcessManagerObserver>
{
    FBProcess *_process;
    double _timeout;
    BSWatchdog *_watchdog;
}

@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) FBProcess *process; // @synthesize process=_process;
- (void).cxx_destruct;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (BOOL)_canBeInterrupted;
- (void)_begin;
- (id)initWithProcess:(id)arg1 timeout:(double)arg2;
- (id)initWithProcess:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

