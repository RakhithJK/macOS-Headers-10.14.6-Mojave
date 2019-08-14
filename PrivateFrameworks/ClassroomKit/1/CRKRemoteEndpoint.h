//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSCopying-Protocol.h>

@class NSString;

@interface CRKRemoteEndpoint : NSObject <NSCopying>
{
    unsigned short _port;
    NSString *_IPAddress;
}

@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
@property(readonly, copy, nonatomic) NSString *IPAddress; // @synthesize IPAddress=_IPAddress;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqualToRemoteEndpoint:(id)arg1;
- (BOOL)isOnSameHostButDifferentPortAsRemoteEndpoint:(id)arg1;
- (BOOL)isOnSameHostAsRemoteEndpoint:(id)arg1;
@property(readonly, copy, nonatomic) NSString *stringValue;
- (id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2;
- (id)init;

@end

