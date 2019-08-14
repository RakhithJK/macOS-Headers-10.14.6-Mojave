//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol FBSApplicationDataStoreRepositoryClient, OS_dispatch_queue;

@interface FBSApplicationDataStoreClientFactory : NSObject
{
    unsigned long long _count;
    NSObject<OS_dispatch_queue> *_queue;
    id <FBSApplicationDataStoreRepositoryClient> _sharedClient;
    Class _dataStoreClientClass;
    NSArray *_prefetchedKeys;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *prefetchedKeys; // @synthesize prefetchedKeys=_prefetchedKeys;
- (void).cxx_destruct;
- (void)registerClientClass:(Class)arg1;
- (void)checkin;
- (id)checkout;
- (id)init;

@end

