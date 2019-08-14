//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

@class NUColorSpace, NUPixelFormat;
@protocol NUExtentPolicy, NUMutableImage, NURegionPolicy, NUScalePolicy;

@interface NUImageRenderRequest : NURenderRequest
{
    NUColorSpace *_colorSpace;
    id <NURegionPolicy> _regionPolicy;
    id <NUScalePolicy> _scalePolicy;
    id <NUExtentPolicy> _extentPolicy;
    NUPixelFormat *_pixelFormat;
    id <NUMutableImage> _targetImage;
    CDStruct_d58201db _tileSize;
    CDStruct_1b6d18a9 _time;
}

@property(retain) id <NUMutableImage> targetImage; // @synthesize targetImage=_targetImage;
@property CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property CDStruct_912cb5d2 tileSize; // @synthesize tileSize=_tileSize;
@property(retain) NUPixelFormat *pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(retain) id <NUExtentPolicy> extentPolicy; // @synthesize extentPolicy=_extentPolicy;
@property(retain) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
@property(retain) id <NURegionPolicy> regionPolicy; // @synthesize regionPolicy=_regionPolicy;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void).cxx_destruct;
- (long long)mediaComponentType;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;

@end

