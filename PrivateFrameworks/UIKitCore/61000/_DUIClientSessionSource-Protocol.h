//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_DUIClientSessionCommon-Protocol.h>

@class BKSAnimationFenceHandle, NSArray;

@protocol _DUIClientSessionSource <_DUIClientSessionCommon>
- (oneway void)dataTransferSessionFinished;
- (oneway void)dragFailed;
- (oneway void)dragEndedWithOperation:(unsigned long long)arg1;
- (oneway void)handOffCancelledItems:(NSArray *)arg1 withFence:(BKSAnimationFenceHandle *)arg2;
- (oneway void)checkCanHandOffCancelledItemsWithReply:(void (^)(BOOL))arg1;
@end
