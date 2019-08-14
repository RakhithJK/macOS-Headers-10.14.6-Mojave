//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBUserReportRequest-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBUserReportRequest : PBCodable <_SFPBUserReportRequest, NSSecureCoding>
{
    NSString *_affordanceText;
    NSString *_title;
    NSString *_dismissText;
    NSArray *_userReportOptions;
}

@property(copy, nonatomic) NSArray *userReportOptions; // @synthesize userReportOptions=_userReportOptions;
@property(copy, nonatomic) NSString *dismissText; // @synthesize dismissText=_dismissText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *affordanceText; // @synthesize affordanceText=_affordanceText;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)userReportOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)userReportOptionsCount;
- (void)addUserReportOptions:(id)arg1;
- (void)clearUserReportOptions;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

