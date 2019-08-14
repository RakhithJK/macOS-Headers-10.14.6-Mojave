//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGRTCLogging : NSObject <NSSecureCoding>
{
    struct _opaque_pthread_mutex_t _lock;
    NSString *_path;
    NSMutableArray *_loggedExtractions;
    NSMutableArray *_loggedInteractions;
    NSMutableArray *_loggedInteractionsSummary;
    long long _loggedExtractionsEventsCount;
    NSObject<OS_dispatch_source> *_persistenceTimerSource;
    double _storeCreationDate;
    NSObject<OS_dispatch_queue> *_interactionsWriteQueue;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)_createEmptyFileAtPath:(id)arg1;
+ (id)defaultLogger;
+ (id)locationTypeForRealtimeEvent:(id)arg1;
+ (id)locationTypeForEntity:(id)arg1;
+ (id)locationTypeForHandle:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 airportCode:(id)arg4 address:(id)arg5 label:(id)arg6;
+ (unsigned long long)launchCountForApp:(id)arg1 afterDate:(id)arg2 lowerBucket:(unsigned long long)arg3 bucketSize:(unsigned long long)arg4 bucketLimit:(unsigned long long)arg5;
+ (unsigned long long)numberOfDaysBetweenDate:(id)arg1 andDate:(id)arg2;
+ (double)round:(double)arg1 toSignificantFigures:(long long)arg2;
+ (unsigned long long)bucketizeInteger:(unsigned long long)arg1 withBucketSize:(unsigned long long)arg2 limit:(unsigned long long)arg3;
- (void).cxx_destruct;
- (id)_descriptionForBundleId:(id)arg1;
- (id)_descriptionForEntityType:(long long)arg1;
- (id)_descriptionForSGRTCCategory:(unsigned short)arg1;
- (id)_descriptionForActionType:(unsigned short)arg1;
- (id)_descriptionForInterface:(unsigned short)arg1;
- (id)_descriptionForExtractionStatus:(unsigned short)arg1;
- (id)loggedInteractionsSummaryDescription;
- (id)loggedInteractionsDescription;
- (id)loggedExtractionsDescription;
- (double)storeAge;
- (BOOL)storeToDisk;
- (BOOL)removeInteractionsSummaryLogsFromLogs:(id)arg1;
- (BOOL)resetInteractionsLogs;
- (BOOL)resetInteractionsSummaryLogs;
- (BOOL)resetExtractionLogs;
- (BOOL)resetLogs;
- (void)sendRTCLogsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_createRTCReporting;
- (id)logsToSend;
- (id)whitelistedLogFromLog:(id)arg1;
- (void)logEventInteractionForRealtimeEvent:(id)arg1 parentEntity:(id)arg2 interface:(unsigned short)arg3 actionType:(unsigned short)arg4;
- (void)logEventInteractionForRealtimeEventSync:(id)arg1 parentEntity:(id)arg2 interface:(unsigned short)arg3 actionType:(unsigned short)arg4;
- (void)logEventInteractionForEntitySync:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEntity:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventExtractionForTemplateName:(id)arg1 extractionStatus:(unsigned short)arg2 outputExceptions:(id)arg3 outputInfos:(id)arg4 jsMessageLogs:(id)arg5 jsOutputLogs:(id)arg6 timingProcessing:(unsigned long long)arg7;
- (void)logNewInteractionWithDictionary:(id)arg1;
- (void)logNewInteractionSummaryWithDictionary:(id)arg1;
- (void)_logAndIncrementEventCountForDictionary:(id)arg1;
- (BOOL)_incrementAndUpgradeInteractionSummaryForEventKey:(id)arg1 interactionKey:(id)arg2 parentEntity:(id)arg3;
- (void)_enrichLogWithAppsUsage:(id)arg1;
- (void)enrichInteractionSummaryLog:(id)arg1;
- (id)_createInteractionSummaryForEventKey:(id)arg1 expirationDate:(id)arg2 interactionKey:(id)arg3 interactionAttributes:(id)arg4;
- (id)_createInteractionForEventWithStartTime:(id)arg1 interactionKey:(id)arg2 interactionAttributes:(id)arg3;
- (id)_interactionAttributesForEntity:(id)arg1 parentEntity:(id)arg2;
- (id)_interactionAttributesForRealtimeEvent:(id)arg1 parentEntity:(id)arg2;
- (id)_interactionAttributesForTags:(id)arg1 parentEntity:(id)arg2;
- (void)updateAndScheduleDiskWrite;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)loggedExtractionsEventsCount;
- (id)loggedInteractionsSummary;
- (id)loggedInteractions;
- (id)loggedExtractions;
- (void)dealloc;
- (id)initWithFilename:(id)arg1;
- (id)init;

@end
