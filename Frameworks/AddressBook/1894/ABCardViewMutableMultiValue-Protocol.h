//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABCardViewMultiValue-Protocol.h>

@class NSString;

@protocol ABCardViewMutableMultiValue <ABCardViewMultiValue>
- (void)setSuggestedValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setIsPrivateValue:(BOOL)arg1 index:(unsigned long long)arg2;
- (void)setReadOnly:(BOOL)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceAccountNameAtIndex:(unsigned long long)arg1 withAccountName:(NSString *)arg2;
- (void)replaceLabelAtIndex:(unsigned long long)arg1 withLabel:(id)arg2;
- (void)removeEntryAtIndex:(unsigned long long)arg1;
- (void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(id)arg2;
- (NSString *)addValue:(id)arg1 withLabel:(NSString *)arg2;
- (NSString *)addEmptyValueWithLabel:(NSString *)arg1;
- (NSString *)addEmptyValueAndLabel;
@end

