//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, _DKHistogramMO;

@interface _DKHistogramValueMO : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSNumber *count; // @dynamic count;
@property(retain, nonatomic) _DKHistogramMO *histogram; // @dynamic histogram;
@property(copy, nonatomic) NSNumber *integerValue; // @dynamic integerValue;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;

@end

