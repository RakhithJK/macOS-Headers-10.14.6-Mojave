//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKGeneralLookupPredicate.h>

@class NSDate, NSString;

@interface EKSuggestedEventPredicate : EKGeneralLookupPredicate
{
    NSDate *_endDate;
    NSString *_opaqueKey;
    NSDate *_startDate;
}

@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *opaqueKey; // @synthesize opaqueKey=_opaqueKey;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
- (void).cxx_destruct;
- (id)description;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 opaqueKey:(id)arg3 calendars:(id)arg4;
- (id)predicateForCoreData;

@end

