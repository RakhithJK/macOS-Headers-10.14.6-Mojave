//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NearField/NFTrustObject.h>

@class NSArray, NSData, NSNumber, NSString;

@interface NFTrustKey : NFTrustObject
{
    NSString *_identifier;
    NSString *_keyAttestationAuthority;
    NSString *_keyAttestation;
    NSNumber *_counterLimit;
    NSNumber *_counterValue;
    NSArray *_localValidations;
    NSData *_publicKey;
}

+ (id)keyWithIdentifier:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(retain, nonatomic) NSArray *localValidations; // @synthesize localValidations=_localValidations;
@property(retain, nonatomic) NSNumber *counterValue; // @synthesize counterValue=_counterValue;
@property(retain, nonatomic) NSNumber *counterLimit; // @synthesize counterLimit=_counterLimit;
@property(retain, nonatomic) NSString *keyAttestation; // @synthesize keyAttestation=_keyAttestation;
@property(retain, nonatomic) NSString *keyAttestationAuthority; // @synthesize keyAttestationAuthority=_keyAttestationAuthority;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

