//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSString;

@interface HMDHAPMetadataAssistantCharacteristic : HMFObject
{
    BOOL _supportsLocalization;
    NSString *_name;
    NSString *_readHAPCharacteristicName;
    NSString *_writeHAPCharacteristicName;
    NSString *_format;
    NSDictionary *_values;
    NSDictionary *_outValues;
}

@property(retain, nonatomic) NSDictionary *outValues; // @synthesize outValues=_outValues;
@property(retain, nonatomic) NSDictionary *values; // @synthesize values=_values;
@property(nonatomic) BOOL supportsLocalization; // @synthesize supportsLocalization=_supportsLocalization;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *writeHAPCharacteristicName; // @synthesize writeHAPCharacteristicName=_writeHAPCharacteristicName;
@property(retain, nonatomic) NSString *readHAPCharacteristicName; // @synthesize readHAPCharacteristicName=_readHAPCharacteristicName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 readHAPCharacteristic:(id)arg2 writeHAPCharacteristic:(id)arg3 format:(id)arg4;
- (id)init;

@end

