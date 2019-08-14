//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface TUCloudCallingDevice : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _defaultPairedDevice;
    BOOL _supportsRestrictingSecondaryCalling;
    NSString *_name;
    NSString *_modelIdentifier;
    NSString *_uniqueID;
    NSString *_phoneNumberURI;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *phoneNumberURI; // @synthesize phoneNumberURI=_phoneNumberURI;
@property(nonatomic) BOOL supportsRestrictingSecondaryCalling; // @synthesize supportsRestrictingSecondaryCalling=_supportsRestrictingSecondaryCalling;
@property(nonatomic, getter=isDefaultPairedDevice) BOOL defaultPairedDevice; // @synthesize defaultPairedDevice=_defaultPairedDevice;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end

