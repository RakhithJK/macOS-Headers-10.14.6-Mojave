//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FrontBoard/FBProcessObserver-Protocol.h>

@class FBApplicationProcess, FBApplicationProcessExitContext;

@protocol FBApplicationProcessObserver <FBProcessObserver>

@optional
- (void)applicationProcessDebuggingStateDidChange:(FBApplicationProcess *)arg1;
- (void)applicationProcessDidExit:(FBApplicationProcess *)arg1 withContext:(FBApplicationProcessExitContext *)arg2;
- (void)applicationProcessDidLaunch:(FBApplicationProcess *)arg1;
- (void)applicationProcessWillLaunch:(FBApplicationProcess *)arg1;
@end

