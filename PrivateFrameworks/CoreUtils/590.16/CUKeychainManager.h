//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUKeychainManager : NSObject
{
}

- (BOOL)updateItem:(id)arg1 matchingItem:(id)arg2 error:(id *)arg3;
- (BOOL)removeItemMatchingItem:(id)arg1 error:(id *)arg2;
- (BOOL)addOrUpdateOrReAddItem:(id)arg1 logCategory:(struct LogCategory *)arg2 logLabel:(id)arg3 error:(id *)arg4;
- (id)addItem:(id)arg1 returnFlags:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)addItem:(id)arg1 error:(id *)arg2;
- (id)_copyItemsMatchingItemSeparate:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)_copyItemsMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)copyItemsMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;
- (id)copyItemMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;

@end

