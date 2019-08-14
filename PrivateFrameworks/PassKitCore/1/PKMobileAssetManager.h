//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface PKMobileAssetManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)sortDescriptorsForMarkets;
- (id)predicateForMarketIdentifier:(id)arg1;
- (void)fetchAssetsForMarketWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_sortDescriptorWithPreferredFeatureKey:(id)arg1 isFeaturePreferred:(BOOL)arg2 keyPath:(id)arg3;
- (id)sortDescriptorsForEducationVideoWithPreferredFeatures:(unsigned long long)arg1;
- (id)predicateForEducationVideo;
- (void)fetchEducationVideoWithPreferredFeatures:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchNeededAssetsForThisDeviceWithPreferredFeatures:(unsigned long long)arg1;
- (id)init;

@end

