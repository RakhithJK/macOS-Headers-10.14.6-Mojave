//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKTTLEventTracker : NSObject
{
}

+ (id)_travelStateMapping;
+ (id)_etaTypeMapping;
+ (id)_transportTypeMapping;
+ (id)_alertTypeMapping;
+ (id)_boolEnumMapping;
+ (void)trackDirectionsEngagedForTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 hasSuggestedLocation:(BOOL)arg4 isOnSharedCalendar:(BOOL)arg5;
+ (void)trackIsTTLEnabled:(BOOL)arg1;
+ (void)trackEventFiredTTLAlertWithAlertType:(unsigned long long)arg1 transportType:(unsigned long long)arg2 etaType:(unsigned long long)arg3 travelState:(unsigned long long)arg4 hasSuggestedLocation:(BOOL)arg5 isOnSharedCalendar:(BOOL)arg6;
+ (void)trackTTLCandidateEventHasSuggestedLocation:(BOOL)arg1 isOnSharedCalendar:(BOOL)arg2;
+ (void)trackSignificantEventHasSuggestedLocation:(BOOL)arg1 isOnSharedCalendar:(BOOL)arg2;

@end

