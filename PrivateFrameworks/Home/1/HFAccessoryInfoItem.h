//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Home/HFItem.h>

@class HMAccessory;

@interface HFAccessoryInfoItem : HFItem
{
    unsigned long long _infoType;
    HMAccessory *_accessory;
}

+ (id)localizedStringForCharacteristic:(id)arg1;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(nonatomic) unsigned long long infoType; // @synthesize infoType=_infoType;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithAccessory:(id)arg1 infoType:(unsigned long long)arg2;
- (id)init;

@end
