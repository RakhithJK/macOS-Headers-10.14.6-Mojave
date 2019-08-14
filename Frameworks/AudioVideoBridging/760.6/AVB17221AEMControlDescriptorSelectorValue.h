//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMControlDescriptorValue.h>

@class NSArray, NSNumber;

@interface AVB17221AEMControlDescriptorSelectorValue : AVB17221AEMControlDescriptorValue
{
    unsigned short unitType;
    NSArray *options;
    NSNumber *currentValue;
    NSNumber *defaultValue;
}

+ (id)keyPathsForValuesAffectingUnitCode;
+ (id)keyPathsForValuesAffectingUnitMultiplier;
@property(retain) NSNumber *defaultValue; // @synthesize defaultValue;
@property(retain) NSNumber *currentValue; // @synthesize currentValue;
@property(copy) NSArray *options; // @synthesize options;
@property unsigned short unitType; // @synthesize unitType;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)valuesDataWithNewNumberValue:(id)arg1 atValueIndex:(unsigned short)arg2;
- (BOOL)validControlValueType:(unsigned short)arg1;
- (id)objectsForSetCommandValuesData:(id)arg1;
@property unsigned char unitCode; // @dynamic unitCode;
@property unsigned char unitMultiplier; // @dynamic unitMultiplier;
- (id)debugLogStringWithIndentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)updateWithValueXMLElement:(id)arg1;
- (id)valueXMLElement;
- (id)valueDictionary;
- (BOOL)updateWithValueDictionary:(id)arg1;
- (char *)setValuesAtPointer:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)currentValueData;
- (void)setCurrentValueData:(id)arg1;
- (unsigned long long)currentValueSize;
- (unsigned short)numberOfValues;
- (unsigned long long)valuesSize;
- (unsigned long long)typeSize;
- (id)initWithValuePointer:(char **)arg1 numberOfValues:(unsigned short)arg2 valueType:(unsigned short)arg3;
- (char *)setDoubleValuesAtPointer:(char *)arg1;
- (char *)getDoubleValuesAtPointer:(char *)arg1 numberOfValues:(unsigned short)arg2;
- (char *)setFloatValuesAtPointer:(char *)arg1;
- (char *)getFloatValuesAtPointer:(char *)arg1 numberOfValues:(unsigned short)arg2;
- (char *)setUInt64ValuesAtPointer:(char *)arg1;
- (char *)getUInt64ValuesAtPointer:(char *)arg1 numberOfValues:(unsigned short)arg2;
- (char *)setInt64ValuesAtPointer:(char *)arg1;
- (char *)getInt64ValuesAtPointer:(char *)arg1 numberOfValues:(unsigned short)arg2;
- (char *)setUInt32ValuesAtPointer:(char *)arg1;
- (char *)getUInt32ValuesAtPointer:(char *)arg1 numberOfValues:(unsigned short)arg2;
- (char *)setInt32ValuesAtPointer:(char *)arg1;
- (char *)getInt32ValuesAtPointer:(char *)arg1 numberOfValues:(unsigned short)arg2;
- (char *)setUInt16ValuesAtPointer:(char *)arg1;
- (char *)getUInt16ValuesAtPointer:(char *)arg1 numberOfValues:(unsigned short)arg2;
- (char *)setInt16ValuesAtPointer:(char *)arg1;
- (char *)getInt16ValuesAtPointer:(char *)arg1 numberOfValues:(unsigned short)arg2;
- (char *)setUInt8ValuesAtPointer:(char *)arg1;
- (char *)getUInt8ValuesAtPointer:(char *)arg1 numberOfValues:(unsigned short)arg2;
- (char *)setInt8ValuesAtPointer:(char *)arg1;
- (char *)getInt8ValuesAtPointer:(char *)arg1 numberOFValues:(unsigned short)arg2;

@end

