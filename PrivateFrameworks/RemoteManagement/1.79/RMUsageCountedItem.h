//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString, RMUsageBlock;

@interface RMUsageCountedItem : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) RMUsageBlock *block; // @dynamic block;
@property(retain, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(nonatomic) long long numberOfNotifications; // @dynamic numberOfNotifications;
@property(nonatomic) long long numberOfPickups; // @dynamic numberOfPickups;
@end

