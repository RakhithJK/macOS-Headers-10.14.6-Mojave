//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LabelSequenceView, Stock;

@interface ChartTitleLabel : UIView
{
    LabelSequenceView *_leftView;
    LabelSequenceView *_rightView;
    double _width;
    Stock *_stock;
    Stock *_deferredStock;
}

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_stockWillBeRemoved:(id)arg1;
- (void)prepareStringsForDeferredStockIfNeeded;
- (void)prepareStringsWithStock:(id)arg1 width:(double)arg2;
- (void)layoutSubviews;
- (void)setLabelsHidden:(BOOL)arg1;
- (id)init;

@end
