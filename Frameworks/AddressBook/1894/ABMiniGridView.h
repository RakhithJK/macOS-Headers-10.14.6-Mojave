//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface ABMiniGridView : NSView
{
    struct CGSize _cellSize;
    double _horizontalSpacing;
}

@property(nonatomic) double horizontalSpacing; // @synthesize horizontalSpacing=_horizontalSpacing;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
- (void)abLayoutSubviews;

@end

