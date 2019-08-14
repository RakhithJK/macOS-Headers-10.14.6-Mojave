//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FROfflineModeSupport <NSObject>
@property(nonatomic) long long offlineReason;
@property(nonatomic, getter=isInOfflineMode) BOOL inOfflineMode;
- (void)notifyWhenAvailabilityInOfflineModeHasBeenDeterminedUsingBlock:(void (^)(void))arg1;
- (BOOL)canProvideAvailabilityInOfflineModeSynchronously;
- (BOOL)isAvailableInOfflineMode;
@end

