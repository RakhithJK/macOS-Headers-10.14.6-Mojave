//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UICircleProgressLayer : CALayer
{
    double _progressLineWidth;
    double _oneFullRotation;
    BOOL _showProgressTray;
    long long _progressStartPoint;
    UIColor *_progressColor;
    UIColor *_progressBackgroundColor;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
@property(nonatomic) BOOL showProgressTray; // @synthesize showProgressTray=_showProgressTray;
@property(nonatomic) double progressLineWidth; // @synthesize progressLineWidth=_progressLineWidth;
@property(retain, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(nonatomic) long long progressStartPoint; // @synthesize progressStartPoint=_progressStartPoint;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) double progress; // @dynamic progress;

@end

