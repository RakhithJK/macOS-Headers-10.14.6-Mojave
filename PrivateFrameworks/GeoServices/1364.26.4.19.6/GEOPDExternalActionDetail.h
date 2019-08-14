//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalActionDetail : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_actionLabel;
    NSString *_actionUrlComponent;
    NSString *_actionUrlVerb;
    NSString *_logoId;
}

@property(retain, nonatomic) NSString *actionUrlVerb; // @synthesize actionUrlVerb=_actionUrlVerb;
@property(retain, nonatomic) NSString *actionUrlComponent; // @synthesize actionUrlComponent=_actionUrlComponent;
@property(retain, nonatomic) NSString *logoId; // @synthesize logoId=_logoId;
@property(retain, nonatomic) NSString *actionLabel; // @synthesize actionLabel=_actionLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasActionUrlVerb;
@property(readonly, nonatomic) BOOL hasActionUrlComponent;
@property(readonly, nonatomic) BOOL hasLogoId;
@property(readonly, nonatomic) BOOL hasActionLabel;

@end

