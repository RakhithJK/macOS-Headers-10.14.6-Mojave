//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOAlightNotificationFeedback : PBCodable <NSCopying>
{
    unsigned long long _alightStopMuid;
    double _arrivedAtTimestamp;
    double _lastDetectedLocationHorizontalAccuracy;
    double _lastDetectedLocationTimestamp;
    unsigned long long _lineMuid;
    unsigned long long _previousStopMuid;
    double _triggeredTimestamp;
    int _lastDetectedLocationTraversalPercent;
    unsigned int _stepID;
    int _trigger;
    int _triggeredLocationTraversalPercent;
    BOOL _arrivalDetected;
    BOOL _displayed;
    BOOL _triggered;
    struct {
        unsigned int alightStopMuid:1;
        unsigned int arrivedAtTimestamp:1;
        unsigned int lastDetectedLocationHorizontalAccuracy:1;
        unsigned int lastDetectedLocationTimestamp:1;
        unsigned int lineMuid:1;
        unsigned int previousStopMuid:1;
        unsigned int triggeredTimestamp:1;
        unsigned int lastDetectedLocationTraversalPercent:1;
        unsigned int stepID:1;
        unsigned int trigger:1;
        unsigned int triggeredLocationTraversalPercent:1;
        unsigned int arrivalDetected:1;
        unsigned int displayed:1;
        unsigned int triggered:1;
    } _has;
}

@property(nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
@property(nonatomic) BOOL arrivalDetected; // @synthesize arrivalDetected=_arrivalDetected;
@property(nonatomic) unsigned long long alightStopMuid; // @synthesize alightStopMuid=_alightStopMuid;
@property(nonatomic) unsigned long long previousStopMuid; // @synthesize previousStopMuid=_previousStopMuid;
@property(nonatomic) unsigned long long lineMuid; // @synthesize lineMuid=_lineMuid;
@property(nonatomic) BOOL triggered; // @synthesize triggered=_triggered;
@property(nonatomic) BOOL displayed; // @synthesize displayed=_displayed;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasStepID;
@property(nonatomic) BOOL hasArrivedAtTimestamp;
@property(nonatomic) double arrivedAtTimestamp; // @synthesize arrivedAtTimestamp=_arrivedAtTimestamp;
@property(nonatomic) BOOL hasArrivalDetected;
@property(nonatomic) BOOL hasLastDetectedLocationHorizontalAccuracy;
@property(nonatomic) double lastDetectedLocationHorizontalAccuracy; // @synthesize lastDetectedLocationHorizontalAccuracy=_lastDetectedLocationHorizontalAccuracy;
@property(nonatomic) BOOL hasLastDetectedLocationTraversalPercent;
@property(nonatomic) int lastDetectedLocationTraversalPercent; // @synthesize lastDetectedLocationTraversalPercent=_lastDetectedLocationTraversalPercent;
@property(nonatomic) BOOL hasLastDetectedLocationTimestamp;
@property(nonatomic) double lastDetectedLocationTimestamp; // @synthesize lastDetectedLocationTimestamp=_lastDetectedLocationTimestamp;
@property(nonatomic) BOOL hasTriggeredLocationTraversalPercent;
@property(nonatomic) int triggeredLocationTraversalPercent; // @synthesize triggeredLocationTraversalPercent=_triggeredLocationTraversalPercent;
@property(nonatomic) BOOL hasTriggeredTimestamp;
@property(nonatomic) double triggeredTimestamp; // @synthesize triggeredTimestamp=_triggeredTimestamp;
- (int)StringAsTrigger:(id)arg1;
- (id)triggerAsString:(int)arg1;
@property(nonatomic) BOOL hasTrigger;
@property(nonatomic) int trigger; // @synthesize trigger=_trigger;
@property(nonatomic) BOOL hasAlightStopMuid;
@property(nonatomic) BOOL hasPreviousStopMuid;
@property(nonatomic) BOOL hasLineMuid;
@property(nonatomic) BOOL hasTriggered;
@property(nonatomic) BOOL hasDisplayed;

@end

