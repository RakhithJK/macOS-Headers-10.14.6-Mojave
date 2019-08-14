//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPResponseOperationResultErrorClient, FCCKPResponseOperationResultErrorExtension, FCCKPResponseOperationResultErrorServer, NSString;

@interface FCCKPResponseOperationResultError : PBCodable <NSCopying>
{
    FCCKPResponseOperationResultErrorClient *_clientError;
    NSString *_errorDescription;
    NSString *_errorKey;
    FCCKPResponseOperationResultErrorExtension *_extensionError;
    int _retryAfterSeconds;
    FCCKPResponseOperationResultErrorServer *_serverError;
    struct {
        unsigned int retryAfterSeconds:1;
    } _has;
}

@property(retain, nonatomic) NSString *errorKey; // @synthesize errorKey=_errorKey;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) int retryAfterSeconds; // @synthesize retryAfterSeconds=_retryAfterSeconds;
@property(retain, nonatomic) FCCKPResponseOperationResultErrorExtension *extensionError; // @synthesize extensionError=_extensionError;
@property(retain, nonatomic) FCCKPResponseOperationResultErrorServer *serverError; // @synthesize serverError=_serverError;
@property(retain, nonatomic) FCCKPResponseOperationResultErrorClient *clientError; // @synthesize clientError=_clientError;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasErrorKey;
@property(readonly, nonatomic) BOOL hasErrorDescription;
@property(nonatomic) BOOL hasRetryAfterSeconds;
@property(readonly, nonatomic) BOOL hasExtensionError;
@property(readonly, nonatomic) BOOL hasServerError;
@property(readonly, nonatomic) BOOL hasClientError;
- (void)dealloc;

@end
