//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesUI/ICCircleLayer.h>

@interface ICArcLayer : ICCircleLayer
{
    BOOL _drawClockwise;
    double _startAngle;
    double _endAngle;
}

@property(nonatomic) BOOL drawClockwise; // @synthesize drawClockwise=_drawClockwise;
@property(nonatomic) double endAngle; // @synthesize endAngle=_endAngle;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
- (void)drawInContext:(struct CGContext *)arg1;

@end

