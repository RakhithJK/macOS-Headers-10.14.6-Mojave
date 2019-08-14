//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitLabelItem-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOPBTransitArtwork, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitLabel : PBCodable <GEOTransitLabelItem, NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_labelArtwork;
    NSString *_labelTextString;
    int _labelType;
    struct {
        unsigned int labelType:1;
    } _has;
}

@property(retain, nonatomic) GEOPBTransitArtwork *labelArtwork; // @synthesize labelArtwork=_labelArtwork;
@property(retain, nonatomic) NSString *labelTextString; // @synthesize labelTextString=_labelTextString;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasLabelArtwork;
@property(readonly, nonatomic) BOOL hasLabelTextString;
- (int)StringAsLabelType:(id)arg1;
- (id)labelTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasLabelType;
@property(nonatomic) int labelType; // @synthesize labelType=_labelType;
@property(readonly, nonatomic) NSString *labelString;
@property(readonly, nonatomic) unsigned long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

