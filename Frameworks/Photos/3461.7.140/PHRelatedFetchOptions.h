//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PHAsset;

@interface PHRelatedFetchOptions : NSObject
{
    BOOL _enableDiversity;
    BOOL _debugInfoEnabled;
    NSArray *_excludedAssetCollections;
    PHAsset *_referenceAsset;
    unsigned long long _fetchLimit;
}

@property(nonatomic, getter=isDebugInfoEnabled) BOOL debugInfoEnabled; // @synthesize debugInfoEnabled=_debugInfoEnabled;
@property(nonatomic) BOOL enableDiversity; // @synthesize enableDiversity=_enableDiversity;
@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(retain, nonatomic) PHAsset *referenceAsset; // @synthesize referenceAsset=_referenceAsset;
@property(retain, nonatomic) NSArray *excludedAssetCollections; // @synthesize excludedAssetCollections=_excludedAssetCollections;
- (void).cxx_destruct;

@end

