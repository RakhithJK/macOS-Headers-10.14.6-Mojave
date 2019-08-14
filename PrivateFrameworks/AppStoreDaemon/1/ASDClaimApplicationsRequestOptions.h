//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray, NSData, NSDictionary, NSNumber;

@interface ASDClaimApplicationsRequestOptions : ASDRequestOptions
{
    BOOL _establishesActiveAccount;
    BOOL _ignoresPreviousClaimAttempts;
    BOOL _suppressErrorDialogs;
    NSNumber *_accountID;
    NSData *_clientAuditTokenData;
    NSArray *_bundleIdentifiers;
    long long _claimStyle;
    NSDictionary *_httpHeaders;
    NSNumber *_purchaseID;
}

@property(nonatomic) BOOL suppressErrorDialogs; // @synthesize suppressErrorDialogs=_suppressErrorDialogs;
@property(copy, nonatomic) NSNumber *purchaseID; // @synthesize purchaseID=_purchaseID;
@property(nonatomic) BOOL ignoresPreviousClaimAttempts; // @synthesize ignoresPreviousClaimAttempts=_ignoresPreviousClaimAttempts;
@property(copy, nonatomic) NSDictionary *httpHeaders; // @synthesize httpHeaders=_httpHeaders;
@property(nonatomic) BOOL establishesActiveAccount; // @synthesize establishesActiveAccount=_establishesActiveAccount;
@property(readonly, nonatomic) long long claimStyle; // @synthesize claimStyle=_claimStyle;
@property(readonly, nonatomic) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(copy, nonatomic) NSData *clientAuditTokenData; // @synthesize clientAuditTokenData=_clientAuditTokenData;
@property(copy, nonatomic) NSNumber *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (id)initWithClaimStyle:(long long)arg1;
- (id)initWithBundleIdentifiers:(id)arg1;
- (id)init;

@end

