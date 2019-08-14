//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/GEOResourceManifestTileGroupObserver-Protocol.h>

@class GEOResourceManifestConfiguration, NSCache, NSString, VKPGenericShieldStyleInfo, VKResourceManager;

__attribute__((visibility("hidden")))
@interface VKGenericShieldGenerator : NSObject <GEOResourceManifestTileGroupObserver>
{
    VKPGenericShieldStyleInfo *_defaultStyle;
    NSCache *_defaultStylePacks;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    VKResourceManager *_resourceManager;
}

- (id)newArtworkWithScale:(double)arg1 style:(id)arg2 size:(long long)arg3 numberOfLines:(unsigned long long)arg4 overlayColor:(CDStruct_83984b6f)arg5;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 resourceManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

