//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WiFiVelocity/NSCopying-Protocol.h>
#import <WiFiVelocity/NSSecureCoding-Protocol.h>

@interface W5PowerStatus : NSObject <NSCopying, NSSecureCoding>
{
    int _batteryWarningLevel;
    unsigned int _powerStateCaps;
    long long _powerSourceType;
    double _internalBatteryLevel;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int powerStateCaps; // @synthesize powerStateCaps=_powerStateCaps;
@property(nonatomic) double internalBatteryLevel; // @synthesize internalBatteryLevel=_internalBatteryLevel;
@property(nonatomic) int batteryWarningLevel; // @synthesize batteryWarningLevel=_batteryWarningLevel;
@property(nonatomic) long long powerSourceType; // @synthesize powerSourceType=_powerSourceType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPowerStatus:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;

@end

