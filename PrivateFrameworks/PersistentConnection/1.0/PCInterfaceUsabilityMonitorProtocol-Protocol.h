//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PersistentConnection/PCInterfaceMonitorProtocol-Protocol.h>

@protocol PCInterfaceUsabilityMonitorDelegate;

@protocol PCInterfaceUsabilityMonitorProtocol <PCInterfaceMonitorProtocol>
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
@property(readonly, nonatomic) BOOL isRadioHot;
- (void)setTrackUsability:(BOOL)arg1;
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;
- (void)setTrackedTimeInterval:(double)arg1;
@end

