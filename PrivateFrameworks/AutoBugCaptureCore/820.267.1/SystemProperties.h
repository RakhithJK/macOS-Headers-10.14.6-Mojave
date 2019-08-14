//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SystemProperties : NSObject
{
    BOOL _internalBuild;
    BOOL _carrierSeedBuild;
    BOOL _basebandCapability;
    BOOL _lowEndHardware;
    BOOL _customerSeedBuild;
    BOOL _internalBuildDisabledByOverride;
    int _deviceClass;
    NSString *_productType;
    NSString *_productName;
    NSString *_productVersion;
    NSString *_buildVersion;
    NSString *_basebandChipset;
    NSNumber *_carrierSeedBuildOverride;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSNumber *carrierSeedBuildOverride; // @synthesize carrierSeedBuildOverride=_carrierSeedBuildOverride;
@property(nonatomic) BOOL internalBuildDisabledByOverride; // @synthesize internalBuildDisabledByOverride=_internalBuildDisabledByOverride;
@property(readonly) NSString *basebandChipset; // @synthesize basebandChipset=_basebandChipset;
@property(readonly) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(readonly) NSString *productName; // @synthesize productName=_productName;
@property(readonly) BOOL customerSeedBuild; // @synthesize customerSeedBuild=_customerSeedBuild;
@property(readonly) BOOL lowEndHardware; // @synthesize lowEndHardware=_lowEndHardware;
@property(readonly) BOOL basebandCapability; // @synthesize basebandCapability=_basebandCapability;
@property(readonly) int deviceClass; // @synthesize deviceClass=_deviceClass;
@property(readonly) NSString *productType; // @synthesize productType=_productType;
- (void).cxx_destruct;
@property(readonly) BOOL carrierSeedBuild; // @synthesize carrierSeedBuild=_carrierSeedBuild;
@property(readonly) BOOL internalBuild; // @synthesize internalBuild=_internalBuild;
- (id)deviceClassString;
- (id)init;
- (id)description;

@end
