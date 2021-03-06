//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PersistentConnection/NSObject-Protocol.h>

@class NSString;

@protocol PCInterfaceMonitorProtocol <NSObject>
@property(readonly, nonatomic) BOOL isNetworkingPowerExpensiveToUse;
@property(readonly, nonatomic) BOOL isRadioHot;
@property(readonly, nonatomic) BOOL isBadLinkQuality;
@property(readonly, nonatomic) BOOL isPoorLinkQuality;
@property(readonly, retain, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) BOOL isInternetReachable;
@property(readonly, nonatomic) BOOL isInterfaceHistoricallyUsable;
@property(readonly, nonatomic) BOOL isInterfaceUsable;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) long long interfaceIdentifier;

@optional
@property(readonly, nonatomic) NSString *networkCode;
@property(readonly, nonatomic) struct __CFString *wwanInterfaceName;
@property(readonly, nonatomic) BOOL isLTEWithCDRX;
@property(readonly, nonatomic) int currentRAT;
@end

