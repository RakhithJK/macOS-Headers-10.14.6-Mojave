//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNImageBasedRequestConfiguration.h>

__attribute__((visibility("hidden")))
@interface VNCreateSceneprintRequestConfiguration : VNImageBasedRequestConfiguration
{
    BOOL _returnAllResults;
    BOOL _useCenterTileOnly;
    unsigned long long _imageCropAndScaleOption;
}

@property(nonatomic) unsigned long long imageCropAndScaleOption; // @synthesize imageCropAndScaleOption=_imageCropAndScaleOption;
@property(nonatomic) BOOL useCenterTileOnly; // @synthesize useCenterTileOnly=_useCenterTileOnly;
@property(nonatomic) BOOL returnAllResults; // @synthesize returnAllResults=_returnAllResults;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestClass:(Class)arg1;

@end

