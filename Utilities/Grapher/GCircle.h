//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GCursor.h"

@interface GCircle : GCursor
{
    double mCartesianCenter[3];
    double mRadius;
}

+ (id)circleWithView:(id)arg1 cartesianCenter:(double *)arg2 radius:(double)arg3;
+ (BOOL)instancesCanBeDrawnInView:(id)arg1;
- (void)stroke;
- (void)drawSelf;
- (id)initWithView:(id)arg1 cartesianCenter:(double *)arg2 radius:(double)arg3;

@end

