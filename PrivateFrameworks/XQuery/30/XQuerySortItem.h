//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface XQuerySortItem : NSObject
{
    id _value;
    long long _position;
    NSArray *_sortInfo;
}

- (long long)position;
- (id)sortInfo;
- (id)value;
- (id)initWithValue:(id)arg1 sortInfo:(id)arg2 forPosition:(long long)arg3;
- (void)finalize;
- (void)dealloc;

@end

