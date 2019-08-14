//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, VCBasebandMetrics, VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface AVCBasebandCongestionDetector : NSObject
{
    unsigned int _radioAccessTechnology;
    unsigned int _mode;
    AVCStatisticsCollector *_statisticsCollector;
    VCRateControlMediaController *_mediaController;
    VCBasebandMetrics *_basebandMetrics;
    double _notificationArrivalTime;
    unsigned int _basebandTxBitrate;
    unsigned int _basebandAverageBitrate;
    unsigned int _basebandQueueDepth;
    double _basebandExpectedQueuingDelay;
    unsigned int _targetBitrate;
    BOOL _isTargetBitrateStabilized;
    void *_logBasebandDump;
}

@property(readonly, nonatomic) double basebandExpectedQueuingDelay; // @synthesize basebandExpectedQueuingDelay=_basebandExpectedQueuingDelay;
@property(readonly, nonatomic) unsigned int basebandQueueDepth; // @synthesize basebandQueueDepth=_basebandQueueDepth;
@property(readonly, nonatomic) unsigned int basebandAverageBitrate; // @synthesize basebandAverageBitrate=_basebandAverageBitrate;
@property(readonly, nonatomic) unsigned int basebandTxBitrate; // @synthesize basebandTxBitrate=_basebandTxBitrate;
@property(retain, nonatomic) VCRateControlMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(nonatomic) BOOL isTargetBitrateStabilized; // @synthesize isTargetBitrateStabilized=_isTargetBitrateStabilized;
@property(nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned int radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
- (void)printFlushAckToBasebandDump:(unsigned char)arg1 transactionID:(unsigned short)arg2 packetDropped:(unsigned short)arg3 sequenceNumberArray:(unsigned short *)arg4;
- (void)processBasebandAck:(CDStruct_b203c80d *)arg1;
- (void)enableBasebandLogDump:(void *)arg1;
- (BOOL)processBasebandNotification:(CDStruct_b203c80d *)arg1 arrivalTime:(double)arg2 error:(id *)arg3;
- (BOOL)processBasebandNotification:(id)arg1 metaData:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)init;

@end
