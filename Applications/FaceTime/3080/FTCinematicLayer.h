//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface FTCinematicLayer : CALayer
{
    BOOL _previousMasksToBounds;
    BOOL _overrideMasksToBounds;
}

+ (void)endCinematicModeForAllLayers;
+ (void)beginCinematicModeForAllLayers;
@property(nonatomic) BOOL overrideMasksToBounds; // @synthesize overrideMasksToBounds=_overrideMasksToBounds;
@property(nonatomic) BOOL previousMasksToBounds; // @synthesize previousMasksToBounds=_previousMasksToBounds;
- (void)_disabled:(id)arg1;
- (void)_enabled:(id)arg1;
- (BOOL)masksToBounds;
- (void)setMasksToBounds:(BOOL)arg1;
- (id)init;

@end

