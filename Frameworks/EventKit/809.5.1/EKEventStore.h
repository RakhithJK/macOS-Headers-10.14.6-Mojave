//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKBackingStore, EKCalendar, EKChangeListener, EKLiveEditingStore, NSArray, NSDate, NSSet, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface EKEventStore : NSObject
{
    BOOL _onlyNotifyForAccountedChanges;
    BOOL _shouldSanitizeVehicleAlarms;
    int backingStoreType;
    NSString *eventStoreIdentifier;
    EKBackingStore *backingStore;
    NSObject<OS_dispatch_queue> *backgroundFetchQueue;
    NSSet *editingContextGroups;
    EKChangeListener *changeListener;
    EKLiveEditingStore *liveEditingStore;
    NSDate *lastCheckpointDate;
    NSArray *_calendars;
}

+ (id)dateFromDateString:(id)arg1;
+ (id)dateStringFromDate:(id)arg1;
+ (int)_liveEventStores;
+ (BOOL)_skipTCCAccessCheck;
+ (void)_noteGlobalAccessRequestedForEntityType:(unsigned long long)arg1;
+ (BOOL)accessGrantedForSource:(id)arg1;
+ (BOOL)accessGrantedForCalendar:(id)arg1;
+ (BOOL)accessGrantedForEntityType:(unsigned long long)arg1;
+ (void)setDenyAccessToReminders:(BOOL)arg1;
+ (void)setDenyAccessToEvents:(BOOL)arg1;
+ (long long)authorizationStatusForEntityType:(unsigned long long)arg1 intendsToAccess:(BOOL)arg2;
+ (long long)authorizationStatusForEntityType:(unsigned long long)arg1;
@property(nonatomic) BOOL shouldSanitizeVehicleAlarms; // @synthesize shouldSanitizeVehicleAlarms=_shouldSanitizeVehicleAlarms;
@property BOOL onlyNotifyForAccountedChanges; // @synthesize onlyNotifyForAccountedChanges=_onlyNotifyForAccountedChanges;
@property(readonly, nonatomic) NSArray *calendars; // @synthesize calendars=_calendars;
@property(retain) NSDate *lastCheckpointDate; // @synthesize lastCheckpointDate;
@property(retain, nonatomic) EKLiveEditingStore *liveEditingStore; // @synthesize liveEditingStore;
@property(readonly, nonatomic) EKChangeListener *changeListener; // @synthesize changeListener;
@property(readonly, nonatomic) NSSet *editingContextGroups; // @synthesize editingContextGroups;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundFetchQueue; // @synthesize backgroundFetchQueue;
@property(readonly, nonatomic) int backingStoreType; // @synthesize backingStoreType;
@property(retain, nonatomic) EKBackingStore *backingStore; // @synthesize backingStore;
@property(readonly, nonatomic) NSString *eventStoreIdentifier; // @synthesize eventStoreIdentifier;
- (void).cxx_destruct;
- (BOOL)shouldWhitelistOrganizerPhoneNumberFromJunkChecks:(id)arg1;
- (BOOL)shouldWhitelistOrganizerEmailFromJunkChecks:(id)arg1;
- (id)_draftPathForEventWithOccurrenceID:(id)arg1 draftDirectory:(id)arg2;
- (void)_deleteDraft:(id)arg1;
- (void)_deleteDraftOfEventWithOccurrenceID:(id)arg1 fromDirectory:(id)arg2;
- (void)deleteDraftOfEventWithOccurrenceID:(id)arg1;
- (id)_loadDraftOfEventWithOccurrenceID:(id)arg1 fromDirectory:(id)arg2 withVersion:(id)arg3;
- (id)_loadDraftOfEventWithOccurrenceID:(id)arg1 fromDirectory:(id)arg2;
- (id)loadDraftOfEventWithOccurrenceID:(id)arg1;
- (BOOL)_saveDraftOfEvent:(id)arg1 toDirectory:(id)arg2 withVersion:(id)arg3;
- (BOOL)_saveDraftOfEvent:(id)arg1 toDirectory:(id)arg2;
- (BOOL)saveDraftOfEvent:(id)arg1;
- (id)_allOpenEditingContexts;
- (BOOL)_commitChangesForContext:(id)arg1 forceCommit:(BOOL)arg2 shouldClose:(char *)arg3;
- (BOOL)commitChangesFromEditingContextWithoutClosing:(id)arg1;
- (BOOL)_closeEditingContext:(id)arg1 forceCommit:(BOOL)arg2 forceDontCommit:(BOOL)arg3;
- (BOOL)closeEditingContextWithoutCommittingChanges:(id)arg1;
- (BOOL)closeEditingContextAndCommitChanges:(id)arg1;
- (BOOL)closeEditingContext:(id)arg1;
- (void)_addContextToNewOrExistingGroup:(id)arg1;
- (id)_openEditingContextWithObjects:(id)arg1 observer:(id)arg2;
- (BOOL)_objectsSupportEditingContexts:(id)arg1;
- (id)openEditingContextWithObjects:(id)arg1 observer:(id)arg2;
- (id)openEditingContextWithObjects:(id)arg1;
- (id)openEditingContextWithObject:(id)arg1 observer:(id)arg2;
- (id)openEditingContextWithObject:(id)arg1;
- (void)_notifyChangedSources:(BOOL)arg1 sourceIdentifiers:(id)arg2;
- (void)_notifyChangedReminders:(BOOL)arg1 reminderIdentifiers:(id)arg2 otherChanges:(id)arg3;
- (void)_notifyChangedEvents:(BOOL)arg1 eventIdentifiers:(id)arg2 otherChanges:(id)arg3;
- (void)_notifyChangedCalendars:(BOOL)arg1 calendarIdentifiers:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *backingStoreAvailableGroup;
- (id)_newBackingStoreForType:(int)arg1 options:(unsigned long long)arg2 sourceFilters:(id)arg3 accessRequestedForEvents:(BOOL)arg4 accessRequestedForReminders:(BOOL)arg5 asyncWithCompletion:(CDUnknownBlockType)arg6;
- (id)_newBackingStoreForType:(int)arg1 options:(unsigned long long)arg2 sourceFilters:(id)arg3 asyncWithCompletion:(CDUnknownBlockType)arg4;
- (void)setRangeOfInterest:(id)arg1;
- (void)refreshObjectIDs:(id)arg1 inContext:(id)arg2;
- (void)resetCache;
- (id)occurrencesForMultipleSeries:(id)arg1 inRange:(id)arg2;
- (void)eventsMatchingPredicateInTemporaryStore:(id)arg1 withActionBlock:(CDUnknownBlockType)arg2;
- (id)predicateForEventsWithTitle:(id)arg1 location:(id)arg2 notes:(id)arg3 participantNames:(id)arg4 calendars:(id)arg5;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3 matchingContacts:(id)arg4;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 calendarIdentifiers:(id)arg5 prefetchHint:(long long)arg6 exclusionOptions:(long long)arg7;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 prefetchHint:(long long)arg5;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendarIdentifiers:(id)arg3 prefetchHint:(long long)arg4 exclusionOptions:(long long)arg5;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendarIdentifiers:(id)arg3 exclusionOptions:(long long)arg4;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendarIdentifiers:(id)arg3 prefetchHint:(long long)arg4;
- (id)predicateForEventsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
- (id)predicateForEventsCreatedFromSuggestionsWithStartDate:(id)arg1 endDate:(id)arg2 calendars:(id)arg3;
- (id)predicateForEventCreatedFromSuggestionWithOpaqueKey:(id)arg1;
- (id)predicateForNaturalLanguageSuggestedEventsWithSearchString:(id)arg1;
- (id)predicateForNaturalLanguageSuggestedEventsWithSearchString:(id)arg1 startDate:(id)arg2;
- (id)predicateForAssistantEventSearchWithTimeZone:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 notes:(id)arg6 participants:(id)arg7 calendars:(id)arg8 limit:(long long)arg9;
- (id)eventWithUniqueId:(id)arg1 occurrenceDate:(id)arg2;
- (void)enumerateEventsMatchingPredicate:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)upcomingSuggestedEvents;
- (void)fetchEventCountsMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)eventCountsMatchingPredicate:(id)arg1;
- (id)fetchEventsMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)eventsMatchingPredicate:(id)arg1;
- (id)_liveEditedObjectsMatchingPredicate:(id)arg1 notInSet:(id)arg2;
- (id)_objectsWithLiveEdits:(id)arg1 matchingPredicate:(id)arg2;
- (id)_objectsWithLiveEdits:(id)arg1;
- (id)_objectWithLiveEdits:(id)arg1;
- (void)applyLiveEdits:(id)arg1;
- (void)_clearLiveEdits:(id)arg1 notify:(BOOL)arg2;
- (void)clearLiveEdits:(id)arg1;
- (void)_clearLiveEditsForObjects:(id)arg1 notify:(BOOL)arg2;
- (BOOL)partialSaveCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)partialSaveItem:(id)arg1 span:(long long)arg2 error:(id *)arg3;
- (id)backingEventsWithIdentifiers:(id)arg1;
- (id)eventsWithCalendarIdentifiers:(id)arg1;
- (id)eventsWithIdentifiers:(id)arg1;
- (id)eventsWithIdentifiers:(id)arg1 apiExpected:(BOOL)arg2;
- (id)calendarItemsWithEWSIdentifier:(id)arg1;
- (id)eventWithIdentifier:(id)arg1;
- (id)eventWithUniqueId:(id)arg1;
- (id)eventsWithExternalIdentifier:(id)arg1;
- (BOOL)removeEvent:(id)arg1 span:(long long)arg2 commit:(BOOL)arg3 error:(id *)arg4;
- (void)_willSaveCalendarItems:(id)arg1;
- (BOOL)_saveEvents:(id)arg1 span:(long long)arg2 commit:(BOOL)arg3 error:(id *)arg4 ignoreValidation:(BOOL)arg5 partialSave:(BOOL)arg6;
- (long long)_correctedSpanForEvents:(id)arg1 span:(long long)arg2;
- (BOOL)_saveEvents:(id)arg1 span:(long long)arg2 commit:(BOOL)arg3 error:(id *)arg4 ignoreValidation:(BOOL)arg5;
- (BOOL)_saveEvent:(id)arg1 span:(long long)arg2 commit:(BOOL)arg3 error:(id *)arg4 ignoreValidation:(BOOL)arg5;
- (BOOL)_partialSaveEvent:(id)arg1 span:(long long)arg2 error:(id *)arg3;
- (BOOL)saveEvent:(id)arg1 span:(long long)arg2 commit:(BOOL)arg3 error:(id *)arg4;
@property(readonly, nonatomic) NSArray *inboxRepliedSectionItems;
- (id)allEvents;
- (BOOL)hasImmediatelyEligibleTravelEvents;
- (id)_predicateForEventsWithStructuredLocationsInCalendars:(id)arg1;
- (BOOL)_eventsExistWithGeoCodedLocation;
- (id)_nextEventWithFetchBlock:(CDUnknownBlockType)arg1 searchBackwards:(BOOL)arg2 steps:(id)arg3;
- (id)nextEventWithCalendarIdentifiers:(id)arg1 exclusionOptions:(long long)arg2;
- (id)_predicateForNumberOfCompletedRemindersInCalendars:(id)arg1;
- (BOOL)anyCompletedRemindersInCalendars:(id)arg1;
- (unsigned long long)numberOfCompletedRemindersInCalendars:(id)arg1;
- (id)predicateForCompletedRemindersMaxResults:(unsigned long long)arg1 calendars:(id)arg2;
- (id)predicateForCompletedRemindersMaxResults:(unsigned long long)arg1;
- (id)predicateForAllIncompleteReminders;
- (id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8 maxResults:(unsigned long long)arg9 hasContactIdentifier:(BOOL)arg10 contactIdentifier:(id)arg11;
- (id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8 maxResults:(unsigned long long)arg9;
- (id)predicateForRemindersWithTitle:(id)arg1 listTitle:(id)arg2 limitToCompletedOrIncomplete:(BOOL)arg3 completed:(BOOL)arg4 dueAfter:(id)arg5 dueBefore:(id)arg6 searchTerm:(id)arg7 sortOrder:(int)arg8;
- (id)predicateForRemindersWithSearchTerm:(id)arg1;
- (id)predicateForRemindersWithContactIdentifier:(id)arg1;
- (id)predicateForCompletedRemindersWithCalendars:(id)arg1;
- (id)predicateForRemindersWithTitle:(id)arg1 calendars:(id)arg2;
- (id)predicateForAllRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForAllRemindersWithDueDate:(id)arg1 calendars:(id)arg2;
- (id)predicateForCompletedRemindersWithDueDateOrCompletionDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForCompletedRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForIncompleteRemindersDueBeforeOrOnDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForIncompleteRemindersWithDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)_predicateForRemindersWithDate:(id)arg1 useAsCompletionDate:(BOOL)arg2 calendars:(id)arg3 limitToCompletedOrIncomplete:(BOOL)arg4 completed:(BOOL)arg5 includeDatesBefore:(BOOL)arg6 sortOrder:(int)arg7;
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg1 ending:(id)arg2 calendars:(id)arg3;
- (id)predicateForIncompleteRemindersDueBeforeOrOnExactDueDate:(id)arg1 calendars:(id)arg2 sortOrder:(int)arg3;
- (id)predicateForRemindersInCalendars:(id)arg1;
- (void)cancelFetchRequest:(id)arg1;
- (id)fetchRemindersMatchingPredicate:(id)arg1 completionCallback:(CDUnknownBlockType)arg2 cancelCallback:(CDUnknownBlockType)arg3;
- (id)fetchRemindersMatchingPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)remindersMatchingPredicate:(id)arg1;
- (id)calendarItemsMatchingPredicate:(id)arg1 entityClass:(id)arg2;
- (void)notifyChangedSources:(BOOL)arg1 changedCalendars:(BOOL)arg2 changedEvents:(BOOL)arg3 changedSuggestedEvents:(BOOL)arg4 changedReminders:(BOOL)arg5 changedNotifications:(BOOL)arg6 sourceIdentifiers:(id)arg7 calendarIdentifiers:(id)arg8 eventIdentifiers:(id)arg9 reminderIdentifiers:(id)arg10 otherChanges:(id)arg11;
- (void)notifyChangedSources:(BOOL)arg1 changedCalendars:(BOOL)arg2 changedEvents:(BOOL)arg3 changedSuggestedEvents:(BOOL)arg4 changedReminders:(BOOL)arg5 changedNotifications:(BOOL)arg6 otherChanges:(id)arg7;
- (id)remindersWithCalendarIdentifiers:(id)arg1;
- (id)remindersWithIdentifiers:(id)arg1;
- (id)reminderWithIdentifier:(id)arg1;
- (id)remindersWithExternalIdentifier:(id)arg1;
- (BOOL)removeSource:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (BOOL)saveSource:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (BOOL)removeCalendar:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_saveCalendar:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3 partialSave:(BOOL)arg4 ignoreValidation:(BOOL)arg5;
- (BOOL)_saveCalendar:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3 partialSave:(BOOL)arg4;
- (BOOL)_saveCalendar:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3 ignoreValidation:(BOOL)arg4;
- (BOOL)saveCalendar:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_partialSaveCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)removeReminder:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_partialSaveReminder:(id)arg1 error:(id *)arg2;
- (BOOL)_saveReminder:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3 partialSave:(BOOL)arg4;
- (BOOL)saveReminder:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (id)allReminders;
- (id)reminderWithExternalURI:(id)arg1;
- (id)eventWithExternalURI:(id)arg1;
- (id)_eventWithURI:(id)arg1 checkValid:(BOOL)arg2;
- (id)calendarItemWithExternalURI:(id)arg1;
- (id)calendarWithExternalURI:(id)arg1;
- (void)showReminderInReminders:(id)arg1 withOpenOptions:(int)arg2;
- (void)showEventInCalendar:(id)arg1 withOpenOptions:(int)arg2 inView:(int)arg3;
- (void)showDateInCalendar:(id)arg1 inView:(int)arg2;
- (id)stringForViewOption:(int)arg1;
- (id)stringForOpenOption:(int)arg1;
- (id)calendarItemsWithExternalIdentifier:(id)arg1;
- (id)calendarItemWithIdentifier:(id)arg1;
- (id)calendarItemWithIdentifier:(id)arg1 apiExpected:(BOOL)arg2;
- (BOOL)saveNotifications:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (BOOL)saveNotification:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (BOOL)respondToSharedCalendarInvitation:(id)arg1 withStatus:(unsigned long long)arg2 commit:(BOOL)arg3 error:(id *)arg4;
- (BOOL)_respondToInvitations:(id)arg1 withStatus:(long long)arg2 exceptForDates:(id)arg3 notifyOrganizer:(BOOL)arg4 placingInCalendar:(id)arg5 commit:(BOOL)arg6 error:(id *)arg7;
- (BOOL)acceptInvitation:(id)arg1 exceptForDates:(id)arg2 notifyOrganizer:(BOOL)arg3 placingInCalendar:(id)arg4 commit:(BOOL)arg5 error:(id *)arg6;
- (BOOL)respondToInvitations:(id)arg1 withStatus:(long long)arg2 notifyOrganizer:(BOOL)arg3 commit:(BOOL)arg4 error:(id *)arg5;
- (BOOL)respondToInvitation:(id)arg1 withStatus:(long long)arg2 notifyOrganizer:(BOOL)arg3 placingInCalendar:(id)arg4 commit:(BOOL)arg5 error:(id *)arg6;
- (BOOL)respondToInvitation:(id)arg1 withStatus:(long long)arg2 commit:(BOOL)arg3 error:(id *)arg4;
- (BOOL)acceptAlternateTimeProposalNotification:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (BOOL)acknowledgeNotifications:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (BOOL)acknowledgeNotification:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3;
- (id)filteredNotificationsForEntityType:(unsigned long long)arg1 notifications:(id)arg2;
- (id)notificationsForEntityType:(unsigned long long)arg1 includingPast:(BOOL)arg2;
- (id)notificationsForEntityType:(unsigned long long)arg1;
- (id)allNotificationsIncludingPast:(BOOL)arg1;
- (id)allNotifications;
- (id)sourcesEnabledForEntityType:(unsigned long long)arg1;
- (id)sourceErrors;
- (id)sourceWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *sources;
- (id)localSource;
@property(readonly, nonatomic) NSArray *delegateSources;
- (id)readWriteCalendarsForEntityType:(unsigned long long)arg1;
@property(readonly, nonatomic) EKCalendar *naturalLanguageSuggestedEventCalendar;
- (void)removeSuggestedEventCalendar;
- (void)insertSuggestedEventCalendar;
@property(readonly, nonatomic) EKCalendar *suggestedEventCalendar;
- (void)setDefaultCalendarForNewReminders:(id)arg1;
@property(retain, nonatomic) EKCalendar *defaultCalendarForNewEvents;
- (id)_calendarWithLiveEdits:(id)arg1;
- (id)defaultCalendarForNewReminders;
- (id)acquireDefaultCalendarForNewReminders;
- (id)acquireDefaultCalendarForNewEvents;
- (id)calendarWithIdentifier:(id)arg1;
- (id)calendarsForEntityType:(unsigned long long)arg1;
- (id)allFrozenOrNewCalendarsForEntityType:(unsigned long long)arg1;
- (id)allFrozenOrNewCalendars;
- (id)allCalendars;
- (void)_setEventStoreOnObject:(id)arg1;
- (void)_setEventStoreOnObjects:(id)arg1;
- (void)reset;
- (void)refreshSourcesIfNecessary;
- (BOOL)_conditionalSave:(id)arg1 commit:(BOOL)arg2 partial:(BOOL)arg3 error:(id *)arg4 withActionBlock:(CDUnknownBlockType)arg5 withValidateBlock:(CDUnknownBlockType)arg6 withCleanupBlock:(CDUnknownBlockType)arg7;
- (BOOL)_conditionalSave:(id)arg1 commit:(BOOL)arg2 partial:(BOOL)arg3 error:(id *)arg4 withActionBlock:(CDUnknownBlockType)arg5 withValidateBlock:(CDUnknownBlockType)arg6;
- (BOOL)_conditionalSave:(id)arg1 commit:(BOOL)arg2 partial:(BOOL)arg3 error:(id *)arg4 withActionBlock:(CDUnknownBlockType)arg5 ignoreValidation:(BOOL)arg6 withCleanupBlock:(CDUnknownBlockType)arg7;
- (BOOL)_conditionalSave:(id)arg1 commit:(BOOL)arg2 error:(id *)arg3 withActionBlock:(CDUnknownBlockType)arg4;
- (BOOL)_savePreFlight:(id)arg1 withValidateBlock:(CDUnknownBlockType)arg2 anObject:(id *)arg3 error:(id *)arg4;
- (BOOL)_commitObjectsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (BOOL)commitObjectsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (BOOL)commit:(id *)arg1;
@property(readonly, nonatomic) unsigned long long lastConfirmedSplashScreenVersion;
@property(readonly, nonatomic) BOOL automaticLocationGeocodingAllowed;
- (id)sourceFilters;
- (unsigned long long)options;
- (id)copyForBackgroundUpdate;
- (id)initWithEventStore:(id)arg1 andNewBackingStore:(id)arg2;
- (void)dealloc;
- (void)_setupDefaultPermissions;
- (id)initWithStoreType:(int)arg1 options:(unsigned long long)arg2 sourceFilters:(id)arg3 asyncWithCompletion:(CDUnknownBlockType)arg4 orWithExistingStore:(id)arg5 andBackingStore:(id)arg6;
- (id)initWithStoreType:(int)arg1 options:(unsigned long long)arg2 sourceFilters:(id)arg3 asyncWithCompletion:(CDUnknownBlockType)arg4;
- (id)initWithStoreType:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithStoreType:(int)arg1 sourceFilters:(id)arg2;
- (id)initWithStoreType:(int)arg1;
- (id)initWithSources:(id)arg1;
- (id)initWithSourceFilters:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithSourceFilters:(id)arg1;
- (id)initWithAccessToEntityTypes:(unsigned long long)arg1;
- (id)initAsyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)_requestAccessForMask:(unsigned long long)arg1;
- (void)requestAccessToEntityType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_noteAccessRequestedToEntityType:(unsigned long long)arg1;

@end

