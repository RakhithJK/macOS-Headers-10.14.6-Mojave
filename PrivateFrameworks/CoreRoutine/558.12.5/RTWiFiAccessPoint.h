//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface RTWiFiAccessPoint : NSObject <NSSecureCoding>
{
    NSString *_mac;
    long long _rssi;
    long long _channel;
    double _age;
    NSDate *_date;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) double age; // @synthesize age=_age;
@property(readonly, nonatomic) long long channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) long long rssi; // @synthesize rssi=_rssi;
@property(readonly, nonatomic) NSString *mac; // @synthesize mac=_mac;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMac:(id)arg1 rssi:(long long)arg2 channel:(long long)arg3 age:(double)arg4 date:(id)arg5;

@end

