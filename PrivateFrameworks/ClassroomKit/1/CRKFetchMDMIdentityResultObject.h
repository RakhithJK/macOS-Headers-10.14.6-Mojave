//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DeviceManagement/CATTaskResultObject.h>

@class NSData, NSString;

@interface CRKFetchMDMIdentityResultObject : CATTaskResultObject
{
    NSData *_mdmIdentityPersistentID;
    NSString *_mdmIdentityCommonName;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *mdmIdentityCommonName; // @synthesize mdmIdentityCommonName=_mdmIdentityCommonName;
@property(retain, nonatomic) NSData *mdmIdentityPersistentID; // @synthesize mdmIdentityPersistentID=_mdmIdentityPersistentID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

