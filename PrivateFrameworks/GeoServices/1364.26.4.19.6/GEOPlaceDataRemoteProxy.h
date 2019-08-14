//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPlaceDataProxy-Protocol.h>

@class NSLock, NSMapTable, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOPlaceDataRemoteProxy : NSObject <GEOPlaceDataProxy>
{
    NSObject<OS_dispatch_queue> *_requestQ;
    NSMapTable *_requestToUUID;
    NSLock *_requestToUUIDLock;
}

- (void).cxx_destruct;
- (BOOL)_parseReply:(id)arg1 placeResponse:(id *)arg2 userInfo:(id *)arg3 error:(id *)arg4;
- (void)clearCache;
- (void)shrinkBySize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;
- (void)cancelRequest:(id)arg1;
- (void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 auditToken:(id)arg5 networkActivity:(CDUnknownBlockType)arg6 requesterHandler:(CDUnknownBlockType)arg7;
- (void)trackPlaceData:(id)arg1;
- (void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 auditToken:(id)arg4 requesterHandler:(CDUnknownBlockType)arg5;
- (void)fetchAllCacheEntriesWithRequesterHandler:(CDUnknownBlockType)arg1;
- (void)requestComponentsFromNetwork:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 requesterHandler:(CDUnknownBlockType)arg6;
- (void)requestIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 options:(unsigned long long)arg4 auditToken:(id)arg5 requesterHandler:(CDUnknownBlockType)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

