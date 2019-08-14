//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class _NSFullScreenCreateTileDropTargetController;

__attribute__((visibility("hidden")))
@interface _NSFullScreenCreateTileDropTargetWindow : NSPanel
{
    _NSFullScreenCreateTileDropTargetController *_controller;
    CDUnknownBlockType _additionalMoveBlock;
    struct CGRect _dropRect;
    struct CGRect _collapsedRect;
    BOOL _revealed;
}

- (void)moveToSpace;
- (void)animateRevealWithAdditionalMoveBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)animateHideWithAdditionalMoveBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)isRevealed;
- (BOOL)isAnimating;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)setDropRect:(struct CGRect)arg1 collapsedRect:(struct CGRect)arg2;
- (void)_setWindowTag;
- (BOOL)_ignoreForFullScreenTransition;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_canMiniaturize;
- (BOOL)isMovable;
- (BOOL)_allowsExteriorResizing;
- (BOOL)_canBeSnappingTarget;
- (BOOL)_allowsSnapping;
- (BOOL)_shouldSnapWindowsClientSide;
- (id)initWithController:(id)arg1;

@end

