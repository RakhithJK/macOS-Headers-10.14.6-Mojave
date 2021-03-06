//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFControlItem.h>

@class HFMediaProfileContainerSettingsValueManager;
@protocol HFMediaProfileContainer;

@interface HFHomePodAlarmControlItem : HFControlItem
{
    id <HFMediaProfileContainer> _mediaProfileContainer;
}

+ (Class)valueClass;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (void).cxx_destruct;
- (id)normalizedValueForValue:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)readValueAndPopulateStandardResults;
@property(readonly, nonatomic) HFMediaProfileContainerSettingsValueManager *valueManager;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithMediaProfileContainer:(id)arg1 displayResults:(id)arg2;

@end

