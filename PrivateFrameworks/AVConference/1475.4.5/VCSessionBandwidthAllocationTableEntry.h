//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol VCSessionDownlinkBandwidthAllocatorClient;

__attribute__((visibility("hidden")))
@interface VCSessionBandwidthAllocationTableEntry : NSObject
{
    id <VCSessionDownlinkBandwidthAllocatorClient> _client;
    unsigned int _maxNetworkBitrate;
    unsigned int _qualityIndex;
    BOOL _isLowestQualityAudio;
    unsigned char _type;
    unsigned int _streamID;
    unsigned int _actualNetworkBitrate;
    BOOL _hasRepairStreamID;
    unsigned int _repairStreamID;
    unsigned int _repairMaxNetworkBitrate;
    BOOL _enabled;
}

+ (long long)compareAudioEntry:(id)arg1 videoEntry:(id)arg2;
+ (long long)compareVideoEntry:(id)arg1 videoEntry:(id)arg2;
+ (long long)compareAudioEntry:(id)arg1 audioEntry:(id)arg2;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly) BOOL hasRepairStreamID; // @synthesize hasRepairStreamID=_hasRepairStreamID;
@property(readonly) unsigned int repairMaxNetworkBitrate; // @synthesize repairMaxNetworkBitrate=_repairMaxNetworkBitrate;
@property(readonly) unsigned int repairStreamID; // @synthesize repairStreamID=_repairStreamID;
@property unsigned int actualNetworkBitrate; // @synthesize actualNetworkBitrate=_actualNetworkBitrate;
@property(readonly) unsigned int streamID; // @synthesize streamID=_streamID;
@property(readonly) unsigned char type; // @synthesize type=_type;
@property BOOL isLowestQualityAudio; // @synthesize isLowestQualityAudio=_isLowestQualityAudio;
@property(readonly) unsigned int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
@property(readonly) unsigned int maxNetworkBitrate; // @synthesize maxNetworkBitrate=_maxNetworkBitrate;
@property(readonly) id <VCSessionDownlinkBandwidthAllocatorClient> client; // @synthesize client=_client;
- (long long)compare:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 networkBitrate:(unsigned int)arg3 qualityIndex:(unsigned int)arg4 streamID:(unsigned int)arg5 hasRepairStreamID:(BOOL)arg6 repairStreamID:(unsigned int)arg7 repairMaxNetworkBitrate:(unsigned int)arg8 enabled:(BOOL)arg9;
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 networkBitrate:(unsigned int)arg3 qualityIndex:(unsigned int)arg4 streamID:(unsigned int)arg5;

@end

