//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSOrderedSetChange : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly) id value;
@property(readonly) unsigned long long destinationIndex;
@property(readonly) unsigned long long sourceIndex;
@property(readonly) unsigned long long changeType;
- (id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4;

@end

