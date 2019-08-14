//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewControllerPresentationAnimatorObject.h>

@class NSPopover, NSView;

__attribute__((visibility("hidden")))
@interface NSViewControllerPopoverTransition : NSViewControllerPresentationAnimatorObject
{
    NSPopover *_popover;
    BOOL _isClosing;
    struct CGRect _positioningRect;
    NSView *_positioningView;
    unsigned long long _preferredEdge;
    long long _behavior;
}

- (void)animateDismissalOfViewController:(id)arg1 fromViewController:(id)arg2;
- (void)animatePresentationOfViewController:(id)arg1 fromViewController:(id)arg2;
- (id)initWithPositioningRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3 behavior:(long long)arg4;
- (void)_windowDidClose:(id)arg1;
- (void)dealloc;

@end

