//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSMutableArray;

@interface OITSUAggregateEnumerator : NSEnumerator
{
    NSMutableArray *_objects;
}

+ (id)aggregateEnumeratorWithObjects:(id)arg1;
- (id)nextObject;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithObjects:(id)arg1;
- (id)initWithFirstObject:(id)arg1 argumentList:(struct __va_list_tag [1])arg2;

@end

