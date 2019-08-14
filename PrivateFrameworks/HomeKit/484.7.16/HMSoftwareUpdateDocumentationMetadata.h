//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMFDigest, NSURL;

@interface HMSoftwareUpdateDocumentationMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSURL *_URL;
    HMFDigest *_digest;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy) HMFDigest *digest; // @synthesize digest=_digest;
@property(readonly, copy) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 digest:(id)arg2;
- (id)init;

@end

