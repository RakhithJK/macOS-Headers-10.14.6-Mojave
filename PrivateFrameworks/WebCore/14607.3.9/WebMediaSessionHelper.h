//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebMediaSessionHelper : NSObject
{
    struct MediaSessionManageriOS *_callback;
    _Bool _monitoringAirPlayRoutes;
    _Bool _startMonitoringAirPlayRoutesPending;
}

- (void)applicationDidEnterBackground:(id)arg1;
- (void)wirelessRoutesAvailableDidChange:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)interruption:(id)arg1;
- (BOOL)hasWirelessTargetsAvailable;
- (void)clearCallback;
- (void)dealloc;
- (id)initWithCallback:(struct MediaSessionManageriOS *)arg1;

@end

