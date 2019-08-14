//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFDateRangeSystemChangeReceiver-Protocol.h>

@class NSCalendar, NSDate, NSString, NSTimer;
@protocol PFDateRangeStringRepresentationControllerDelegate;

@interface PFDateRangeStringRepresentationController : NSObject <PFDateRangeSystemChangeReceiver>
{
    id <PFDateRangeStringRepresentationControllerDelegate> _delegate;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimer *_expirationTimer;
    NSTimer *_updateTimer;
    NSString *_stringRepresentation;
    long long _autoUpdatingEnabledCount;
    long long _pendingConfigurationChangesRecursiveCount;
    unsigned int _listeningToTimeRelatedNotifications:1;
    unsigned int _configurationChangesMade:1;
}

+ (void)updateStringRepresentationInController:(id)arg1;
+ (void)performUpdate:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (BOOL)isAutoUpdating;
- (void)stopAutoUpdating;
- (void)startAutoUpdating;
- (void)_disableAutoUpdating;
- (void)_enableAutoUpdating;
- (id)stringRepresentationForRangeFromDate:(id)arg1 toDate:(id)arg2;
- (id)stringRepresentationForDisplayDate:(id)arg1 startOfDisplayDateDay:(id)arg2 expirationTimeInterval:(double *)arg3;
- (id)endDate;
- (id)startDate;
- (void)setStartDate:(id)arg1 endDate:(id)arg2;
@property(readonly) NSCalendar *calendar;
@property(readonly, nonatomic) __weak id <PFDateRangeStringRepresentationControllerDelegate> delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (BOOL)_updateStartDate:(id)arg1 endDate:(id)arg2;
- (void)_updateStringRepresentation:(id)arg1 startOfDisplayDateDay:(id)arg2;
- (void)_notifyDelegateDidUpdateStringRepresentation:(id)arg1;
- (void)_requestStringRepresentationUpdate;
- (void)_handleFiredTimer:(id)arg1;
- (void)_prepareForExpirationOnDate:(id)arg1;
- (BOOL)_prepareForExpirationAfterTimeInterval:(double)arg1;
- (void)_cancelExpirationTimer;
- (void)_handleSystemDidChangeNotification:(id)arg1;
- (void)performConfigurationChangeUsingBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

