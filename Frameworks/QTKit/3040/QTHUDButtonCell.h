//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@interface QTHUDButtonCell : NSButtonCell
{
    struct QTHUDButtonCellInternal *_QTHUDButtonCellInternal;
}

+ (void)initialize;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (BOOL)prefersAlternate;
- (id)attributedAlternateTitle;
- (id)attributedTitle;
- (id)_QTUIGlyphColor;
- (id)_QTUIDrawingOptionsForBorderWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_QTUIButtonVariantForBorderWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (unsigned long long)_backgroundTintForBorderWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_QTUIState;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;

@end

