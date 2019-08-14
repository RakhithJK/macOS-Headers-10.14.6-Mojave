//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HMSymptomsHandler, NSSet;

@protocol HMSymptomsHandlerDelegate <NSObject>

@optional
- (void)symptomsHandler:(HMSymptomsHandler *)arg1 didUpdateFixState:(long long)arg2;
- (void)symptomsHandler:(HMSymptomsHandler *)arg1 didUpdateCanInitiateFix:(BOOL)arg2;
- (void)fixSessionAvailabilityDidUpdateForSymptomsHandler:(HMSymptomsHandler *)arg1;
- (void)symptomsHandler:(HMSymptomsHandler *)arg1 didUpdateSymptoms:(NSSet *)arg2;
@end

