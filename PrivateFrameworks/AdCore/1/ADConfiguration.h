//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSString;

@interface ADConfiguration : PBCodable <NSCopying>
{
    double _expirationDate;
    NSString *_baseUrl;
    NSString *_bundleId;
    int _requestType;
    BOOL _isTest;
    struct {
        unsigned int expirationDate:1;
        unsigned int requestType:1;
        unsigned int isTest:1;
    } _has;
}

@property(nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(nonatomic) BOOL isTest; // @synthesize isTest=_isTest;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasExpirationDate;
@property(readonly, nonatomic) BOOL hasBaseUrl;
@property(nonatomic) BOOL hasIsTest;
@property(nonatomic) BOOL hasRequestType;
@property(readonly, nonatomic) BOOL hasBundleId;

@end

