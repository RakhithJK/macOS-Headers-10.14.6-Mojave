//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBAddTasksIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBSpatialEventTrigger, _INPBTaskList, _INPBTemporalEventTrigger;

@interface _INPBAddTasksIntent : PBCodable <_INPBAddTasksIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBIntentMetadata *_intentMetadata;
    _INPBSpatialEventTrigger *_spatialEventTrigger;
    _INPBTaskList *_targetTaskList;
    NSArray *_taskTitles;
    _INPBTemporalEventTrigger *_temporalEventTrigger;
}

+ (Class)taskTitlesType;
@property(retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger; // @synthesize temporalEventTrigger=_temporalEventTrigger;
@property(copy, nonatomic) NSArray *taskTitles; // @synthesize taskTitles=_taskTitles;
@property(retain, nonatomic) _INPBTaskList *targetTaskList; // @synthesize targetTaskList=_targetTaskList;
@property(retain, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger; // @synthesize spatialEventTrigger=_spatialEventTrigger;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasTemporalEventTrigger;
- (id)taskTitlesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long taskTitlesCount;
- (void)addTaskTitles:(id)arg1;
- (void)clearTaskTitles;
@property(readonly, nonatomic) BOOL hasTargetTaskList;
@property(readonly, nonatomic) BOOL hasSpatialEventTrigger;
@property(readonly, nonatomic) BOOL hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

