//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface ADConfigurationRequest : PBRequest <NSCopying>
{
    NSMutableArray *_currentConfigurations;
    NSData *_iAdID;
}

+ (Class)currentConfigurationType;
+ (id)options;
@property(retain, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
@property(retain, nonatomic) NSMutableArray *currentConfigurations; // @synthesize currentConfigurations=_currentConfigurations;
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
@property(readonly, nonatomic) BOOL hasIAdID;
- (id)currentConfigurationAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentConfigurationsCount;
- (void)addCurrentConfiguration:(id)arg1;
- (void)clearCurrentConfigurations;

@end

