//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRMediaRemoteService, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRAVRoutingClientController : NSObject
{
    MRMediaRemoteService *_mediaRemoteService;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_pendingCompletionHandlersForCategories;
    NSMutableDictionary *_cachedRoutesForCategories;
}

@property(readonly, nonatomic) MRMediaRemoteService *mediaRemoteService; // @synthesize mediaRemoteService=_mediaRemoteService;
- (void).cxx_destruct;
- (void)_flushPendingCompletionHandlersWithPickableRoutes:(id)arg1 forCategory:(id)arg2;
- (void)_cacheFetchedPickableRoutes:(id)arg1 forCategory:(id)arg2;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (void)fetchPickableRoutesForCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithMediaRemoteService:(id)arg1;
- (id)init;

@end

