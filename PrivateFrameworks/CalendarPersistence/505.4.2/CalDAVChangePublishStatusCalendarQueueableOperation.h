//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVCalendarQueueableOperation.h>

@class NSURL;

@interface CalDAVChangePublishStatusCalendarQueueableOperation : CalDAVCalendarQueueableOperation
{
    int _action;
    NSURL *_calendarURL;
}

@property(readonly) int action; // @synthesize action=_action;
@property(readonly, retain) NSURL *calendarURL; // @synthesize calendarURL=_calendarURL;
- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithChangeRequest:(id)arg1 session:(id)arg2 action:(id)arg3;

@end

