//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridCameraCellLayoutOptions : HUGridCellLayoutOptions
{
    double _headerViewHeight;
    double _cameraViewAspectRatio;
    double _headerHorizontalInnerMargins;
}

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;
@property(nonatomic) double headerHorizontalInnerMargins; // @synthesize headerHorizontalInnerMargins=_headerHorizontalInnerMargins;
@property(nonatomic) double cameraViewAspectRatio; // @synthesize cameraViewAspectRatio=_cameraViewAspectRatio;
@property(nonatomic) double headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

