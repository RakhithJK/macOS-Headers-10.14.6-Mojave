//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (SCRCThread)
+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;
+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;
- (void)performAsyncBlock:(CDUnknownBlockType)arg1 forThreadKey:(id)arg2;
- (id)valueForBlock:(CDUnknownBlockType)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)valueForSelector:(SEL)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copyValue:(BOOL)arg4 withObjects:(id)arg5;
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2;
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2;
- (id)_getRetainedValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copy:(BOOL)arg4;
- (id)copyValueForKeyPathOnMainThread:(id)arg1;
- (id)valueForKeyPathOnMainThread:(id)arg1;
- (id)_getRetainedValueForKeyPathOnMainThread:(id)arg1 copy:(BOOL)arg2;
- (void)_scr_safePerformBlock:(id)arg1 lock:(id)arg2;
- (void)_scr_safeGetValueForKeyPath:(id)arg1;
- (void)_scr_safeGetValueForKeyPath:(id)arg1 lock:(id)arg2;
- (void)_scr_safeGetValueForBlock:(id)arg1 lock:(id)arg2;
- (void)_scr_safeGetValueForSelector:(id)arg1 lock:(id)arg2;
- (id)performSelector:(SEL)arg1 withObjectsAsArray:(id)arg2;
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;
- (id)threadDescription;
@end

