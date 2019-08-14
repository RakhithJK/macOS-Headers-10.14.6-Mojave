//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedObjectContext.h>

@class NSMutableArray, NSMutableDictionary;

@interface EKManagedObjectContext : CalManagedObjectContext
{
    NSMutableDictionary *_modifiedSourceMap;
    NSMutableDictionary *_modifiedCalendarMap;
    NSMutableDictionary *_modifiedItemMap;
    NSMutableDictionary *_modifiedNotificationMap;
    NSMutableArray *_confirmedSuggestedEvents;
    NSMutableArray *_deletedSuggestionInfoUniqueKeys;
}

+ (id)readOnlyContextToleratingInaccessibleFault;
+ (id)contextToleratingInaccessibleFaultForBackingStore:(id)arg1;
@property(retain) NSMutableArray *deletedSuggestionInfoUniqueKeys; // @synthesize deletedSuggestionInfoUniqueKeys=_deletedSuggestionInfoUniqueKeys;
@property(retain) NSMutableArray *confirmedSuggestedEvents; // @synthesize confirmedSuggestedEvents=_confirmedSuggestedEvents;
@property(retain) NSMutableDictionary *modifiedNotificationMap; // @synthesize modifiedNotificationMap=_modifiedNotificationMap;
@property(retain) NSMutableDictionary *modifiedItemMap; // @synthesize modifiedItemMap=_modifiedItemMap;
@property(retain) NSMutableDictionary *modifiedCalendarMap; // @synthesize modifiedCalendarMap=_modifiedCalendarMap;
@property(retain) NSMutableDictionary *modifiedSourceMap; // @synthesize modifiedSourceMap=_modifiedSourceMap;
- (void).cxx_destruct;
- (BOOL)trackModifiedNotifications:(id)arg1 error:(id *)arg2;
- (BOOL)trackDeletedSuggestionInfoUniqueKeys:(id)arg1 error:(id *)arg2;
- (BOOL)trackConfirmedSuggestedEvents:(id)arg1 error:(id *)arg2;
- (BOOL)trackModifiedItems:(id)arg1 error:(id *)arg2;
- (BOOL)trackModifiedCalendars:(id)arg1 error:(id *)arg2;
- (BOOL)trackModifiedSources:(id)arg1 error:(id *)arg2;

@end

