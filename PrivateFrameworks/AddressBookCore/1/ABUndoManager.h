//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSUndoManager.h>

@class NSMutableArray;

@interface ABUndoManager : NSUndoManager
{
    BOOL _inCreationUndoGrouping;
    BOOL _checkpointSet;
    NSMutableArray *_commandTargetsSinceCheckpoint;
}

+ (id)sharedInstance;
+ (id)makeUndoManager;
+ (void)initialize;
- (void)removeCommandsSinceCheckpoint;
- (void)clearCheckpoint;
- (void)setCheckpoint;
- (void)setNonCreationActionName:(id)arg1;
- (void)endCreationUndoGrouping;
- (void)beginCreationUndoGrouping;
- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)dealloc;
- (id)init;

@end

