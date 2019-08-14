//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationLegacySupport-Protocol.h>
#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSString;

@interface NEIPv4Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    NSString *_destinationAddress;
    NSString *_destinationSubnetMask;
    NSString *_gatewayAddress;
}

+ (BOOL)supportsSecureCoding;
+ (id)defaultRoute;
+ (void)initGlobals;
@property(copy) NSString *gatewayAddress; // @synthesize gatewayAddress=_gatewayAddress;
@property(readonly) NSString *destinationSubnetMask; // @synthesize destinationSubnetMask=_destinationSubnetMask;
@property(readonly) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDefaultRoute;
- (id)initWithDestinationAddress:(id)arg1 subnetMask:(id)arg2;

@end

