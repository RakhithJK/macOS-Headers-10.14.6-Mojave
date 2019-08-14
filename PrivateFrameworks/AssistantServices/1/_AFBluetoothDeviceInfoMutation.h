//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFBluetoothDeviceInfoMutating-Protocol.h>

@class AFBluetoothDeviceInfo, NSString, NSUUID;

@interface _AFBluetoothDeviceInfoMutation : NSObject <AFBluetoothDeviceInfoMutating>
{
    AFBluetoothDeviceInfo *_baseModel;
    NSString *_address;
    NSUUID *_deviceUID;
    unsigned int _vendorID;
    unsigned int _productID;
    BOOL _isAdvancedAppleAudioDevice;
    BOOL _supportsInEarDetection;
    BOOL _supportsVoiceTrigger;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasAddress:1;
        unsigned int hasDeviceUID:1;
        unsigned int hasVendorID:1;
        unsigned int hasProductID:1;
        unsigned int hasIsAdvancedAppleAudioDevice:1;
        unsigned int hasSupportsInEarDetection:1;
        unsigned int hasSupportsVoiceTrigger:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setSupportsVoiceTrigger:(BOOL)arg1;
- (void)setSupportsInEarDetection:(BOOL)arg1;
- (void)setIsAdvancedAppleAudioDevice:(BOOL)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setVendorID:(unsigned int)arg1;
- (void)setDeviceUID:(id)arg1;
- (void)setAddress:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
