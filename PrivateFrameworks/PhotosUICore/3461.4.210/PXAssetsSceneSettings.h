//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXAssetsSceneSettings : PXSettings
{
    BOOL _enableImagePreheating;
    BOOL _animateContentByDefault;
    double _transitionDuration;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL animateContentByDefault; // @synthesize animateContentByDefault=_animateContentByDefault;
@property(nonatomic) BOOL enableImagePreheating; // @synthesize enableImagePreheating=_enableImagePreheating;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
- (void)setDefaultValues;
- (id)parentSettings;

@end
