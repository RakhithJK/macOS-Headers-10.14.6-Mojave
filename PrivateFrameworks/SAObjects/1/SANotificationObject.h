//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSDate, NSNumber, NSString;

@interface SANotificationObject : SADomainObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *timeZoneId;
@property(copy, nonatomic) NSDate *recencyDate;
@property(copy, nonatomic) NSNumber *previewRestricted;
@property(copy, nonatomic) NSString *notificationId;
@property(copy, nonatomic) NSDate *endDate;
@property(copy, nonatomic) NSNumber *dateIsAllDay;
@property(copy, nonatomic) NSDate *date;
@property(copy, nonatomic) NSString *applicationId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

