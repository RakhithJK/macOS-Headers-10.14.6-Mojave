//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface ACSHResourceCollection : NSObject
{
    NSMutableDictionary *_assetDictionaryByAssetIdentifier;
    NSMutableDictionary *_directoryFileWrapperByAssetIdentifier;
    NSMutableDictionary *_unsavedAssets;
    NSMutableDictionary *_images;
    NSLock *_lock;
}

+ (BOOL)isUserResource:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryForSaving;
- (id)assetsMatchingType:(unsigned long long)arg1;
- (unsigned long long)propertiesForAssetWithIdentifier:(id)arg1;
- (unsigned long long)typeForAssetWithIdentifier:(id)arg1;
- (id)nameForAssetWithIdentifier:(id)arg1;
- (id)infoForAssetWithIdentifier:(id)arg1;
- (id)fileWrapperForAssetWithIdentifier:(id)arg1;
- (id)soundWithIdentifier:(id)arg1;
- (id)imageWithIdentifier:(id)arg1;
- (id)assetWithIdentifier:(id)arg1;
- (id)addAssetImage:(id)arg1 name:(id)arg2 mask:(BOOL)arg3;
- (id)_createDataFromImage:(id)arg1;
- (id)addAsset:(id)arg1 withIdentifier:(id)arg2 type:(unsigned long long)arg3 name:(id)arg4;
- (void)unregisterAssets:(id)arg1;
- (BOOL)registerAssets:(id)arg1 withDirectoryFileWrapper:(id)arg2;
- (void)registerAssetsFromResourceCollection:(id)arg1;
- (void)copyAssetsFromResourceCollection:(id)arg1;
- (id)registeredAssetIdentifiers;
- (id)_directoryFileWrapperByAssetIdentifier;
- (id)_assetDictionaryByAssetIdentifier;
- (id)init;

@end

