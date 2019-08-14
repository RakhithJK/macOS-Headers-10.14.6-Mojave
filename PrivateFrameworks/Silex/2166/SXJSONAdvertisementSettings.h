//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXJSONObject.h>

#import <Silex/SXAdvertisingSettings-Protocol.h>

@class NSString;
@protocol SXAutoPlacementLayout;

@interface SXJSONAdvertisementSettings : SXJSONObject <SXAdvertisingSettings>
{
}

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;
- (unsigned long long)bannerTypeWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) unsigned long long bannerType; // @dynamic bannerType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct _SXConvertibleValue distanceFromMedia; // @dynamic distanceFromMedia;
@property(readonly, nonatomic) unsigned long long frequency; // @dynamic frequency;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <SXAutoPlacementLayout> layout; // @dynamic layout;
@property(readonly) Class superclass;

@end

