//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMDUser.h>

@class HMDResidentUser;

__attribute__((visibility("hidden")))
@interface __HMDLegacyResidentUser : HMDUser
{
    HMDResidentUser *_residentUser;
}

+ (BOOL)supportsSecureCoding;
+ (void)initialize;
@property(readonly, nonatomic) HMDResidentUser *residentUser; // @synthesize residentUser=_residentUser;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isRemoteGateway;
- (id)initWithResidentUser:(id)arg1;

@end

