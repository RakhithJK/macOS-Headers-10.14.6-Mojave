//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface PPNamedEntityRecordLoadingDelegate : NSObject
{
    NSString *_name;
    NSDate *_loadEntitiesDetectedSince;
    CDUnknownBlockType _namedEntityRecordsSetup;
    CDUnknownBlockType _namedEntityRecordsHandler;
    CDUnknownBlockType _namedEntityRecordsCompletion;
    CDUnknownBlockType _recentNamedEntityRecordsSetup;
    CDUnknownBlockType _recentNamedEntityRecordsHandler;
    CDUnknownBlockType _recentNamedEntityRecordsCompletion;
    CDUnknownBlockType _resetNamedEntityRecordData;
}

@property(copy, nonatomic) CDUnknownBlockType resetNamedEntityRecordData; // @synthesize resetNamedEntityRecordData=_resetNamedEntityRecordData;
@property(copy, nonatomic) CDUnknownBlockType recentNamedEntityRecordsCompletion; // @synthesize recentNamedEntityRecordsCompletion=_recentNamedEntityRecordsCompletion;
@property(copy, nonatomic) CDUnknownBlockType recentNamedEntityRecordsHandler; // @synthesize recentNamedEntityRecordsHandler=_recentNamedEntityRecordsHandler;
@property(copy, nonatomic) CDUnknownBlockType recentNamedEntityRecordsSetup; // @synthesize recentNamedEntityRecordsSetup=_recentNamedEntityRecordsSetup;
@property(copy, nonatomic) CDUnknownBlockType namedEntityRecordsCompletion; // @synthesize namedEntityRecordsCompletion=_namedEntityRecordsCompletion;
@property(copy, nonatomic) CDUnknownBlockType namedEntityRecordsHandler; // @synthesize namedEntityRecordsHandler=_namedEntityRecordsHandler;
@property(copy, nonatomic) CDUnknownBlockType namedEntityRecordsSetup; // @synthesize namedEntityRecordsSetup=_namedEntityRecordsSetup;
@property(retain, nonatomic) NSDate *loadEntitiesDetectedSince; // @synthesize loadEntitiesDetectedSince=_loadEntitiesDetectedSince;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1;

@end

