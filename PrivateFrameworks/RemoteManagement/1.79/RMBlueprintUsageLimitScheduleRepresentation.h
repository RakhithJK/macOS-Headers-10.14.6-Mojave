//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, RMBlueprintUsageLimitScheduleSimpleItem;

@interface RMBlueprintUsageLimitScheduleRepresentation : NSObject
{
    RMBlueprintUsageLimitScheduleSimpleItem *_simpleSchedule;
    NSArray *_customScheduleItems;
}

@property(copy, nonatomic) NSArray *customScheduleItems; // @synthesize customScheduleItems=_customScheduleItems;
@property(retain, nonatomic) RMBlueprintUsageLimitScheduleSimpleItem *simpleSchedule; // @synthesize simpleSchedule=_simpleSchedule;
- (void).cxx_destruct;

@end

