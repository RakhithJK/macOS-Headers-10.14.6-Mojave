//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedObject.h>

@class CalManagedExchangeError, CalManagedExchangePrincipal, NSData, NSString;

@interface CalManagedPersistentOperation : CalManagedObject
{
}

+ (id)insertOperationWithData:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
- (long long)_nextSequenceNumber;

// Remaining properties
@property(retain) NSData *data; // @dynamic data;
@property(retain) CalManagedExchangeError *error; // @dynamic error;
@property(retain) CalManagedExchangePrincipal *principal; // @dynamic principal;
@property long long sequenceNumber; // @dynamic sequenceNumber;
@property(retain) NSString *sessionID; // @dynamic sessionID;

@end

