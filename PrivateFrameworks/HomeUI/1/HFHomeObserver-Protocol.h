//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HMHomeDelegatePrivate-Protocol.h>

@class HMHome, HMRoom, NSSet;

@protocol HFHomeObserver <HMHomeDelegatePrivate>

@optional
- (void)home:(HMHome *)arg1 remoteAccessStateDidChange:(unsigned long long)arg2;
- (void)home:(HMHome *)arg1 didUpdateWallpaperForRoom:(HMRoom *)arg2;
- (void)homeDidUpdateWallpaper:(HMHome *)arg1;
- (void)home:(HMHome *)arg1 didSelectRoom:(HMRoom *)arg2;
- (void)home:(HMHome *)arg1 didExecuteActionSets:(NSSet *)arg2 failedActionSets:(NSSet *)arg3;
- (void)home:(HMHome *)arg1 didWriteValuesForCharacteristics:(NSSet *)arg2 failedCharacteristics:(NSSet *)arg3;
- (void)home:(HMHome *)arg1 didReadValuesForCharacteristics:(NSSet *)arg2 failedCharacteristics:(NSSet *)arg3;
- (void)home:(HMHome *)arg1 willExecuteActionSets:(NSSet *)arg2;
- (void)home:(HMHome *)arg1 willWriteValuesForCharacteristics:(NSSet *)arg2;
- (void)home:(HMHome *)arg1 willReadValuesForCharacteristics:(NSSet *)arg2;
@end

