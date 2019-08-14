//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface IOBluetoothSerialPort : NSObject
{
    NSMutableDictionary *_properties;
    NSDictionary *_serviceDictionary;
    NSString *_originalName;
}

+ (id)withProperties:(id)arg1;
+ (id)withTTYName:(id)arg1 andService:(id)arg2;
+ (id)withTTYName:(id)arg1;
@property(copy) NSString *originalName; // @synthesize originalName=_originalName;
- (void)setServiceRecordWithDefaultSerialPortSDPPlist;
- (void)setServiceRecordWithSDPPlist:(id)arg1;
- (void)setServiceDictionary:(id)arg1;
- (id)serviceDictionary;
- (id)deviceServiceName;
- (int)PSM;
- (void)setPSM:(int)arg1;
- (int)RFCOMMChannel;
- (void)setRFCOMMChannel:(int)arg1;
- (void)setAttributesFromServiceRecord:(id)arg1;
- (void)setDeviceServiceName:(id)arg1;
- (void)setDeviceAddress:(id)arg1;
- (id)deviceAddressString;
- (id)deviceAddress;
- (void)setDeviceName:(id)arg1;
- (id)deviceName;
- (id)ttyName;
- (void)setTTYName:(id)arg1;
- (id)serialEntryName;
- (BOOL)showsInNetworkPreferences;
- (void)setShowsInNetworkPreferences:(BOOL)arg1;
- (unsigned int)bsdPortType;
- (void)setBSDPortType:(unsigned int)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (unsigned int)connectionType;
- (BOOL)encryptionRequired;
- (void)setEncryptionRequired:(BOOL)arg1;
- (void)setAuthenticationRequired:(BOOL)arg1;
- (BOOL)authenticationRequired;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (BOOL)inUse;
- (void)setPropertiesFromDictionary:(id)arg1;
- (id)properties;
- (id)description;
- (void)dealloc;
- (id)init;

@end

