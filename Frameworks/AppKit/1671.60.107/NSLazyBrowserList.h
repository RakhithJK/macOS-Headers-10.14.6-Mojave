//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

__attribute__((visibility("hidden")))
@interface NSLazyBrowserList : NSMutableArray
{
    unsigned long long count;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)makeObjectsPerform:(SEL)arg1 withObject:(id)arg2;
- (void)makeObjectsPerform:(SEL)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeLastObject;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;

@end

