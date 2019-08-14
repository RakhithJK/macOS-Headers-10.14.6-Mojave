//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessoryVersion, NSString;

@interface HMDVendorModelEntry : HMFObject
{
    NSString *_modelName;
    NSString *_manufacturer;
    NSString *_category;
    NSString *_certificationStatus;
    NSString *_ppid;
    NSString *_appBundleID;
    NSString *_appStoreID;
    HMDAccessoryVersion *_firmwareVersion;
}

@property(readonly, nonatomic) HMDAccessoryVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, nonatomic) NSString *appStoreID; // @synthesize appStoreID=_appStoreID;
@property(readonly, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(readonly, nonatomic) NSString *ppid; // @synthesize ppid=_ppid;
@property(readonly, nonatomic) NSString *certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property(readonly, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithModelName:(id)arg1 manufacturer:(id)arg2 category:(id)arg3 certificationStatus:(id)arg4 ppid:(id)arg5 appBundleID:(id)arg6 appStoreID:(id)arg7 firmwareVersion:(id)arg8;

@end

