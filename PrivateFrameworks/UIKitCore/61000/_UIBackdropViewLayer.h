//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class _UIBackdropView;

__attribute__((visibility("hidden")))
@interface _UIBackdropViewLayer : CALayer
{
    _UIBackdropView *_backdropView;
}

@property(nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
- (void)dealloc;
- (void)renderInContext:(struct CGContext *)arg1;

@end

