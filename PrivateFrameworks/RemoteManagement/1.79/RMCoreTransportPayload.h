//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSData, NSString, RMCoreOrganization;

@interface RMCoreTransportPayload : NSManagedObject
{
}

+ (id)fetchTransportPayloadContext:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;
+ (id)fetchLastTransportPayloadInContext:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
+ (id)fetchRequestForPayloadsOfType:(id)arg1;
@property(copy, nonatomic) NSArray *destinations; // @dynamic destinations;
- (id)description;

// Remaining properties
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSData *payloadData; // @dynamic payloadData;
@property(retain, nonatomic) RMCoreOrganization *sourceOrganizationEnqueued; // @dynamic sourceOrganizationEnqueued;
@property(retain, nonatomic) RMCoreOrganization *sourceOrganizationPending; // @dynamic sourceOrganizationPending;
@property(retain, nonatomic) RMCoreOrganization *sourceOrganizationRecent; // @dynamic sourceOrganizationRecent;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end

