//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNCommuteSession, NSArray;

@protocol MNCommuteSessionObserver <NSObject>
- (void)commuteSession:(MNCommuteSession *)arg1 didUpdateDestinations:(NSArray *)arg2;

@optional
- (void)commuteSessionDidArrive:(MNCommuteSession *)arg1;
- (void)commuteSession:(MNCommuteSession *)arg1 didChangeToState:(unsigned long long)arg2;
@end
