//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SAReminderTrigger.h>

@class NSDate, NSString, SAReminderDateTimeTriggerOffset;

@interface SAReminderDateTimeTrigger : SAReminderTrigger
{
}

+ (id)dateTimeTriggerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)dateTimeTrigger;
@property(copy, nonatomic) NSString *timeZoneId;
@property(retain, nonatomic) SAReminderDateTimeTriggerOffset *relativeTimeOffset;
@property(retain, nonatomic) SAReminderDateTimeTriggerOffset *offset;
@property(copy, nonatomic) NSDate *date;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

