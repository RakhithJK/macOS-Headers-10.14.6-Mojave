//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSButton.h>

@interface FirstMouseButton : NSButton
{
    BOOL mAcceptsFirstMouse;
    BOOL mWasEnabled;
    BOOL mWindowIsKey;
}

- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)_windowResignedKey:(id)arg1;
- (void)_windowBecameKey:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setAcceptsFirstMouse:(BOOL)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

