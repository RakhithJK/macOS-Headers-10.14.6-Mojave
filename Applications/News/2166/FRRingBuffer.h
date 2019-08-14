//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface FRRingBuffer : NSObject
{
    unsigned long long _capacity;
    NSMutableArray *_values;
    unsigned long long _position;
    double _min;
    double _max;
}

@property(nonatomic) double max; // @synthesize max=_max;
@property(nonatomic) double min; // @synthesize min=_min;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSDictionary *dictionary;
- (void)insertValue:(double)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 dictionary:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

