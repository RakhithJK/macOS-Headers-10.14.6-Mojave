//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Collaboration/CBIdentity.h>

#import <Collaboration/NSCoding-Protocol.h>
#import <Collaboration/NSCopying-Protocol.h>

@interface CBUserIdentity : CBIdentity <NSCoding, NSCopying>
{
}

+ (id)userIdentityWithPosixUID:(unsigned int)arg1 authority:(id)arg2;
- (BOOL)authenticateWithPassword:(id)arg1;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, nonatomic) struct OpaqueSecCertificateRef *certificate;
@property(readonly, nonatomic) unsigned int posixUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initUserWithName:(id)arg1 authority:(id)arg2;

@end

