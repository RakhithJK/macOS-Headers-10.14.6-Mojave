//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface APLIterator : NSObject
{
    NSMutableArray *_array;
    unsigned long long _currentPosition;
    unsigned long long _count;
}

+ (id)iteratorForArray:(id)arg1;
- (void).cxx_destruct;
- (id)allObjects;
- (BOOL)hasMoreObjects;
- (unsigned long long)previousObjectsCount;
- (unsigned long long)nextObjectsCount;
- (unsigned long long)totalObjectsCount;
- (BOOL)goForward;
- (BOOL)goBack;
- (void)insertObject:(id)arg1;
- (id)previousObject;
- (id)currentObject;
- (id)nextObject;
- (void)setPositionToEnd;
- (void)setPositionToStart;
- (unsigned long long)currentPosition;
- (id)initWithArray:(id)arg1;

@end

