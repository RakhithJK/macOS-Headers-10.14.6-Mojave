//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DeviceManagement/CATTaskResultObject.h>

@class NSData;

@interface CRKGenerateIdentityResultObject : CATTaskResultObject
{
    NSData *_certificateData;
    NSData *_privateKeyData;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSData *privateKeyData; // @synthesize privateKeyData=_privateKeyData;
@property(copy, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

