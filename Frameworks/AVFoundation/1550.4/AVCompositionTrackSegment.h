//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVAssetTrackSegment.h>

#import <AVFoundation/NSSecureCoding-Protocol.h>

@class AVCompositionTrackSegmentInternal, NSURL;

@interface AVCompositionTrackSegment : AVAssetTrackSegment <NSSecureCoding>
{
    AVCompositionTrackSegmentInternal *_priv;
}

+ (BOOL)supportsSecureCoding;
+ (id)compositionTrackSegmentWithTimeRange:(CDStruct_e83c9415)arg1;
+ (id)compositionTrackSegmentWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(CDStruct_e83c9415)arg3 targetTimeRange:(CDStruct_e83c9415)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) int sourceTrackID;
@property(readonly, nonatomic) NSURL *sourceURL;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1;
- (id)initWithURL:(id)arg1 trackID:(int)arg2 sourceTimeRange:(CDStruct_e83c9415)arg3 targetTimeRange:(CDStruct_e83c9415)arg4;
- (id)_initWithTimeMapping:(CDStruct_82206317)arg1;
- (id)init;

@end

