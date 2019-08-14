//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TimeSync/TSClock.h>

@class __TSKernelClockNotification;

@interface TSKernelClock : TSClock
{
    unsigned int _service;
    unsigned int _connection;
    struct IONotificationPort *_notificationPort;
    unsigned int _interestNotification;
    BOOL _serviceIsAlive;
    __TSKernelClockNotification *_clockForNotification;
}

+ (id)clockNameForClockIdentifier:(unsigned long long)arg1;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)arg1;
+ (id)diagnosticInfoForService:(unsigned int)arg1;
+ (unsigned int)serviceForClockIdentifier:(unsigned long long)arg1;
+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1;
+ (id)availableKernelClockIdentifiers;
- (id)diagnosticDescriptionWithIndent:(id)arg1;
- (void)dealloc;
- (id)clockName;
- (void)_handleInterestNotification:(unsigned int)arg1 withArgument:(void *)arg2;
- (BOOL)deregisterAsyncDCLCallback;
- (BOOL)registerAsyncCallback;
- (void)_handleNotification:(unsigned int)arg1 withArg1:(unsigned long long)arg2 andArg2:(unsigned long long)arg3;
- (void)setServiceIsAlive:(BOOL)arg1;
@property(readonly, nonatomic) BOOL serviceIsAlive; // @dynamic serviceIsAlive;
@property(readonly, nonatomic) unsigned int connection; // @dynamic connection;
@property(readonly, nonatomic) unsigned int service; // @dynamic service;
- (BOOL)getRateRatioNumerator:(unsigned long long *)arg1 denominator:(unsigned long long *)arg2 machAnchor:(unsigned long long *)arg3 andDomainAnchor:(unsigned long long *)arg4 withError:(id *)arg5;
- (double)hostRateRatio;
- (int)_lockState;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)arg1;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)arg1;
- (BOOL)convertFromDomainTime:(unsigned long long *)arg1 toMachAbsoluteTime:(unsigned long long *)arg2 withCount:(unsigned int)arg3;
- (BOOL)convertFromMachAbsoluteTime:(unsigned long long *)arg1 toDomainTime:(unsigned long long *)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned int *)arg2;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned int *)arg2;
- (id)initWithClockIdentifier:(unsigned long long)arg1;

@end

