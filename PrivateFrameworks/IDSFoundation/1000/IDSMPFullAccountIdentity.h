//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDSFoundation/IDSMPIdentity.h>

@class NSData;

@interface IDSMPFullAccountIdentity : IDSMPIdentity
{
}

+ (id)fullAccountIdentityWithError:(id *)arg1;
+ (id)identityWithData:(id)arg1 error:(id *)arg2;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)signData:(id)arg1 withError:(id *)arg2;
- (id)rolledAccountIdenityWithError:(id *)arg1;
- (id)publicAccountIdentityWithError:(id *)arg1;
@property(readonly, nonatomic) NSData *publicName;

@end

