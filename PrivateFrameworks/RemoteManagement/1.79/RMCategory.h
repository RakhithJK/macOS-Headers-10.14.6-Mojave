//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <RemoteManagement/RMUniquedManagedObject.h>

@class NSSet, NSString;

@interface RMCategory : RMUniquedManagedObject
{
}

+ (id)createOrReturnCategoryWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSSet *apps; // @dynamic apps;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;

@end

