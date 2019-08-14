//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarNotification/EKNotificationEngine.h>

@class NSArray, NSMutableDictionary;

@interface EKMessageEngine : EKNotificationEngine
{
    NSMutableDictionary *_allMessages;
    unsigned long long _calendarBadgeCount;
    unsigned long long _reminderBadgeCount;
    unsigned long long _lastDismissedCalendarCoalesceCount;
    unsigned long long _lastDismissedReminderCoalesceCount;
    NSArray *_coalescedSuggestionMessages;
}

@property(retain) NSArray *coalescedSuggestionMessages; // @synthesize coalescedSuggestionMessages=_coalescedSuggestionMessages;
@property unsigned long long lastDismissedReminderCoalesceCount; // @synthesize lastDismissedReminderCoalesceCount=_lastDismissedReminderCoalesceCount;
@property unsigned long long lastDismissedCalendarCoalesceCount; // @synthesize lastDismissedCalendarCoalesceCount=_lastDismissedCalendarCoalesceCount;
@property unsigned long long reminderBadgeCount; // @synthesize reminderBadgeCount=_reminderBadgeCount;
@property unsigned long long calendarBadgeCount; // @synthesize calendarBadgeCount=_calendarBadgeCount;
@property(retain) NSMutableDictionary *allMessages; // @synthesize allMessages=_allMessages;
- (void).cxx_destruct;
- (void)_performClickingActionForMessage:(id)arg1;
- (void)_performActionForMessage:(id)arg1;
- (void)_handleExpirationForIdentifiers:(id)arg1;
- (void)_handleActivationForCoalesced:(id)arg1;
- (void)_dismissCoalescedSuggestions;
- (void)_dismissCoalescedMessagesPassingTest:(CDUnknownBlockType)arg1;
- (void)_handleDismissalForCoalesced:(id)arg1;
- (void)_handleActivationForIdentifier:(id)arg1 userInfo:(id)arg2 clickActivation:(BOOL)arg3;
- (void)_handleDismissalForIdentifier:(id)arg1 userInfo:(id)arg2 dismissedAlert:(BOOL)arg3;
- (void)_handleDismissalOfNotification:(id)arg1;
- (BOOL)_shouldPerformActionOnDismiss:(unsigned long long)arg1;
- (id)_titleForAction:(unsigned long long)arg1;
- (unsigned long long)_actionForMessage:(id)arg1;
- (id)_notificationInfoForSuggestionMessages:(id)arg1;
- (id)_notificationInfoForCoalescedMessageWithCount:(unsigned long long)arg1 forCalendar:(BOOL)arg2;
- (id)_notificationInfoForMessage:(id)arg1;
- (void)_deliverCalendarMessages:(id)arg1 reminderMessages:(id)arg2;
- (BOOL)_messageShouldCoalesceForSuggestions:(id)arg1;
- (BOOL)_shouldCoalesceMessage:(id)arg1;
- (void)_deliverMessages:(id)arg1;
- (BOOL)_messageIsForReminders:(id)arg1;
- (BOOL)_shouldMessageBeShown:(id)arg1;
- (void)_scheduleMessageExpirationTimer;
- (id)_identifierForMessage:(id)arg1;
- (void)_remindersBadgeCountWithReply:(CDUnknownBlockType)arg1;
- (BOOL)_contributesToRemindersBadgeCount;
- (void)_calendarBadgeCountWithReply:(CDUnknownBlockType)arg1;
- (BOOL)_contributesToCalendarBadgeCount;
- (unsigned long long)_computeReminderBadgeCount;
- (unsigned long long)_computeCalendarBadgeCount;
- (id)_mapMessages:(id)arg1 passingFilter:(CDUnknownBlockType)arg2;
- (void)_updateBadgeCounts;
- (void)_removeNotificationIdentifiers:(id)arg1;
- (void)_updateMessages;
- (void)_updateMessagesAndBadges;
- (void)_loadMessagesFromEventStore;
- (BOOL)_isStringForCoalesced:(id)arg1;
- (BOOL)_handlesType:(id)arg1;
- (BOOL)_handlesExpirationForType:(id)arg1;
- (BOOL)_handlesActivationForType:(id)arg1;
- (BOOL)_handlesDismissalForType:(id)arg1;
- (id)_interestingNotifications;
- (void)_performAction;

@end

