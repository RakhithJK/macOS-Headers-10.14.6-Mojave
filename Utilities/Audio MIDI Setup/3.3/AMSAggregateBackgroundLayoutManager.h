//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AggregateViewOrientation-Protocol.h"
#import "CALayerDelegate-Protocol.h"
#import "CALayoutManager-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface AMSAggregateBackgroundLayoutManager : NSObject <CALayerDelegate, CALayoutManager, AggregateViewOrientation>
{
    NSMutableArray *sizeInfoCache;
    NSMutableDictionary *layerInfoLookup;
    unsigned long long _orientation;
}

+ (id)backgroundLayoutManager;
- (void).cxx_destruct;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubDevicesOfLayerVertically:(id)arg1;
- (void)layoutSubDevicesOfLayerHorizontally:(id)arg1;
- (void)layoutSubDevicesOfLayer:(id)arg1;
- (void)sortCacheLayoutSize;
- (void)createCache:(id)arg1;
- (double)currentContentWidthForDeviceLayers:(id)arg1;
- (double)maxHeightForDeviceLayers:(id)arg1;
- (double)maxWidthForDeviceLayers:(id)arg1;
- (double)currentMaxSizeForDeviceLayers:(id)arg1;
- (void)invalidateLayoutOfLayer:(id)arg1;
- (struct CGSize)preferredSizeOfLayer:(id)arg1;
@property unsigned long long orientation; // @synthesize orientation=_orientation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
