//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIVelocityIntegratorDataSample : NSObject
{
    double _timestamp;
    struct CGVector _translation;
    struct CGPoint _point;
}

@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) struct CGVector translation; // @synthesize translation=_translation;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)updateTimeToNow;
- (BOOL)isSampleDistinctEnoughFromTouchLocation:(struct CGPoint)arg1 minimumRequiredMovement:(double)arg2;
- (id)description;

@end

