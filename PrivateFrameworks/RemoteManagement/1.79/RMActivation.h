//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <RemoteManagement/RMUniquedManagedObject.h>

@class NSData, NSSet, NSString, RMOrganization;

@interface RMActivation : RMUniquedManagedObject
{
}

+ (id)fetchRequestForActivationsWithIdentifier:(id)arg1 organizationIdentifier:(id)arg2;
+ (id)fetchRequestForActivationsAppliedToUserDSID:(id)arg1 organizationIdentifier:(id)arg2;
+ (id)fetchRequestForActivationsBelongingToOrganizationWithIdentifier:(id)arg1;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;
@property(retain, nonatomic) RMOrganization *organization; // @dynamic organization;

// Remaining properties
@property(copy, nonatomic) NSData *activationPlist; // @dynamic activationPlist;
@property(retain, nonatomic) NSSet *appliedToUsers; // @dynamic appliedToUsers;
@property(retain, nonatomic) NSSet *configurations; // @dynamic configurations;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *organizationIdentifier; // @dynamic organizationIdentifier;

@end

