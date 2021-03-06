//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PLTimeReferenceManager;

@interface PLTimeReference : NSObject
{
    double _offset;
    id <PLTimeReferenceManager> _timeManager;
    long long _timeReferenceType;
    NSString *_entryDefinitionKey;
    double _hourBucketOffset;
}

+ (id)hourBucketOffsetKeyFromEntryDefinitionKey:(id)arg1;
+ (id)defaultsKeyFromEntryDefinitionKey:(id)arg1;
@property(nonatomic) double hourBucketOffset; // @synthesize hourBucketOffset=_hourBucketOffset;
@property(retain) NSString *entryDefinitionKey; // @synthesize entryDefinitionKey=_entryDefinitionKey;
@property long long timeReferenceType; // @synthesize timeReferenceType=_timeReferenceType;
@property(retain) id <PLTimeReferenceManager> timeManager; // @synthesize timeManager=_timeManager;
@property(nonatomic) double offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (void)registerForTimeZoneChangedNotification;
- (void)registerForDayChangedNotification;
- (void)writeOffsetToDefaults;
- (id)removeTimeOffsetFromReferenceTime:(id)arg1;
- (id)addTimeOffsetToMonotonicTime:(id)arg1;
- (id)currentTime;
- (double)getHourBucketOffset;
- (double)computeHourBucketOffset;
- (void)initializeOffsetWithEntries:(id)arg1;
- (id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(long long)arg3;

@end

