//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCROutputComponent.h>

@class NSLock, NSMutableString;

__attribute__((visibility("hidden")))
@interface SCROutputTextDisplayComponent : SCROutputComponent
{
    NSMutableString *_currentDisplayString;
    NSLock *_currentDisplayStringLock;
}

- (id)expandedStringFromAction:(id)arg1;
- (id)literalEchoStringFromAction:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)nonBlockingActionsAreComplete;
- (int)preflightSequentialSteps:(id)arg1 runnerName:(id)arg2;
- (void)dealloc;
- (id)init;

@end

