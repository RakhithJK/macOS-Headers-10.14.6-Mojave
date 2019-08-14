//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewControllerPresentationAnimatorObject.h>

@class NSWindow;

__attribute__((visibility("hidden")))
@interface NSViewControllerWindowTransition : NSViewControllerPresentationAnimatorObject
{
    NSWindow *_windowPresented;
}

@property(readonly, retain) NSWindow *window; // @synthesize window=_windowPresented;
- (void)animateDismissalOfViewController:(id)arg1 fromViewController:(id)arg2;
- (void)animatePresentationOfViewController:(id)arg1 fromViewController:(id)arg2;
- (void)_windowWillClose:(id)arg1;
- (id)_makeWindowWithContentRect:(struct CGRect)arg1;
- (void)dealloc;

@end

