//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBResumeTimerIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBResumeTimerIntentResponse : PBCodable <_INPBResumeTimerIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_resumedTimers;
}

+ (Class)resumedTimersType;
@property(copy, nonatomic) NSArray *resumedTimers; // @synthesize resumedTimers=_resumedTimers;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)resumedTimersAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long resumedTimersCount;
- (void)addResumedTimers:(id)arg1;
- (void)clearResumedTimers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

