//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFIconDescriptor-Protocol.h>

@class NSString;

@interface HFTemperatureIconDescriptor : NSObject <HFIconDescriptor>
{
    NSString *_formattedTemperature;
    long long _heatingCoolingMode;
    long long _targetHeatingCoolingMode;
}

@property(readonly, nonatomic) long long targetHeatingCoolingMode; // @synthesize targetHeatingCoolingMode=_targetHeatingCoolingMode;
@property(readonly, nonatomic) long long heatingCoolingMode; // @synthesize heatingCoolingMode=_heatingCoolingMode;
@property(readonly, nonatomic) NSString *formattedTemperature; // @synthesize formattedTemperature=_formattedTemperature;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithFormattedTemperature:(id)arg1 heatingCoolingMode:(long long)arg2 targetHeatingCoolingMode:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

