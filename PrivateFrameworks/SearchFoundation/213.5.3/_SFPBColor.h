//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBColor-Protocol.h>

@class NSData, NSString, _SFPBGraphicalFloat;

@interface _SFPBColor : PBCodable <_SFPBColor, NSSecureCoding>
{
    _SFPBGraphicalFloat *_redComponent;
    _SFPBGraphicalFloat *_greenComponent;
    _SFPBGraphicalFloat *_blueComponent;
    _SFPBGraphicalFloat *_alphaComponent;
}

@property(retain, nonatomic) _SFPBGraphicalFloat *alphaComponent; // @synthesize alphaComponent=_alphaComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *blueComponent; // @synthesize blueComponent=_blueComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *greenComponent; // @synthesize greenComponent=_greenComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *redComponent; // @synthesize redComponent=_redComponent;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

