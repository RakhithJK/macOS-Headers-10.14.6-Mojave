//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _TtC8FMClient18SearchResultDevice : NSObject
{
    // Error parsing type: , name: firstName
    // Error parsing type: , name: lastName
    // Error parsing type: , name: ownerDsid
    // Error parsing type: , name: serverId
    // Error parsing type: , name: deviceName
    // Error parsing type: , name: deviceClass
    // Error parsing type: , name: productName
    // Error parsing type: , name: discoveryId
    // Error parsing type: , name: productType
    // Error parsing type: , name: thisDevice
    // Error parsing type: , name: needsSafety
    // Error parsing type: , name: pairedDevices
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 ownerDsid:(id)arg3 serverId:(id)arg4 deviceName:(id)arg5 deviceClass:(id)arg6 productName:(id)arg7 discoveryId:(id)arg8 productType:(id)arg9 thisDevice:(BOOL)arg10 needsSafety:(BOOL)arg11 pairedDevices:(id)arg12;
@property(nonatomic, readonly) NSArray *pairedDevices; // @synthesize pairedDevices;
@property(nonatomic, readonly) BOOL needsSafety; // @synthesize needsSafety;
@property(nonatomic, readonly) BOOL thisDevice; // @synthesize thisDevice;
@property(nonatomic, readonly) NSString *productType; // @synthesize productType;
@property(nonatomic, readonly) NSString *discoveryId; // @synthesize discoveryId;
@property(nonatomic, readonly) NSString *productName; // @synthesize productName;
@property(nonatomic, readonly) NSString *deviceClass; // @synthesize deviceClass;
@property(nonatomic, readonly) NSString *deviceName; // @synthesize deviceName;
@property(nonatomic, readonly) NSString *serverId; // @synthesize serverId;
@property(nonatomic, readonly) NSString *ownerDsid; // @synthesize ownerDsid;
@property(nonatomic, readonly) NSString *lastName; // @synthesize lastName;
@property(nonatomic, readonly) NSString *firstName; // @synthesize firstName;

@end

