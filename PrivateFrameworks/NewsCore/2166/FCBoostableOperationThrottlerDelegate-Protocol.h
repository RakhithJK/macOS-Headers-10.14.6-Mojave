//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@protocol FCOperationThrottler;

@protocol FCBoostableOperationThrottlerDelegate <FCOperationThrottlerDelegate>

@optional
- (void)operationThrottler:(id <FCOperationThrottler>)arg1 performAsyncOperationWithQualityOfService:(long long)arg2 completion:(void (^)(void))arg3;
@end

