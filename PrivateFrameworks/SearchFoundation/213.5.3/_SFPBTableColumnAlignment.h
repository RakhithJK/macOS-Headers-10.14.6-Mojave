//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBTableColumnAlignment-Protocol.h>

@class NSData, NSString;

@interface _SFPBTableColumnAlignment : PBCodable <_SFPBTableColumnAlignment, NSSecureCoding>
{
    BOOL _isEqualWidth;
    int _columnAlignment;
    int _dataAlignment;
}

@property(nonatomic) BOOL isEqualWidth; // @synthesize isEqualWidth=_isEqualWidth;
@property(nonatomic) int dataAlignment; // @synthesize dataAlignment=_dataAlignment;
@property(nonatomic) int columnAlignment; // @synthesize columnAlignment=_columnAlignment;
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

