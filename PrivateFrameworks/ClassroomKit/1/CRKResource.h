//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSURL;

@interface CRKResource : NSObject <NSSecureCoding>
{
    BOOL _zippedBundle;
    NSURL *_hostedURL;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isZippedBundle) BOOL zippedBundle; // @synthesize zippedBundle=_zippedBundle;
@property(retain, nonatomic) NSURL *hostedURL; // @synthesize hostedURL=_hostedURL;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
- (id)description;
- (BOOL)isEqualToHostedResource:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithHostedURL:(id)arg1 isZippedBundle:(BOOL)arg2;
- (id)initWithDictionary:(id)arg1;

@end
