//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCAudioPowerSpectrumMeterDelegate-Protocol.h>

@class AVConferenceXPCClient, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumManager : NSObject <VCAudioPowerSpectrumMeterDelegate>
{
    NSMutableArray *_meters;
    NSMutableDictionary *_sources;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableDictionary *sources; // @synthesize sources=_sources;
@property(readonly, nonatomic) NSMutableArray *meters; // @synthesize meters=_meters;
- (void)audioPowerSpectrumMeter:(id)arg1 didUpdateAudioPowerSpectrums:(id)arg2;
- (void)deregisterBlocksForService;
- (void)registerBlocksForService;
- (void)unregisterAudioPowerSpectrumSourceForStreamToken:(id)arg1;
- (void)registerAudioPowerMeterSource:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

