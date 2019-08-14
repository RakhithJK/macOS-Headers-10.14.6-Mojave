//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFControlItem.h>

@class NSArray;

@interface HFTVInputControlItem : HFControlItem
{
    NSArray *_inputs;
}

+ (CDUnknownBlockType)_inputSourceValueComparatorForTelevisionProfile:(id)arg1;
+ (Class)valueClass;
+ (id)readOnlyOptionalInputCharacteristicTypes;
+ (id)inputCharacteristicTypes;
@property(readonly, copy, nonatomic) NSArray *inputs; // @synthesize inputs=_inputs;
- (void).cxx_destruct;
- (id)writeValue:(id)arg1;
- (id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)readValueAndPopulateStandardResults;
- (BOOL)supportsItemRepresentingServices:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;

@end
