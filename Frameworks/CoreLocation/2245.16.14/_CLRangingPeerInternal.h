//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>

@class NSData;

@interface _CLRangingPeerInternal : NSObject <NSCopying>
{
    unsigned long long _macAddress;
    NSData *_secureRangingKeyID;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithMacAddressAsUInt:(unsigned long long)arg1 secureRangingKeyID:(id)arg2;

@end

