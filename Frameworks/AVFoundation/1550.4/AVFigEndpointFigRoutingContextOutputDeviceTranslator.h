//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVFigRoutingContextOutputDeviceTranslator-Protocol.h>

@class NSString;

@interface AVFigEndpointFigRoutingContextOutputDeviceTranslator : NSObject <AVFigRoutingContextOutputDeviceTranslator>
{
    BOOL _useRouteConfigUpdatedNotification;
}

+ (id)sharedOutputDeviceTranslator;
- (void)removeOutputDevice:(id)arg1 fromRoutingContext:(struct OpaqueFigRoutingContext *)arg2;
- (void)addOutputDevice:(id)arg1 withOptions:(struct __CFDictionary *)arg2 toRoutingContext:(struct OpaqueFigRoutingContext *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setOutputDevices:(id)arg1 withOptions:(struct __CFDictionary *)arg2 onRoutingContext:(struct OpaqueFigRoutingContext *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setOutputDevices:(id)arg1 withOptions:(struct __CFDictionary *)arg2 onRoutingContext:(struct OpaqueFigRoutingContext *)arg3;
- (id)outputDevicesFromRoutingContext:(struct OpaqueFigRoutingContext *)arg1;
- (void)setOutputDevice:(id)arg1 withOptions:(struct __CFDictionary *)arg2 onRoutingContext:(struct OpaqueFigRoutingContext *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)outputDeviceFromRoutingContext:(struct OpaqueFigRoutingContext *)arg1;
- (id)initForUsingRouteConfigUpdatedNotification:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

