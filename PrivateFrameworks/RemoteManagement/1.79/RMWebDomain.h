//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString, RMCategory;

@interface RMWebDomain : NSManagedObject
{
}

+ (id)createOrReturnWebDomainWithDomainName:(id)arg1 inContext:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(retain, nonatomic) RMCategory *category; // @dynamic category;
@property(copy, nonatomic) NSString *domainName; // @dynamic domainName;

@end

