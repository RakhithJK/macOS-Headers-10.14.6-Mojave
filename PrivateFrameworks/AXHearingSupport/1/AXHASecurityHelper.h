//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXHearingSupport/AXIDCManagerSecurityDelegate-Protocol.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface AXHASecurityHelper : NSObject <AXIDCManagerSecurityDelegate>
{
    struct OpaqueSecIdentityRef *_appleIDIdentity;
    NSObject<OS_dispatch_queue> *_securityQueue;
    NSArray *_certificateDescription;
}

+ (id)sharedHelper;
@property(retain, nonatomic) NSArray *certificateDescription; // @synthesize certificateDescription=_certificateDescription;
- (void).cxx_destruct;
- (BOOL)shouldTrustStream:(id)arg1;
- (id)certificateChainFromTrust:(struct __SecTrust *)arg1;
- (id)certificateChainForIdentity:(struct OpaqueSecIdentityRef *)arg1;
- (id)trustChain;
- (id)securityTrustChainForStream:(id)arg1;
- (BOOL)trustChainAvailable;
- (void)prepareHelper;
- (void)appleIDDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

