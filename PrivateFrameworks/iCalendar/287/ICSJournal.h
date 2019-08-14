//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iCalendar/ICSComponent.h>

@class ICSDate, ICSUserAddress, NSArray, NSString, NSURL;

@interface ICSJournal : ICSComponent
{
}

+ (id)name;
- (BOOL)validate:(id *)arg1;

// Remaining properties
@property(retain) NSArray *attach; // @dynamic attach;
@property(retain) NSArray *attendee; // @dynamic attendee;
@property int classification; // @dynamic classification;
@property(retain) ICSDate *created; // @dynamic created;
@property(retain) NSString *description; // @dynamic description;
@property(retain) ICSDate *dtstamp; // @dynamic dtstamp;
@property(retain) ICSDate *dtstart; // @dynamic dtstart;
@property(retain) NSArray *exdate; // @dynamic exdate;
@property(retain) NSArray *exrule; // @dynamic exrule;
@property(retain) ICSDate *last_modified; // @dynamic last_modified;
@property(retain) ICSUserAddress *organizer; // @dynamic organizer;
@property(retain) NSArray *rdate; // @dynamic rdate;
@property(retain) ICSDate *recurrence_id; // @dynamic recurrence_id;
@property(retain) NSArray *rrule; // @dynamic rrule;
@property unsigned long long sequence; // @dynamic sequence;
@property int status; // @dynamic status;
@property(retain) NSString *summary; // @dynamic summary;
@property(retain) NSString *uid; // @dynamic uid;
@property(retain) NSURL *url; // @dynamic url;

@end

