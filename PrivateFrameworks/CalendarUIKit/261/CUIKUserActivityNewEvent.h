//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSDate, NSString, NSTimeZone, NSURL;

@interface CUIKUserActivityNewEvent : CUIKUserActivity
{
    BOOL _allDay;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
    NSString *_title;
    NSURL *_url;
    NSString *_notes;
    NSString *_location;
}

@property(retain) NSString *location; // @synthesize location=_location;
@property(retain) NSString *notes; // @synthesize notes=_notes;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSString *title; // @synthesize title=_title;
@property BOOL allDay; // @synthesize allDay=_allDay;
@property(retain) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)dictionary;
- (id)eventWithEventStore:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

