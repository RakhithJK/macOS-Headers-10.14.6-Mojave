//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBProcess, FBProcessManager;

@protocol FBProcessManagerObserver <NSObject>
- (void)processManager:(FBProcessManager *)arg1 didRemoveProcess:(FBProcess *)arg2;
- (void)processManager:(FBProcessManager *)arg1 didAddProcess:(FBProcess *)arg2;
@end

