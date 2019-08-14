//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIScrollAccessory-Protocol.h>

@class NSArray, NSInvocation, UIButton, UIScrollView;

@interface _UIStaticScrollBar : UIView <UIScrollAccessory>
{
    UIButton *_upButton;
    UIButton *_downButton;
    UIView *_dividerLine;
    NSInvocation *_invocation;
    NSArray *_constraints;
    BOOL _shouldInsetButtonsForIndex;
    UIScrollView *_scrollView;
    long long _edge;
}

@property(nonatomic) BOOL shouldInsetButtonsForIndex; // @synthesize shouldInsetButtonsForIndex=_shouldInsetButtonsForIndex;
@property(nonatomic) long long edge; // @synthesize edge=_edge;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (struct CGRect)centeringBounds;
@property(readonly, nonatomic) long long desiredAccessoryEdge;
- (void)buttonTapped:(id)arg1;
- (void)update;
- (int)_axis;
@property(readonly, nonatomic) BOOL overlay;
- (id)_constraintsForEdge:(long long)arg1;
- (void)updateConstraints;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

