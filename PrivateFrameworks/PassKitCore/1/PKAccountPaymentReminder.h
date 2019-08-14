//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKRecordObject-Protocol.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKAccountPaymentReminder : NSObject <NSSecureCoding, PKRecordObject>
{
    NSDecimalNumber *_minimumDue;
    NSString *_currencyCode;
    NSDate *_paymentDueDate;
}

+ (id)recordNamePrefix;
+ (id)recordType;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDate *paymentDueDate; // @synthesize paymentDueDate=_paymentDueDate;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSDecimalNumber *minimumDue; // @synthesize minimumDue=_minimumDue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

