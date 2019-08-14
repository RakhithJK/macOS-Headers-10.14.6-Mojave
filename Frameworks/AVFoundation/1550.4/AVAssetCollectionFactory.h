//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AVAssetCollectionFactory : NSObject
{
    NSObject<OS_dispatch_queue> *_collectionsQ;
    NSMutableDictionary *_collectionsByURLString;
}

+ (id)sharedAVAssetCollectionFactory;
- (void)forgetCollectionWithURL:(id)arg1;
- (id)collectionWithURL:(id)arg1 options:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (void)_cleanUpUncollectables;
- (id)init;

@end

