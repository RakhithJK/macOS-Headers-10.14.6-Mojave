//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GView.h"

@interface GView2D : GView
{
    double mMargin[4];
}

- (id)internalName;
- (id)viewPboardType;
- (void)takeLayoutFrom:(id)arg1;
- (void)addLayoutTo:(id)arg1;
- (BOOL)unprojectPoint:(struct CGPoint)arg1 to:(double *)arg2;
- (struct CGPoint)project:(double *)arg1;
- (void)updateAxisLog;
- (void)updateAxisRanges;
- (struct CGRect)boundsForFrame:(struct CGRect)arg1;
- (id)angularAxis;
- (id)radialAxis;
- (id)ordinateAxis;
- (id)abscissaAxis;
- (void)setMargin:(unsigned long long)arg1 to:(double)arg2;
- (double)margin:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

