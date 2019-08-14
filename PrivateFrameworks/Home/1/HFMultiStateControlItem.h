//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFControlItem.h>

@class HFMultiStateValueSet, NSString;

@interface HFMultiStateControlItem : HFControlItem
{
    NSString *_multiStateCharacteristicType;
    HFMultiStateValueSet *_possibleValueSet;
}

+ (id)na_identity;
+ (Class)valueClass;
@property(readonly, copy, nonatomic) HFMultiStateValueSet *possibleValueSet; // @synthesize possibleValueSet=_possibleValueSet;
@property(readonly, copy, nonatomic) NSString *multiStateCharacteristicType; // @synthesize multiStateCharacteristicType=_multiStateCharacteristicType;
- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 multiStateCharacteristicType:(id)arg2 allCharacteristicOptions:(id)arg3 possibleValueSet:(id)arg4 displayResults:(id)arg5;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 possibleValueSet:(id)arg3 displayResults:(id)arg4;

@end

