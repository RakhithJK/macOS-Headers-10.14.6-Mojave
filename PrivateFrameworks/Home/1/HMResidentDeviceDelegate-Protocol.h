//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HMResidentDevice, NSString;

@protocol HMResidentDeviceDelegate <NSObject>

@optional
- (void)residentDevice:(HMResidentDevice *)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)residentDevice:(HMResidentDevice *)arg1 didUpdateEnabled:(BOOL)arg2;
- (void)residentDevice:(HMResidentDevice *)arg1 didUpdateCapabilities:(unsigned long long)arg2;
- (void)residentDevice:(HMResidentDevice *)arg1 didUpdateName:(NSString *)arg2;
@end

