//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFCharacteristicValueDisplayMetadata, NSDictionary;

@interface HFMediaAccessoryItemUpdateResponse : NSObject
{
    HFCharacteristicValueDisplayMetadata *_displayMetadata;
    NSDictionary *_standardResults;
}

@property(readonly, nonatomic) NSDictionary *standardResults; // @synthesize standardResults=_standardResults;
@property(readonly, nonatomic) HFCharacteristicValueDisplayMetadata *displayMetadata; // @synthesize displayMetadata=_displayMetadata;
- (void).cxx_destruct;
- (id)initWithDisplayMetadata:(id)arg1 standardResults:(id)arg2;

@end

