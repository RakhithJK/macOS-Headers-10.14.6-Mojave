//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDCacheBasedRequest.h>

@class CKDDiscoverUserIdentitiesURLRequest, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPublicIdentityLookupRequest : CKDCacheBasedRequest
{
    CDUnknownBlockType _perLookupInfoProgressBlock;
    CDUnknownBlockType _lookupCompletionBlock;
    NSArray *_originalLookupInfosToFetch;
    NSMutableArray *_lookupInfosToFetch;
    CKDDiscoverUserIdentitiesURLRequest *_request;
}

+ (void)removeCacheForLookupInfos:(id)arg1 inCache:(id)arg2;
@property(retain, nonatomic) CKDDiscoverUserIdentitiesURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableArray *lookupInfosToFetch; // @synthesize lookupInfosToFetch=_lookupInfosToFetch;
@property(retain, nonatomic) NSArray *originalLookupInfosToFetch; // @synthesize originalLookupInfosToFetch=_originalLookupInfosToFetch;
@property(copy, nonatomic) CDUnknownBlockType lookupCompletionBlock; // @synthesize lookupCompletionBlock=_lookupCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perLookupInfoProgressBlock; // @synthesize perLookupInfoProgressBlock=_perLookupInfoProgressBlock;
- (void).cxx_destruct;
- (id)ckShortDescription;
- (id)description;
- (id)CKPropertiesDescription;
- (void)finishWithError:(id)arg1;
- (BOOL)_tryComplete;
- (id)_generateOONPrivateKeyWithError:(id *)arg1;
- (id)spawnURLRequests;
- (void)performRequest;
- (void)_receivedUserIdentity:(id)arg1 forLookupInfo:(id)arg2 error:(id)arg3;
- (void)_saveUserIdentity:(id)arg1 forLookupInfo:(id)arg2;
- (id)initWithLookupInfos:(id)arg1;

@end

