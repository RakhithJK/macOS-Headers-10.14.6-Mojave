//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMHome, HMHomeManager;

@protocol HMHomeManagerDelegate <NSObject>

@optional
- (void)homeManager:(HMHomeManager *)arg1 didRemoveHome:(HMHome *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didAddHome:(HMHome *)arg2;
- (void)homeManagerDidUpdatePrimaryHome:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateHomes:(HMHomeManager *)arg1;
@end

