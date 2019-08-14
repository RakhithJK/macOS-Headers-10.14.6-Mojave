//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSString;

@interface HMDRelayCertificateRequest : HMFObject
{
    NSData *_publicKey;
    NSString *_challengeIdentifier;
    NSData *_challengeResponse;
    NSData *_challengeCertificate;
}

+ (id)shortDescription;
@property(readonly, copy, nonatomic) NSData *challengeCertificate; // @synthesize challengeCertificate=_challengeCertificate;
@property(readonly, copy, nonatomic) NSData *challengeResponse; // @synthesize challengeResponse=_challengeResponse;
@property(readonly, copy, nonatomic) NSString *challengeIdentifier; // @synthesize challengeIdentifier=_challengeIdentifier;
@property(readonly, copy, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)shortDescription;
- (id)serializeWithError:(id *)arg1;
- (id)initWithPublicKey:(id)arg1 challengeIdentifier:(id)arg2 challengeResponse:(id)arg3 challengeCertificate:(id)arg4;
- (id)init;

@end

