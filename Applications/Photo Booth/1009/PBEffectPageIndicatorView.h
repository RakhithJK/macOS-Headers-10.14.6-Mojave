//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, _PBEffectPageButton;

@interface PBEffectPageIndicatorView : NSView
{
    id _delegate;
    long long _count;
    long long _current;
    NSView *_pageIndicatorContainer;
    _PBEffectPageButton *_leftArrowButton;
    _PBEffectPageButton *_rightArrowButton;
    NSColor *_primaryButtonColor;
    NSColor *_alternateButtonColor;
}

- (void).cxx_destruct;
- (void)updateArrowButtonsState;
- (void)goNextPage:(id)arg1;
- (void)goPreviousPage:(id)arg1;
- (void)goPreviousNextPage:(BOOL)arg1;
- (void)pageClicked:(id)arg1;
- (void)setCurrentPage:(long long)arg1;
- (void)setPageCount:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setCurrentPage:(long long)arg1;
- (id)_attributedStringValue;
- (void)_generatePageIndicators;
- (void)_generateArrows;
- (id)_imageForEffectPageAtState:(long long)arg1 forSize:(struct CGSize)arg2;
- (id)_imageForEffectArrowAtState:(long long)arg1 pointLeft:(BOOL)arg2;

@end

