//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPRecoveryKeyValidatorInternal-Protocol.h>

@class CDPContext, NSDictionary, NSString;
@protocol CDPAuthProviderInternal;

@interface CDPDAccountRecoveryValidator : NSObject <CDPRecoveryKeyValidatorInternal>
{
    id <CDPAuthProviderInternal> _authProvider;
    CDPContext *_context;
    NSDictionary *_recoveredInfo;
    NSString *_recoveryKey;
}

@property(copy, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(copy, nonatomic) NSDictionary *recoveredInfo; // @synthesize recoveredInfo=_recoveredInfo;
- (void).cxx_destruct;
- (id)_cdpErrorFromAuthKitError:(id)arg1;
- (void)generateRecoveryKey:(CDUnknownBlockType)arg1;
- (void)confirmRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1 authProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

