//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <RemoteManagement/RMCoreOrganizationSettings.h>

@class NSData, NSString, RMFamilyOrganization, RMVersionVector;

@interface RMFamilyOrganizationSettings : RMCoreOrganizationSettings
{
    RMVersionVector *_cachedVersionVector;
}

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
@property(copy, nonatomic) NSString *passcode; // @dynamic passcode;
@property(nonatomic) BOOL isManaged; // @dynamic isManaged;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSData *unmodeled_versionVector;
@property(copy, nonatomic) RMVersionVector *versionVector; // @dynamic versionVector;
- (void)awakeFromInsert;

// Remaining properties
@property(nonatomic) BOOL isDirty; // @dynamic isDirty;
@property(retain, nonatomic) RMFamilyOrganization *organization; // @dynamic organization;
@property(nonatomic) BOOL shareWebUsage; // @dynamic shareWebUsage;

@end

