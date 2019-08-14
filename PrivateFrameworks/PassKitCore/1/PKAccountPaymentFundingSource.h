//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKAccountPaymentFundingDetails;

@interface PKAccountPaymentFundingSource : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    long long _type;
    NSString *_accountSuffix;
    PKAccountPaymentFundingDetails *_fundingDetails;
}

+ (BOOL)supportsSecureCoding;
+ (Class)fundingDetailsClassForFundingSourceType:(long long)arg1;
@property(copy, nonatomic) PKAccountPaymentFundingDetails *fundingDetails; // @synthesize fundingDetails=_fundingDetails;
@property(copy, nonatomic) NSString *accountSuffix; // @synthesize accountSuffix=_accountSuffix;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)hashComponentWithCertificatesResponse:(id)arg1;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)jsonString;
- (id)displayDescription;
- (id)bankAccountRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(long long)arg1;

@end

