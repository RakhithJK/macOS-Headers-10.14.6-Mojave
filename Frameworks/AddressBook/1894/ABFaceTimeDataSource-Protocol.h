//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class NSSet;
@protocol ABCardViewMultiValue;

@protocol ABFaceTimeDataSource <NSObject>
- (id <ABCardViewMultiValue>)emailAddresses;
- (id <ABCardViewMultiValue>)phoneNumbers;
- (BOOL)isDirectoryResult;
- (BOOL)isTransient;
- (NSSet *)uniqueIdentifiers;
@end

