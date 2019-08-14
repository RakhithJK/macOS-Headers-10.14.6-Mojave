//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@class AVBMACAddress;

@interface AVB17221ACMPMessage : NSObject <NSCopying>
{
    unsigned char messageType;
    unsigned char status;
    unsigned short talkerUniqueID;
    unsigned short listenerUniqueID;
    unsigned short connectionCount;
    unsigned short sequenceID;
    unsigned short flags;
    unsigned short vlanID;
    unsigned long long streamID;
    unsigned long long controllerEntityID;
    unsigned long long talkerEntityID;
    unsigned long long listenerEntityID;
    AVBMACAddress *destinationMAC;
    AVBMACAddress *sourceMAC;
}

+ (id)errorForStatusCode:(unsigned char)arg1;
+ (id)keyPathsForValuesAffectingListenerGUID;
+ (id)keyPathsForValuesAffectingTalkerGUID;
+ (id)keyPathsForValuesAffectingControllerGUID;
@property(copy) AVBMACAddress *sourceMAC; // @synthesize sourceMAC;
@property unsigned short vlanID; // @synthesize vlanID;
@property unsigned short flags; // @synthesize flags;
@property unsigned short sequenceID; // @synthesize sequenceID;
@property unsigned short connectionCount; // @synthesize connectionCount;
@property(copy) AVBMACAddress *destinationMAC; // @synthesize destinationMAC;
@property unsigned short listenerUniqueID; // @synthesize listenerUniqueID;
@property unsigned short talkerUniqueID; // @synthesize talkerUniqueID;
@property unsigned long long listenerEntityID; // @synthesize listenerEntityID;
@property unsigned long long talkerEntityID; // @synthesize talkerEntityID;
@property unsigned long long controllerEntityID; // @synthesize controllerEntityID;
@property unsigned long long streamID; // @synthesize streamID;
@property unsigned char status; // @synthesize status;
@property unsigned char messageType; // @synthesize messageType;
- (void)dealloc;
- (id)errorForStatusCode;
@property unsigned long long listenerGUID; // @dynamic listenerGUID;
@property unsigned long long talkerGUID; // @dynamic talkerGUID;
@property unsigned long long controllerGUID; // @dynamic controllerGUID;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPayload:(CDStruct_812a75e2 *)arg1;
- (void)setPayload:(CDStruct_812a75e2 *)arg1;

@end

