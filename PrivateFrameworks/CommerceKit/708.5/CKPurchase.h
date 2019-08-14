//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/NSCopying-Protocol.h>
#import <CommerceKit/NSSecureCoding-Protocol.h>

@class CKStoreClient, NSDictionary, NSString;

@interface CKPurchase : NSObject <NSCopying, NSSecureCoding>
{
    CKStoreClient *_storeClient;
    NSString *_forcedUsername;
    NSString *_bagURLKey;
    NSDictionary *_buyParameters;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSDictionary *buyParameters; // @synthesize buyParameters=_buyParameters;
@property(copy) NSString *bagURLKey; // @synthesize bagURLKey=_bagURLKey;
@property(copy) NSString *forcedUsername; // @synthesize forcedUsername=_forcedUsername;
@property(readonly) CKStoreClient *storeClient; // @synthesize storeClient=_storeClient;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBuyParametersString:(id)arg1 storeClient:(id)arg2;
- (id)initWithBuyParameters:(id)arg1 storeClient:(id)arg2;
- (id)_initWithLegacyPurchase:(id)arg1 storeClient:(id)arg2;

@end

