//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CDAttributeOccurrence : NSObject
{
    NSDate *_date;
    NSObject *_value;
}

+ (id)attributeOccurrenceWithValue:(id)arg1 date:(id)arg2;
@property(readonly) NSObject *value; // @synthesize value=_value;
@property(readonly) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 date:(id)arg2;

@end

