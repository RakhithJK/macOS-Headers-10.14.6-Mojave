//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSIndexSet, NSMutableIndexSet, _NSCollectionViewMutableIndexPathSet;

__attribute__((visibility("hidden")))
@interface _NSCollectionViewMutableIndexPathSetEnumerator : NSEnumerator
{
    _NSCollectionViewMutableIndexPathSet *_indexPathSet;
    NSMutableIndexSet *_sectionIndexSet;
    NSIndexSet *_currentItemIndexSet;
    unsigned long long _currentSectionIndex;
    unsigned long long _lastItemIndexReturned;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithCollectionViewIndexPathSet:(id)arg1;

@end

