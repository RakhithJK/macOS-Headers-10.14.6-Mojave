//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/AMRunActionOperation.h>

@interface AMRunActionAsyncOperation : AMRunActionOperation
{
    long long _state;
}

@property long long state; // @synthesize state=_state;
- (void)didFinishRunningWithError:(id)arg1;
- (void)finish;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)am_main;
- (void)start;

@end

