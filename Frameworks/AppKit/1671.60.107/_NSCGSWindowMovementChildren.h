//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _NSCGSWindowMovementChildren : NSObject
{
    NSMutableOrderedSet *_windowsToAdd;
    NSMutableSet *_windowsToRemove;
}

- (void)commitForWindow:(id)arg1;
- (id)windowsForWindow:(id)arg1;
- (void)setWindows:(id)arg1;
- (void)removeWindow:(id)arg1;
- (void)addWindow:(id)arg1;
- (void)dealloc;
- (id)init;

@end

