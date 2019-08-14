//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MTLIndexedConstantValue : NSObject
{
    unsigned long long _index;
    unsigned long long _dataType;
    char *_data;
}

@property(readonly) void *data; // @synthesize data=_data;
@property(readonly) unsigned long long dataType; // @synthesize dataType=_dataType;
@property(readonly) unsigned long long index; // @synthesize index=_index;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)describe;
- (void)dealloc;
- (id)initWithValue:(const void *)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3;

@end

