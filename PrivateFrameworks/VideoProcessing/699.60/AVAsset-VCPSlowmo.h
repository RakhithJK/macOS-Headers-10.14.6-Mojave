//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVAsset.h>

@interface AVAsset (VCPSlowmo)
- (id)vcp_assetWithoutAdjustments:(id)arg1 duration:(double)arg2;
- (void)vcp_scaleRampWithIntervals:(id)arg1 andRates:(id)arg2 inSlowmoTimerange:(CDStruct_e83c9415)arg3 withTimeMapping:(id)arg4 inComposition:(id)arg5;
- (void)vcp_scaleSlowmoTimeRange:(CDStruct_e83c9415)arg1 withTimeMapping:(id)arg2 inComposition:(id)arg3;
@end

