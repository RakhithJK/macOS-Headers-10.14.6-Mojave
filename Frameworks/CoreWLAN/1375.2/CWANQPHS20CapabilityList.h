//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreWLAN/CWANQPElement.h>

#import <CoreWLAN/NSCopying-Protocol.h>
#import <CoreWLAN/NSSecureCoding-Protocol.h>

@interface CWANQPHS20CapabilityList : CWANQPElement <NSSecureCoding, NSCopying>
{
    BOOL _supportsHSQueryList;
    BOOL _supportsHSCapabilityList;
    BOOL _supportsOperatorFriendlyName;
    BOOL _supportsWANMetrics;
    BOOL _supportsConnectionCapability;
    BOOL _supportsNAIHomeRealmQuery;
    BOOL _supportsOperatingClassIndication;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL supportsOperatingClassIndication; // @synthesize supportsOperatingClassIndication=_supportsOperatingClassIndication;
@property(nonatomic) BOOL supportsNAIHomeRealmQuery; // @synthesize supportsNAIHomeRealmQuery=_supportsNAIHomeRealmQuery;
@property(nonatomic) BOOL supportsConnectionCapability; // @synthesize supportsConnectionCapability=_supportsConnectionCapability;
@property(nonatomic) BOOL supportsWANMetrics; // @synthesize supportsWANMetrics=_supportsWANMetrics;
@property(nonatomic) BOOL supportsOperatorFriendlyName; // @synthesize supportsOperatorFriendlyName=_supportsOperatorFriendlyName;
@property(nonatomic) BOOL supportsHSCapabilityList; // @synthesize supportsHSCapabilityList=_supportsHSCapabilityList;
@property(nonatomic) BOOL supportsHSQueryList; // @synthesize supportsHSQueryList=_supportsHSQueryList;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithNetwork:(id)arg1 timestamp:(id)arg2 anqpResult:(id)arg3;

@end

