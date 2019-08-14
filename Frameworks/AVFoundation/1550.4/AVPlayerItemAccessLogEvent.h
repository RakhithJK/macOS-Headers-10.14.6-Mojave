//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSCopying-Protocol.h>

@class AVPlayerItemAccessLogEventInternal, NSDate, NSString;

@interface AVPlayerItemAccessLogEvent : NSObject <NSCopying>
{
    AVPlayerItemAccessLogEventInternal *_playerItemAccessLogEvent;
}

@property(readonly, nonatomic) double switchBitrate;
@property(readonly, nonatomic) long long mediaRequestsWWAN;
@property(readonly, nonatomic) NSString *playbackType;
@property(readonly, nonatomic) double observedBitrateStandardDeviation;
@property(readonly, nonatomic) double observedMinBitrate;
@property(readonly, nonatomic) double observedMaxBitrate;
- (long long)entryReasonCode;
@property(readonly, nonatomic) long long downloadOverdue;
@property(readonly, nonatomic) double startupTime;
@property(readonly, nonatomic) long long numberOfDroppedVideoFrames;
@property(readonly, nonatomic) double averageAudioBitrate;
@property(readonly, nonatomic) double averageVideoBitrate;
@property(readonly, nonatomic) double indicatedAverageBitrate;
@property(readonly, nonatomic) double indicatedBitrate;
- (double)currentObservedBitrate;
@property(readonly, nonatomic) double observedBitrate;
@property(readonly, nonatomic) double transferDuration;
@property(readonly, nonatomic) long long numberOfBytesTransferred;
@property(readonly, nonatomic) long long numberOfStalls;
@property(readonly, nonatomic) double durationWatched;
@property(readonly, nonatomic) double segmentsDownloadedDuration;
@property(readonly, nonatomic) double playbackStartOffset;
@property(readonly, nonatomic) NSString *playbackSessionID;
@property(readonly, nonatomic) long long numberOfServerAddressChanges;
@property(readonly, nonatomic) NSString *serverAddress;
@property(readonly, nonatomic) NSString *URI;
@property(readonly, nonatomic) NSDate *playbackStartDate;
@property(readonly, nonatomic) long long numberOfSegmentsDownloaded;
@property(readonly, nonatomic) long long numberOfMediaRequests;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (id)_common_init;
- (id)serviceIdentifier;

@end

