//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/NSCopying-Protocol.h>
#import <CoreSpeech/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface CSAudioRecordDeviceInfo : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isRemoteDevice;
    NSString *_route;
    NSUUID *_remoteDeviceUID;
    NSString *_remoteDeviceProductIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *remoteDeviceProductIdentifier; // @synthesize remoteDeviceProductIdentifier=_remoteDeviceProductIdentifier;
@property(readonly, copy, nonatomic) NSUUID *remoteDeviceUID; // @synthesize remoteDeviceUID=_remoteDeviceUID;
@property(readonly, nonatomic) BOOL isRemoteDevice; // @synthesize isRemoteDevice=_isRemoteDevice;
@property(readonly, copy, nonatomic) NSString *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (id)initWithAVVCRecordDeviceInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithRoute:(id)arg1 isRemoteDevice:(BOOL)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4;

@end

