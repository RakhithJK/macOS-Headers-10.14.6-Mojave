//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CALOccurrence.h>

@interface CoreAlarmOccurrence : CALOccurrence
{
    CALOccurrence *_originOccurrence;
    BOOL _isSnoozed;
}

+ (id)occurrenceFromEntity:(id)arg1 originOccurrence:(id)arg2;
- (void).cxx_destruct;
- (void)setOriginOccurrence:(id)arg1;
- (id)originOccurrence;
- (id)occurrenceID;
- (id)alarmEntity;
- (void)setIsSnoozed:(BOOL)arg1;
- (BOOL)isSnoozed;

@end

