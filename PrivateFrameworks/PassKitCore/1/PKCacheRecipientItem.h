//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, PKPeerPaymentRecipient;

@interface PKCacheRecipientItem : NSObject <NSSecureCoding>
{
    NSDate *_insertDate;
    PKPeerPaymentRecipient *_item;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) PKPeerPaymentRecipient *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isNewerThan:(id)arg1;
- (BOOL)hasExpired;
- (id)initWithItem:(id)arg1;

@end

