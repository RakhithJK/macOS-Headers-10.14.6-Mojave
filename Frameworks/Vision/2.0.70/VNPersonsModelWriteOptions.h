//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>

@interface VNPersonsModelWriteOptions : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _readOnly;
    unsigned long long _version;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

