//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookCore/NSObject-Protocol.h>

@class ABMultiDictionary, ABMutableMultiValue, NSMutableArray;

@protocol ABCNMultiValueUpdate <NSObject>
- (void)applyToABMutableMultiValue:(ABMutableMultiValue *)arg1 transform:(id (^)(id))arg2;
- (void)applyToMutableMultiValue:(NSMutableArray *)arg1 withIdentifierMap:(ABMultiDictionary *)arg2;
@end

