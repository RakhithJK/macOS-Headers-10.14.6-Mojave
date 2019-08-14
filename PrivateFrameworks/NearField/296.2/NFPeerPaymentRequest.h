//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NearField/NSSecureCoding-Protocol.h>

@class NFECommercePaymentRequest, NFPeerPaymentTransferRequest;

@interface NFPeerPaymentRequest : NSObject <NSSecureCoding>
{
    NFECommercePaymentRequest *_topUpRequest;
    NFPeerPaymentTransferRequest *_transferRequest;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NFPeerPaymentTransferRequest *transferRequest; // @synthesize transferRequest=_transferRequest;
@property(retain, nonatomic) NFECommercePaymentRequest *topUpRequest; // @synthesize topUpRequest=_topUpRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

