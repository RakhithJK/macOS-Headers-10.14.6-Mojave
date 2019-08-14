//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSLayoutConstraint, NSSplitViewItem, NSVisualEffectView;

__attribute__((visibility("hidden")))
@interface _NSSplitViewItemViewWrapper : NSView
{
    NSSplitViewItem *_splitViewItem;
    NSLayoutConstraint *_breadthConstraint;
    NSLayoutConstraint *_equalBreadthConstraint;
    NSLayoutConstraint *_firstEdgeConstraint;
    NSLayoutConstraint *_lastEdgeConstraint;
    NSVisualEffectView *_effectView;
    double _minimumThickness;
    double _maximumThickness;
    unsigned int _isOverlaid:1;
    unsigned int _sidebar:1;
    unsigned int _hasBaseVibrancyEffect:1;
    unsigned int _forceWithinWindowBlending:1;
    unsigned int _reserved:28;
}

@property NSLayoutConstraint *breadthConstraint; // @synthesize breadthConstraint=_breadthConstraint;
@property NSLayoutConstraint *equalBreadthConstraint; // @synthesize equalBreadthConstraint=_equalBreadthConstraint;
- (void)scrollWheel:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)_shouldConsumeMouseEvents;
- (void)disengageBreadthConstraint;
- (void)updateBreadthConstraintPriority;
- (double)engageBreadthConstraintForAnimatingLastEdge:(BOOL)arg1;
- (void)wrapView;
@property(getter=isSidebar) BOOL sidebar;
- (void)_createOrUpdateMaximumSizeConstraint;
- (void)_createOrUpdateMinimumSizeConstraint;
@property double maximumThickness;
@property double minimumThickness;
- (id)_overlayMaterialGroupName;
- (void)_updateEffectViewState;
@property BOOL forceWithinWindowBlending;
@property BOOL hasBaseVibrancyEffect;
@property(getter=isOverlaid) BOOL overlaid;
- (id)_preferredAppearance;
- (void)viewDidChangeEffectiveAppearance;
@property NSSplitViewItem *splitViewItem;
- (void)setHidden:(BOOL)arg1;
- (id)_splitView;
- (void)dealloc;

@end

