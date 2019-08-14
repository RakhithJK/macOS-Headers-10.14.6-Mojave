//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, W5WiFiScanResult;

@interface WDWiFiScanResult : NSObject
{
    W5WiFiScanResult *_scanResult;
    NSString *_ssid;
    NSString *_bssid;
    NSString *_countryCode;
    NSString *_security;
    NSString *_protocol;
    NSString *_rssi;
    NSString *_noise;
    NSNumber *_channel;
    NSString *_width;
    NSString *_band;
    BOOL _isCurrent;
    NSString *_tooltip;
}

@property(copy, nonatomic) NSString *tooltip; // @synthesize tooltip=_tooltip;
@property(nonatomic) BOOL isCurrent; // @synthesize isCurrent=_isCurrent;
@property(copy, nonatomic) NSString *band; // @synthesize band=_band;
@property(copy, nonatomic) NSString *width; // @synthesize width=_width;
@property(copy, nonatomic) NSNumber *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *noise; // @synthesize noise=_noise;
@property(copy, nonatomic) NSString *rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(copy, nonatomic) NSString *security; // @synthesize security=_security;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *bssid; // @synthesize bssid=_bssid;
@property(copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(copy, nonatomic) W5WiFiScanResult *scanResult; // @synthesize scanResult=_scanResult;
- (void).cxx_destruct;
- (id)initWithScanResult:(id)arg1;

@end

