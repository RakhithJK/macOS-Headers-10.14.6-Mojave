//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol FCOperationRetrySignal <NSObject>
- (void)onQueue:(NSObject<OS_dispatch_queue> *)arg1 signal:(void (^)(BOOL))arg2;
@end

