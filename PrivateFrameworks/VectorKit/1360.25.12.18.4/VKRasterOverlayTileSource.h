//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VectorKit/VKTileSource.h>

@class NSArray, NSMutableArray, NSMutableSet, NSObject;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface VKRasterOverlayTileSource : VKTileSource
{
    NSMutableArray *_overlays;
    NSObject<OS_dispatch_group> *_renderGroup;
    BOOL _overrideMaxZoomLevel;
    NSMutableSet *_worldSizedOverlays;
}

@property(nonatomic) BOOL overrideMaxZoomLevel; // @synthesize overrideMaxZoomLevel=_overrideMaxZoomLevel;
- (BOOL)allowPreliminaryTiles;
@property(readonly, nonatomic) NSArray *overlays;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)invalidate;
- (void)_flush;
- (void)invalidateRect:(const Box_3d7e3c2c *)arg1 level:(long long)arg2;
- (void)_queueDraw:(const struct VKTileKey *)arg1;
- (BOOL)cancelFetchForKey:(const struct VKTileKey *)arg1;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1 sourceKey:(const struct VKTileKey *)arg2 isPrefetch:(BOOL)arg3;
- (BOOL)maximumZoomLevelBoundsCamera;
- (BOOL)minimumZoomLevelBoundsCamera;
- (unsigned int)maximumDownloadZoomLevel;
- (unsigned int)minimumDownloadZoomLevel;
- (long long)tileSize;
- (BOOL)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (void)dealloc;
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1;

@end

