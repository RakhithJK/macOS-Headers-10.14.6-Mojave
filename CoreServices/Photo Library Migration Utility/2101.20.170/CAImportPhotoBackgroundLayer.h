//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CAImportPhotoBackgroundLayer : CALayer
{
    double _divider;
    long long _scrolled;
}

@property(nonatomic) long long scrolled; // @synthesize scrolled=_scrolled;
@property(nonatomic) double divider; // @synthesize divider=_divider;
- (void)_drawImportedBackgroundInRect:(struct CGRect)arg1 visibleRect:(struct CGRect)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;

@end

