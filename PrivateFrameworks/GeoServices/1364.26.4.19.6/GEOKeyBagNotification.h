//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOKeyBagNotification : NSObject
{
    int _currentState;
    int _notifyToken;
}

+ (id)sharedObject;
- (void)updateState;
@property(readonly, nonatomic) int state;
- (void)removeObserver:(id)arg1;
- (BOOL)addDataDidBecomeAvailableObserver:(id)arg1 ifTypeIsNotCurrentlyAccessible:(unsigned long long)arg2;
- (BOOL)canAccessFilesWithProtection:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

