//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MobileTimer/NSCopying-Protocol.h>

@class MTPBAlarm, MTPBAlarmAction, MTPBAlarmDelete, MTPBAlarmState;

@interface MTPBSyncMessage : PBCodable <NSCopying>
{
    MTPBAlarmAction *_alarmActionObject;
    MTPBAlarmDelete *_alarmDeleteObject;
    MTPBAlarm *_alarmObject;
    MTPBAlarmState *_alarmStateObject;
}

@property(retain, nonatomic) MTPBAlarmAction *alarmActionObject; // @synthesize alarmActionObject=_alarmActionObject;
@property(retain, nonatomic) MTPBAlarmState *alarmStateObject; // @synthesize alarmStateObject=_alarmStateObject;
@property(retain, nonatomic) MTPBAlarmDelete *alarmDeleteObject; // @synthesize alarmDeleteObject=_alarmDeleteObject;
@property(retain, nonatomic) MTPBAlarm *alarmObject; // @synthesize alarmObject=_alarmObject;
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
@property(readonly, nonatomic) BOOL hasAlarmActionObject;
@property(readonly, nonatomic) BOOL hasAlarmStateObject;
@property(readonly, nonatomic) BOOL hasAlarmDeleteObject;
@property(readonly, nonatomic) BOOL hasAlarmObject;

@end
