//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXView.h>

@interface PXSmartScaleView : UXView
{
    struct CGSize _displaySize;
}

@property struct CGSize displaySize; // @synthesize displaySize=_displaySize;
- (void)viewDidEndLiveResize;
- (void)viewDidChangeBackingProperties;
@property(readonly) double displayScale;
- (void)viewScaleDidChange;

@end
