//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSServicesMonitorObserver-Protocol.h>
#import <AppKit/_NSQuickActionProviderSource-Protocol.h>

@class NSServicesMonitor, NSSet, NSString, _NSQuickActionPresentation;

__attribute__((visibility("hidden")))
@interface _NSLegacyServiceQuickActionProviderSource : NSObject <NSServicesMonitorObserver, _NSQuickActionProviderSource>
{
    _NSQuickActionPresentation *_presentation;
    NSServicesMonitor *_monitor;
    NSSet *_quickActions;
    void *_observationInfo;
}

+ (BOOL)automaticallyNotifiesObserversOfQuickActions;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)providerSourceWithPresentation:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
@property(readonly, copy) NSSet *quickActions;
- (void *)observationInfo;
- (void)setObservationInfo:(void *)arg1;
- (void)servicesDidChange;
- (id)init;
- (id)initWithPresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

