//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ExchangeWebServices/EWSBasePermissionType.h>

@interface EWSCalendarPermissionType : EWSBasePermissionType
{
    long long _ReadItems;
    long long _CalendarPermissionLevel;
}

+ (id)definition;
@property(nonatomic) long long CalendarPermissionLevel; // @synthesize CalendarPermissionLevel=_CalendarPermissionLevel;
@property(nonatomic) long long ReadItems; // @synthesize ReadItems=_ReadItems;
- (id)description;

@end

