//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSCKExportOperation, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface NSCKExportedObject : NSManagedObject
{
}

@property(nonatomic) long long changeType;
@property(nonatomic) unsigned long long type;

// Remaining properties
@property(retain, nonatomic) NSNumber *changeTypeNum; // @dynamic changeTypeNum;
@property(retain, nonatomic) NSString *ckRecordName; // @dynamic ckRecordName;
@property(retain, nonatomic) NSCKExportOperation *operation; // @dynamic operation;
@property(retain, nonatomic) NSNumber *typeNum; // @dynamic typeNum;
@property(retain, nonatomic) NSString *zoneName; // @dynamic zoneName;

@end

