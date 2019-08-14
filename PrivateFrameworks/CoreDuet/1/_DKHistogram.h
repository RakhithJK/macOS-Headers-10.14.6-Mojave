//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval, NSDictionary, NSMutableDictionary, NSString, NSUUID, _DKEventStream;

@interface _DKHistogram : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_histogram;
    unsigned long long _countOverAllValues;
    NSDateInterval *_interval;
    NSUUID *_identifier;
    NSString *_customIdentifier;
    _DKEventStream *_stream;
    NSArray *_deviceIdentifiers;
}

+ (BOOL)supportsSecureCoding;
+ (id)entityName;
@property(retain, nonatomic) NSArray *deviceIdentifiers; // @synthesize deviceIdentifiers=_deviceIdentifiers;
@property(retain, nonatomic) _DKEventStream *stream; // @synthesize stream=_stream;
@property(nonatomic) unsigned long long countOverAllValues; // @synthesize countOverAllValues=_countOverAllValues;
@property(retain, nonatomic) NSString *customIdentifier; // @synthesize customIdentifier=_customIdentifier;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
@property(retain, nonatomic) NSDictionary *histogram; // @synthesize histogram=_histogram;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)subtractHistogram:(id)arg1;
- (void)addHistogram:(id)arg1 decayingExistingCounts:(double)arg2;
- (void)addHistogram:(id)arg1;
- (void)_addPropertiesFrom:(id)arg1;
- (void)subtractValue:(id)arg1;
- (void)addValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)countDictionary;
- (double)relativeFrequencyForValue:(id)arg1;
- (unsigned long long)countForValue:(id)arg1;
- (id)initWithHistogram:(id)arg1;
- (id)initWithValues:(id)arg1;
- (id)init;
- (id)insertInManagedObjectContext:(id)arg1;
- (id)initWithManagedObject:(id)arg1;

@end

