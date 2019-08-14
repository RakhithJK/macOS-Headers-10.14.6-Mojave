//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDUser, NSDate;

@interface HMDRemovedUser : HMFObject <NSSecureCoding>
{
    HMDUser *_user;
    NSDate *_expirationDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)removedUserWithUser:(id)arg1;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToUser:(id)arg1;
- (BOOL)isEqualToUserID:(id)arg1;
- (BOOL)isExpired;
- (id)description;
- (id)initWithUser:(id)arg1 expiration:(id)arg2;

@end

