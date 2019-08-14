//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMultiTabsState;

@interface GEOLogMsgStateMapUI : PBCodable <NSCopying>
{
    int _layoutInfo;
    int _layoutStyle;
    GEOMultiTabsState *_multiTabsState;
    struct {
        unsigned int layoutInfo:1;
        unsigned int layoutStyle:1;
    } _has;
}

@property(retain, nonatomic) GEOMultiTabsState *multiTabsState; // @synthesize multiTabsState=_multiTabsState;
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
- (int)StringAsLayoutStyle:(id)arg1;
- (id)layoutStyleAsString:(int)arg1;
@property(nonatomic) BOOL hasLayoutStyle;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(readonly, nonatomic) BOOL hasMultiTabsState;
- (int)StringAsLayoutInfo:(id)arg1;
- (id)layoutInfoAsString:(int)arg1;
@property(nonatomic) BOOL hasLayoutInfo;
@property(nonatomic) int layoutInfo; // @synthesize layoutInfo=_layoutInfo;

@end

