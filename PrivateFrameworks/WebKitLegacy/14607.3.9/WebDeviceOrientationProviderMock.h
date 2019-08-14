//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebDeviceOrientationProvider-Protocol.h>
#import <WebKitLegacy/WebDeviceOrientationProviderMock-Protocol.h>

@class NSString, WebDeviceOrientationProviderMockInternal;

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProviderMock, WebDeviceOrientationProvider>
{
    WebDeviceOrientationProviderMockInternal *m_internal;
}

+ (id)shared;
- (void)setController:(struct DeviceOrientationController *)arg1;
- (id)lastOrientation;
- (void)stopUpdating;
- (void)startUpdating;
- (void)setOrientation:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

