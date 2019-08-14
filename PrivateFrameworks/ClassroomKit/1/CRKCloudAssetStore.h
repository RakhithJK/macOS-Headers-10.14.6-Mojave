//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CRKFileBasedKeyedDataStore, NSCache;

@interface CRKCloudAssetStore : NSObject
{
    NSCache *_cache;
    CRKFileBasedKeyedDataStore *_store;
}

+ (id)new;
@property(retain, nonatomic) CRKFileBasedKeyedDataStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)assetUrlForIdentifier:(id)arg1;
- (id)assetDataForIdentifier:(id)arg1;
- (BOOL)removeAllAssets;
- (BOOL)removeAssetDataForIdentifier:(id)arg1;
- (BOOL)storeAssetData:(id)arg1 forIdentifier:(id)arg2;
- (id)storeAssetData:(id)arg1;
- (id)initWithDirectoryUrl:(id)arg1;
- (id)initWithFileBasedKeyedDataStore:(id)arg1;
- (id)init;

@end

