//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKProtocolCalendarNotification-Protocol.h>

@protocol EventOccurrenceModelProtocol;

@protocol EKProtocolMutableCalendarNotification <EKProtocolCalendarNotification>
@property(retain, nonatomic) id <EventOccurrenceModelProtocol> occurrence;
@property(nonatomic) unsigned long long junkStatus;
@property BOOL dismissed;
@end

