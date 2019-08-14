//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class HFRGBColor, HFTemperatureColor, NSString;
@protocol HFColorPrimitive;

@interface HFColorCollection : NSObject <NAIdentifiable>
{
    HFRGBColor *_RGBColor;
    HFTemperatureColor *_temperatureColor;
}

+ (id)na_identity;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)colorByAdjustingForProfile:(id)arg1;
- (id)initWithPrimitiveColors:(id)arg1;
- (id)initWithPrimitiveColor:(id)arg1;
@property(readonly, copy, nonatomic) id <HFColorPrimitive> preferredColorPrimitive;
- (id)colorPrimitives;
@property(readonly, copy, nonatomic) HFTemperatureColor *temperatureColor; // @synthesize temperatureColor=_temperatureColor;
@property(readonly, copy, nonatomic) HFRGBColor *RGBColor; // @synthesize RGBColor=_RGBColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

