//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSBox.h>

@class NSGradient, NSString;

@interface XSGradientView : NSBox
{
    NSGradient *_fillGradient;
    double _angle;
}

@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(retain, nonatomic) NSGradient *fillGradient; // @synthesize fillGradient=_fillGradient;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(copy) NSString *fillGradientString;

@end

