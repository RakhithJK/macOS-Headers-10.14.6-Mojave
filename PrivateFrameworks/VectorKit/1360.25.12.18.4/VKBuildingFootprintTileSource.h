//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VectorKit/VKVectorTileSource.h>

__attribute__((visibility("hidden")))
@interface VKBuildingFootprintTileSource : VKVectorTileSource
{
    long long _minimumZoomLevel;
    BOOL _makeFacades;
    BOOL _prepareExtrusion;
}

@property(nonatomic) BOOL makeFacades; // @synthesize makeFacades=_makeFacades;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3 userInfo:(id)arg4;
- (unsigned char)mapLayerForZoomLevelRange;
- (BOOL)maximumZoomLevelBoundsCamera;
- (BOOL)minimumZoomLevelBoundsCamera;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 taskContext:(shared_ptr_e963992e)arg5;

@end

