//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpotlight/NSObject-Protocol.h>

@class CSIndexJob, NSArray, NSString;

@protocol CSIndexExtensionDelegate <NSObject>
- (void)indexRequestsPerformDataJob:(CSIndexJob *)arg1 forBundle:(NSString *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
- (void)indexRequestsPerformJob:(CSIndexJob *)arg1 extensions:(NSArray *)arg2 perExtensionCompletionHandler:(void (^)(NSString *, NSError *))arg3 completionHandler:(void (^)(void))arg4;
- (void)indexRequestsPerformJob:(CSIndexJob *)arg1 perExtensionCompletionHandler:(void (^)(NSString *, NSError *))arg2 completionHandler:(void (^)(void))arg3;
- (void)indexRequestsPerformJob:(CSIndexJob *)arg1 forBundle:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
@end

