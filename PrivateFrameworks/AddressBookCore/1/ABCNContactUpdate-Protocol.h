//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookCore/NSObject-Protocol.h>

@class ABCDContact, ABCNMutableContact, ABCNPropertyDescription, ABMultiDictionary, ABPerson;

@protocol ABCNContactUpdate <NSObject>
- (ABCNPropertyDescription *)property;
- (void)applyToABCDContact:(ABCDContact *)arg1;
- (void)applyToABPerson:(ABPerson *)arg1;
- (void)applyToMutableContact:(ABCNMutableContact *)arg1 withIdentifierMap:(ABMultiDictionary *)arg2;
@end

