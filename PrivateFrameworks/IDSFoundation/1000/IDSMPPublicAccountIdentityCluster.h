//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDSFoundation/IDSMPIdentity.h>

@class IDSMPPublicAccountIdentity;

@interface IDSMPPublicAccountIdentityCluster : IDSMPIdentity
{
}

- (BOOL)isParentOfCluster:(id)arg1;
- (id)dataRepresentationWithError:(id *)arg1;
@property(readonly, nonatomic) IDSMPPublicAccountIdentity *publicAccountIdentity;

@end

