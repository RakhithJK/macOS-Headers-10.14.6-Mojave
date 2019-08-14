//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessoryAdvertisement.h>

#import <HomeKitDaemon/HMDWACAccessoryAssociation-Protocol.h>

@class HMDMediaOutputDevice, NSObject;
@protocol OS_dispatch_queue;

@interface HMDMediaAccessoryAdvertisement : HMDAccessoryAdvertisement <HMDWACAccessoryAssociation>
{
    BOOL _associated;
    HMDMediaOutputDevice *_outputDevice;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (BOOL)canAirPortExpressSupportMediaAccessory:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
- (void).cxx_destruct;
- (long long)associationOptions;
@property(getter=isAssociated) BOOL associated; // @synthesize associated=_associated;
@property(retain) HMDMediaOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;
- (id)description;
- (BOOL)matchesWACDeviceID:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3;
- (id)initWithOutputDevice:(id)arg1;

@end

