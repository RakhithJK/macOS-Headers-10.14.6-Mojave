//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDDiscoverUserIdentitiesOperation : CKDOperation
{
    CDUnknownBlockType _discoverUserIdentitiesProgressBlock;
    NSArray *_userIdentityLookupInfos;
}

@property(retain, nonatomic) NSArray *userIdentityLookupInfos; // @synthesize userIdentityLookupInfos=_userIdentityLookupInfos;
@property(copy, nonatomic) CDUnknownBlockType discoverUserIdentitiesProgressBlock; // @synthesize discoverUserIdentitiesProgressBlock=_discoverUserIdentitiesProgressBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_discoverIdentitiesWithLookupInfos:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

