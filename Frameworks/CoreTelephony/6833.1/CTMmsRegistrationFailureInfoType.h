//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTMmsRegistrationFailureInfoType : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _dataActive;
    BOOL _isDataAttached;
    BOOL _activationForMms;
    NSNumber *_pdpContextId;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL activationForMms; // @synthesize activationForMms=_activationForMms;
@property(nonatomic) BOOL isDataAttached; // @synthesize isDataAttached=_isDataAttached;
@property(nonatomic) BOOL dataActive; // @synthesize dataActive=_dataActive;
@property(retain, nonatomic) NSNumber *pdpContextId; // @synthesize pdpContextId=_pdpContextId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCTMmsRegistrationFailureInfoType:(id)arg1;
- (id)init;

@end

