//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ICDevice, NSData, NSDictionary, NSError, NSString;

@protocol ICDeviceDelegate <NSObject>
- (void)didRemoveDevice:(ICDevice *)arg1;

@optional
- (void)device:(ICDevice *)arg1 didReceiveCustomNotification:(NSDictionary *)arg2 data:(NSData *)arg3;
- (void)device:(ICDevice *)arg1 didReceiveButtonPress:(NSString *)arg2;
- (void)device:(ICDevice *)arg1 didEncounterError:(NSError *)arg2;
- (void)device:(ICDevice *)arg1 didReceiveStatusInformation:(NSDictionary *)arg2;
- (void)deviceDidChangeSharingState:(ICDevice *)arg1;
- (void)deviceDidChangeName:(ICDevice *)arg1;
- (void)device:(ICDevice *)arg1 didCloseSessionWithError:(NSError *)arg2;
- (void)deviceDidBecomeReady:(ICDevice *)arg1;
- (void)device:(ICDevice *)arg1 didOpenSessionWithError:(NSError *)arg2;
@end
