//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMControlDescriptorValue.h>

@class AVB17221AEMLocalizedStringReference, NSNumber;

@interface AVB17221AEMControlDescriptorLinearValue : AVB17221AEMControlDescriptorValue
{
    unsigned short unitType;
    AVB17221AEMLocalizedStringReference *string;
    NSNumber *minValue;
    NSNumber *maxValue;
    NSNumber *step;
    NSNumber *currentValue;
    NSNumber *defaultValue;
}

+ (id)keyPathsForValuesAffectingUnitCode;
+ (id)keyPathsForValuesAffectingUnitMultiplier;
@property(retain) NSNumber *defaultValue; // @synthesize defaultValue;
@property(retain) NSNumber *currentValue; // @synthesize currentValue;
@property(retain) NSNumber *step; // @synthesize step;
@property(retain) NSNumber *maxValue; // @synthesize maxValue;
@property(retain) NSNumber *minValue; // @synthesize minValue;
@property(copy) AVB17221AEMLocalizedStringReference *string; // @synthesize string;
@property unsigned short unitType; // @synthesize unitType;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)valuesDataWithNewNumberValue:(id)arg1 atValueIndex:(unsigned short)arg2;
- (BOOL)validControlValueType:(unsigned short)arg1;
@property unsigned char unitCode; // @dynamic unitCode;
@property unsigned char unitMultiplier; // @dynamic unitMultiplier;
- (id)debugLogStringWithIndentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)currentValueData;
- (void)setCurrentValueData:(id)arg1;
- (unsigned long long)currentValueSize;
- (unsigned long long)valuesSize;
- (unsigned long long)typeSize;
- (char *)setValuesAtPointer:(char *)arg1 maxLength:(unsigned long long)arg2;
- (BOOL)updateWithValueXMLElement:(id)arg1;
- (id)valueXMLElement;
- (id)valueDictionary;
- (BOOL)updateWithValueDictionary:(id)arg1;
- (id)initWithValuePointer:(char **)arg1 valueType:(unsigned short)arg2;
- (id)init;
- (char *)setDoubleValuesAtPointer:(char *)arg1;
- (char *)getDoubleValuesAtPointer:(char *)arg1;
- (char *)setFloatValuesAtPointer:(char *)arg1;
- (char *)getFloatValuesAtPointer:(char *)arg1;
- (char *)setUInt64ValuesAtPointer:(char *)arg1;
- (char *)getUInt64ValuesAtPointer:(char *)arg1;
- (char *)setInt64ValuesAtPointer:(char *)arg1;
- (char *)getInt64ValuesAtPointer:(char *)arg1;
- (char *)setUint32ValuesAtPointer:(char *)arg1;
- (char *)getUInt32ValuesAtPointer:(char *)arg1;
- (char *)setInt32ValuesAtPointer:(char *)arg1;
- (char *)getInt32ValuesAtPointer:(char *)arg1;
- (char *)setUInt16ValuesAtPointer:(char *)arg1;
- (char *)getUInt16ValuesAtPointer:(char *)arg1;
- (char *)setInt16ValuesAtPointer:(char *)arg1;
- (char *)getInt16ValuesAtPointer:(char *)arg1;
- (char *)setUInt8ValuesAtPointer:(char *)arg1;
- (char *)getUInt8ValuesAtPointer:(char *)arg1;
- (char *)setInt8ValuesAtPointer:(char *)arg1;
- (char *)getInt8ValuesAtPointer:(char *)arg1;

@end

