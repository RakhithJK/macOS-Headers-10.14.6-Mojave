//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface RPIdentity : NSObject <NSSecureCoding>
{
    BOOL _userAdded;
    BOOL _disabled;
    BOOL _present;
    int _type;
    NSString *_accountID;
    NSString *_contactID;
    NSDate *_dateAdded;
    NSDate *_dateRemoved;
    NSData *_deviceIRKData;
    NSData *_edPKData;
    NSData *_edSKData;
    unsigned long long _featureFlags;
    NSString *_identifier;
    NSString *_idsDeviceID;
    NSString *_mediaRemoteID;
    NSString *_mediaRouteID;
    NSString *_model;
    NSString *_name;
    NSDate *_dateAcknowledged;
    NSDate *_dateRequested;
}

+ (BOOL)supportsSecureCoding;
+ (id)nullIdentity;
@property(nonatomic) BOOL present; // @synthesize present=_present;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(copy, nonatomic) NSDate *dateRequested; // @synthesize dateRequested=_dateRequested;
@property(copy, nonatomic) NSDate *dateAcknowledged; // @synthesize dateAcknowledged=_dateAcknowledged;
@property(nonatomic) BOOL userAdded; // @synthesize userAdded=_userAdded;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *mediaRouteID; // @synthesize mediaRouteID=_mediaRouteID;
@property(copy, nonatomic) NSString *mediaRemoteID; // @synthesize mediaRemoteID=_mediaRemoteID;
@property(copy, nonatomic) NSString *idsDeviceID; // @synthesize idsDeviceID=_idsDeviceID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long featureFlags; // @synthesize featureFlags=_featureFlags;
@property(copy, nonatomic) NSData *edSKData; // @synthesize edSKData=_edSKData;
@property(copy, nonatomic) NSData *edPKData; // @synthesize edPKData=_edPKData;
@property(copy, nonatomic) NSData *deviceIRKData; // @synthesize deviceIRKData=_deviceIRKData;
@property(copy, nonatomic) NSDate *dateRemoved; // @synthesize dateRemoved=_dateRemoved;
@property(copy, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(copy, nonatomic) NSString *contactID; // @synthesize contactID=_contactID;
@property(copy, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (BOOL)verifySignaturePtr:(const void *)arg1 signatureLen:(unsigned long long)arg2 dataPtr:(const void *)arg3 dataLen:(unsigned long long)arg4 error:(id *)arg5;
- (BOOL)verifySignature:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (BOOL)signDataPtr:(const void *)arg1 dataLen:(unsigned long long)arg2 signatureBytes:(unsigned char [64])arg3 error:(id *)arg4;
- (id)signData:(id)arg1 error:(id *)arg2;
- (BOOL)verifyAuthTagPtr:(const void *)arg1 authTagLen:(unsigned long long)arg2 dataPtr:(const void *)arg3 dataLen:(unsigned long long)arg4 type:(int)arg5 error:(id *)arg6;
- (BOOL)verifyAuthTag:(id)arg1 data:(id)arg2 type:(int)arg3 error:(id *)arg4;
- (id)authTagForData:(id)arg1 type:(int)arg2 error:(id *)arg3;
- (unsigned int)updateWithKeychainItem:(id)arg1 error:(id *)arg2;
- (unsigned int)compareWithRPIdentity:(id)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithType:(int)arg1;
- (id)initWithCoder:(id)arg1;

@end

