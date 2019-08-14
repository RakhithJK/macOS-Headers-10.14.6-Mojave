//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AirPlayLocalSlideshow;
@protocol OS_dispatch_queue;

@interface MediaControlServer : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    AirPlayLocalSlideshow *_slideshow;
    double _lastActivity;
    // Error parsing type: ^{AirPlayReceiverServerPrivate={__CFRuntimeBase=QAQ}^v@i^{OpaqueAPAdvertiser}CC^{HTTPServerPrivate}@^{HTTPServerPrivate}[16C]fCiCC@IQ^{OpaqueAPReceiverSystemInfo}CC^{__CFDictionary}^{__CFDictionary}^{MediaControlServerPrivate}^{__CFDictionary}IiI^{APReceiverSessionManagerOpaque}^{OpaqueFigValeria}^?CCCCCC}, name: _connectionsServer
}

- (void)slideshowRequestAssetWithInfo:(id)arg1 sessionUUID:(const char *)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_stopVideo:(struct OpaqueAPReceiverRequestProcessor *)arg1;
- (int)_startVideo:(struct OpaqueAPReceiverRequestProcessor *)arg1 params:(id)arg2;
- (void)_slideshowWillStop:(id)arg1;
- (void)_slideshowWillStart:(id)arg1;
- (void)_slideshowActivity:(id)arg1;
- (int)_stopSlideshow:(struct OpaqueAPReceiverRequestProcessor *)arg1;
- (int)_startSlideshow:(struct OpaqueAPReceiverRequestProcessor *)arg1 options:(id)arg2;
- (int)_showPhoto:(struct OpaqueAPReceiverRequestProcessor *)arg1 options:(id)arg2 data:(id)arg3 path:(id)arg4;
- (void)_ensurePresentationStopped:(struct OpaqueAPReceiverRequestProcessor *)arg1 type:(id)arg2;
- (int)_ensurePresentationStarted:(struct OpaqueAPReceiverRequestProcessor *)arg1 type:(id)arg2;
- (void)postEvent:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)invalidate;
- (void)dealloc;
-     // Error parsing type: @24@0:8^{AirPlayReceiverServerPrivate={__CFRuntimeBase=QAQ}^v@i^{OpaqueAPAdvertiser}CC^{HTTPServerPrivate}@^{HTTPServerPrivate}[16C]fCiCC@IQ^{OpaqueAPReceiverSystemInfo}CC^{__CFDictionary}^{__CFDictionary}^{MediaControlServerPrivate}^{__CFDictionary}IiI^{APReceiverSessionManagerOpaque}^{OpaqueFigValeria}^?CCCCCC}16, name: init:

@end

