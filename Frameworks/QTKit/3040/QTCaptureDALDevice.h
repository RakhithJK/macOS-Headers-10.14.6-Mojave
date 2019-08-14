//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QTKit/QTCaptureDevice.h>

@class NSArray, NSLock, NSMutableDictionary, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface QTCaptureDALDevice : QTCaptureDevice
{
    NSString *_uniqueID;
    unsigned int _deviceID;
    unsigned long long _flags;
    NSArray *_formatDescriptions;
    NSMutableDictionary *_attributes;
    NSLock *_attributesLock;
    NSString *_localizedDisplayName;
    NSString *_modelUniqueID;
    NSTimer *_deviceAVCControllsPoller;
    BOOL _automaticallyAdjustsFeatureControls;
}

+ (id)deviceWithUniqueID:(id)arg1;
+ (id)defaultInputDeviceWithMediaType:(id)arg1;
+ (void)_refreshDevices;
+ (id)devicesWithIOType:(int)arg1;
- (id)stillImageSampleBufferWithFormat:(id)arg1 error:(id *)arg2;
- (id)availableStillImageFormats;
- (unsigned int)transportType;
- (BOOL)nativelySupportsCompressionOptions:(id)arg1;
- (BOOL)isHighResolutionCamera;
- (BOOL)automaticallyAdjustsFeatureControls;
- (void)setAutomaticallyAdjustsFeatureControls:(BOOL)arg1;
- (void)_refreshSuspendedAttributeFromCallback;
- (void)_refreshLinkedDevicesAttributeFromCallback;
- (void)_refreshFormatDescriptionsAttributeFromCallback;
- (void)_refreshStreamsFromCallback;
- (void)_refreshIsInUseByAnotherApplicationFromCallback;
- (void)_retrieveAVCDeviceOpcode:(id)arg1;
- (void)startDeviceAVCControlsPoller;
- (BOOL)_sendAVCDeviceOpcode:(unsigned char)arg1 playbackMode:(unsigned char)arg2;
- (void)_postNotificationNamed:(id)arg1;
- (void)_handleDeviceIsAliveNotification:(id)arg1;
- (void)stopUsingDevice;
- (BOOL)startUsingDevice:(id *)arg1;
- (BOOL)isConnected;
- (BOOL)isInUseByAnotherApplication;
- (void)_refreshIsInUseByAnotherApplication;
- (void)_refreshSuspendedAttribute;
- (void)_refreshLinkedDevicesAttribute;
- (void)_refreshFormatDescriptionsAttribute;
- (void)_refreshStreams;
- (void)_refreshAttributes;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)attributeForKey:(id)arg1;
- (BOOL)attributeIsReadOnly:(id)arg1;
- (id)deviceAttributes;
- (id)formatDescriptions;
- (id)localizedDisplayName;
- (id)modelUniqueID;
- (void)setDeviceID:(unsigned int)arg1;
- (unsigned int)connectionUnitComponentSubType;
- (unsigned int)deviceID;
- (long long)deviceSystem;
- (id)uniqueID;
- (void)dealloc;
- (void)finalize;
- (void)_removePropertyListeners;
- (id)initWithUniqueID:(id)arg1 deviceID:(unsigned int)arg2;

@end

