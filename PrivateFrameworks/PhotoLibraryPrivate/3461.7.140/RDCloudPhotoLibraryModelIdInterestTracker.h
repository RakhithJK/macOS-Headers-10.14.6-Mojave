//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableOrderedSet, NSMutableSet;

@interface RDCloudPhotoLibraryModelIdInterestTracker : NSObject
{
    NSCountedSet *_interestCount;
    NSMutableSet *_indefiniteInterests;
    NSMutableOrderedSet *_orderedList;
}

- (void).cxx_destruct;
- (id)indefiniteInterests;
- (id)orderedList;
- (void)removeIndefiniteInterest:(unsigned long long)arg1;
- (BOOL)addIndefiniteInterest:(unsigned long long)arg1;
- (BOOL)removeInterest:(unsigned long long)arg1;
- (BOOL)addInterest:(unsigned long long)arg1;
- (id)init;

@end

