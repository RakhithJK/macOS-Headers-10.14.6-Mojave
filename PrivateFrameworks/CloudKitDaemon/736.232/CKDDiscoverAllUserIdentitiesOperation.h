//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDiscoverUserIdentitiesOperation.h>

@class NSMutableDictionary;

@interface CKDDiscoverAllUserIdentitiesOperation : CKDDiscoverUserIdentitiesOperation
{
    NSMutableDictionary *_contactIdentifiersByLookupInfo;
}

@property(retain, nonatomic) NSMutableDictionary *contactIdentifiersByLookupInfo; // @synthesize contactIdentifiersByLookupInfo=_contactIdentifiersByLookupInfo;
- (void).cxx_destruct;
- (void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3;
- (void)main;
- (void)_discoverIdentitiesBatched:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

