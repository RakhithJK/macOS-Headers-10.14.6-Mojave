//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMControlDescriptorValue.h>

@interface AVB17221AEMControlDescriptorSMPTETimeValue : AVB17221AEMControlDescriptorValue
{
    unsigned char minutes;
    unsigned char seconds;
    unsigned char frames;
    unsigned char framesPerSecond;
    BOOL dropFrame;
    BOOL pull;
    unsigned short hours;
    unsigned short subframes;
}

@property BOOL pull; // @synthesize pull;
@property BOOL dropFrame; // @synthesize dropFrame;
@property unsigned char framesPerSecond; // @synthesize framesPerSecond;
@property unsigned short subframes; // @synthesize subframes;
@property unsigned char frames; // @synthesize frames;
@property unsigned char seconds; // @synthesize seconds;
@property unsigned char minutes; // @synthesize minutes;
@property unsigned short hours; // @synthesize hours;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)validControlValueType:(unsigned short)arg1;
- (id)objectsForSetCommandValuesData:(id)arg1;
- (id)debugLogStringWithIndentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)currentValueData;
- (void)setCurrentValueData:(id)arg1;
- (unsigned long long)currentValueSize;
- (unsigned short)numberOfValues;
- (unsigned long long)valuesSize;
- (char *)setValuesAtPointer:(char *)arg1 maxLength:(unsigned long long)arg2;
- (BOOL)updateWithValueXMLElement:(id)arg1;
- (id)valueXMLElement;
- (id)valueDictionary;
- (BOOL)updateWithValueDictionary:(id)arg1;
- (id)initWithValuePointer:(char **)arg1 valueType:(unsigned short)arg2;

@end

