//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOLogMsgEventUserAction : PBCodable <NSCopying>
{
    NSString *_userActionEventKey;
    int _userActionEventTarget;
    NSString *_userActionEventValue;
    struct {
        unsigned int userActionEventTarget:1;
    } _has;
}

@property(retain, nonatomic) NSString *userActionEventValue; // @synthesize userActionEventValue=_userActionEventValue;
@property(retain, nonatomic) NSString *userActionEventKey; // @synthesize userActionEventKey=_userActionEventKey;
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
- (int)StringAsUserActionEventTarget:(id)arg1;
- (id)userActionEventTargetAsString:(int)arg1;
@property(nonatomic) BOOL hasUserActionEventTarget;
@property(nonatomic) int userActionEventTarget; // @synthesize userActionEventTarget=_userActionEventTarget;
@property(readonly, nonatomic) BOOL hasUserActionEventValue;
@property(readonly, nonatomic) BOOL hasUserActionEventKey;

@end

