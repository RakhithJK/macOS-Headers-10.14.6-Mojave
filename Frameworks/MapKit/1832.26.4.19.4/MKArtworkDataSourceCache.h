//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKTransitArtworkManager, NSCache;

@interface MKArtworkDataSourceCache : NSObject
{
    NSCache *_artworkImageCache;
    MKTransitArtworkManager *_artworkManager;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) MKTransitArtworkManager *artworkManager; // @synthesize artworkManager=_artworkManager;
- (void).cxx_destruct;
- (void)_setArtworkImageInCache:(id)arg1 forKey:(id)arg2;
- (id)_lookupArtworkInCacheWithKey:(id)arg1;
- (id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 widthPaddingMultiple:(double)arg5;
- (id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4;
- (id)imageForSizedArtwork:(id)arg1 scale:(double)arg2;
- (void)purge;
- (void)_shieldPackDidUpdate;
- (id)initWithArtworkManager:(id)arg1;

@end
