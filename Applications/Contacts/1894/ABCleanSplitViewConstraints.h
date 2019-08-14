//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABCleanSplitViewLayoutViews, NSArray, NSLayoutConstraint;

@interface ABCleanSplitViewConstraints : NSObject
{
    ABCleanSplitViewLayoutViews *_views;
    NSLayoutConstraint *_groupsPaneWidthConstraint;
    NSLayoutConstraint *_contactsPaneWidthConstraint;
    NSArray *_leftEdgeConstraints;
}

- (id)makeConstraintsBuilderWithMetrics:(id)arg1;
- (id)makeConstraintsBuilder;
- (void)restoreHoldingPriorities;
- (void)setHoldingPrioritiesForGroupsPaneTransition;
- (void)addLeftEdgeConstraints:(id)arg1;
- (void)removeAllLeftEdgeConstraints;
@property(nonatomic) double preferredContactsPaneWidth;
@property(nonatomic) double preferredGroupsPaneWidth;
@property(readonly) ABCleanSplitViewLayoutViews *layoutViews;
- (void)dealloc;
- (id)initWithSplitView:(id)arg1;

@end
