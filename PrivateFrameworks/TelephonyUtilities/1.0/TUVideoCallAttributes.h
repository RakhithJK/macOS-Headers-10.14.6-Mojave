//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@interface TUVideoCallAttributes : NSObject <NSSecureCoding>
{
    long long _remoteCameraOrientation;
    long long _localVideoContextSlotIdentifier;
    long long _remoteVideoContextSlotIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long remoteVideoContextSlotIdentifier; // @synthesize remoteVideoContextSlotIdentifier=_remoteVideoContextSlotIdentifier;
@property(nonatomic) long long localVideoContextSlotIdentifier; // @synthesize localVideoContextSlotIdentifier=_localVideoContextSlotIdentifier;
@property(nonatomic) long long remoteCameraOrientation; // @synthesize remoteCameraOrientation=_remoteCameraOrientation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToVideoCallAttributes:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end

