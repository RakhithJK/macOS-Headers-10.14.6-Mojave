//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface HUQuickControlStepperSegmentView : UIView
{
    BOOL _highlighted;
    NSString *_title;
    unsigned long long _segmentLocation;
    double _cornerRadius;
    UIView *_highlightedOverlayView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *highlightedOverlayView; // @synthesize highlightedOverlayView=_highlightedOverlayView;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) unsigned long long segmentLocation; // @synthesize segmentLocation=_segmentLocation;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_updateCornerMask;
- (void)_createHighlightedOverlayViewIfNecessary;
- (void)_updateTitleFontSize;
- (void)_createTitleLabelIfNecessary;
- (void)traitCollectionDidChange:(id)arg1;

@end

