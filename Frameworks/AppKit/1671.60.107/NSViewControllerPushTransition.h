//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewControllerPresentationAnimatorObject.h>

@class NSBox, NSView;

@interface NSViewControllerPushTransition : NSViewControllerPresentationAnimatorObject
{
    NSView *_dimmingView;
    NSBox *_boxView;
}

- (void)animateDismissalOfViewController:(id)arg1 fromViewController:(id)arg2;
- (void)animatePresentationOfViewController:(id)arg1 fromViewController:(id)arg2;

@end

