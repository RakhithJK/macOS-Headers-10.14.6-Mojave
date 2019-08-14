//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCKeyedOperationQueueDelegate-Protocol.h"
#import "FCNetworkReachabilityObserving-Protocol.h"

@class FCCloudContext, FCKeyedOperationQueue, FRArticleContentPool, NSMutableDictionary, NSString;
@protocol FRGalleryPrefetchDelegate;

@interface FRArticlePrefetchManager : NSObject <FCKeyedOperationQueueDelegate, FCNetworkReachabilityObserving>
{
    id <FRGalleryPrefetchDelegate> _galleryDelegate;
    FCCloudContext *_context;
    FRArticleContentPool *_articleContentPool;
    FCKeyedOperationQueue *_prefetchQueue;
    long long _suspendedDepth;
    NSMutableDictionary *_prefetchRequestsByID;
}

@property(retain, nonatomic) NSMutableDictionary *prefetchRequestsByID; // @synthesize prefetchRequestsByID=_prefetchRequestsByID;
@property(nonatomic) long long suspendedDepth; // @synthesize suspendedDepth=_suspendedDepth;
@property(retain, nonatomic) FCKeyedOperationQueue *prefetchQueue; // @synthesize prefetchQueue=_prefetchQueue;
@property(retain, nonatomic) FRArticleContentPool *articleContentPool; // @synthesize articleContentPool=_articleContentPool;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(nonatomic) __weak id <FRGalleryPrefetchDelegate> galleryDelegate; // @synthesize galleryDelegate=_galleryDelegate;
- (void).cxx_destruct;
- (void)_revisitSuspendedState;
- (void)_prefetchRequestsChanged;
- (void)wifiReachabilityDidChange:(id)arg1;
- (id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)popPrefetchSuspended;
- (void)pushPrefetchSuspended;
- (void)resetPrefetchStateForArticleID:(id)arg1 withHeadline:(id)arg2;
- (void)removePrefetchInterestInHeadline:(id)arg1;
- (void)addPrefetchInterestInHeadline:(id)arg1 priority:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithCloudContext:(id)arg1 articleContentPool:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

