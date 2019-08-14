//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface SACalendarEventSearch : SADomainCommand
{
}

+ (id)eventSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)eventSearch;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *timeZoneId;
@property(copy, nonatomic) NSDate *startDate;
@property(copy, nonatomic) NSArray *participants;
@property(copy, nonatomic) NSString *notes;
@property(copy, nonatomic) NSString *location;
@property(copy, nonatomic) NSNumber *limit;
@property(copy, nonatomic) NSDate *endDate;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

