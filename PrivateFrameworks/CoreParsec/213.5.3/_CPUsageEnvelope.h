//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPUsageEnvelope-Protocol.h>

@class NSData, NSString, _CPImagesUsagePropensity, _CPNewsUsagePropensity, _CPSafariUsagePropensity, _CPSpotlightUsagePropensity, _CPUsageSinceLookback;

@interface _CPUsageEnvelope : PBCodable <_CPUsageEnvelope, NSSecureCoding>
{
    _CPUsageSinceLookback *_usageSinceLookback;
    _CPSafariUsagePropensity *_safariUsagePropensity;
    _CPSpotlightUsagePropensity *_spotlightUsagePropensity;
    _CPImagesUsagePropensity *_imagesUsagePropensity;
    _CPNewsUsagePropensity *_newsUsagePropensity;
    unsigned long long _whichKind;
}

@property(readonly, nonatomic) unsigned long long whichKind; // @synthesize whichKind=_whichKind;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(retain, nonatomic) _CPNewsUsagePropensity *newsUsagePropensity; // @synthesize newsUsagePropensity=_newsUsagePropensity;
@property(retain, nonatomic) _CPImagesUsagePropensity *imagesUsagePropensity; // @synthesize imagesUsagePropensity=_imagesUsagePropensity;
@property(retain, nonatomic) _CPSpotlightUsagePropensity *spotlightUsagePropensity; // @synthesize spotlightUsagePropensity=_spotlightUsagePropensity;
@property(retain, nonatomic) _CPSafariUsagePropensity *safariUsagePropensity; // @synthesize safariUsagePropensity=_safariUsagePropensity;
@property(retain, nonatomic) _CPUsageSinceLookback *usageSinceLookback; // @synthesize usageSinceLookback=_usageSinceLookback;
- (BOOL)requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

