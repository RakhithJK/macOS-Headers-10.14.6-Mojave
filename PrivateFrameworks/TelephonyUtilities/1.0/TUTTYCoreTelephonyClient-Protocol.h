//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TelephonyUtilities/TUCoreTelephonyClient-Protocol.h>

@class NSUUID;

@protocol TUTTYCoreTelephonyClient <TUCoreTelephonyClient>
- (BOOL)isTTYSoftwareSupportedForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isTTYSoftwareEnabledForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isTTYSoftwareAvailableForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isTTYHardwareSupportedForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isTTYHardwareEnabledForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isTTYHardwareAvailableForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isTTYSupportedForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isTTYEnabledForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isRTTSupportedForSubscriptionUUID:(NSUUID *)arg1;
@end

