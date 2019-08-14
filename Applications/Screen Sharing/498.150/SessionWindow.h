//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

#import "NSWindowDelegate-Protocol.h"

@class NSString, NSToolbar;

@interface SessionWindow : NSWindow <NSWindowDelegate>
{
    BOOL _toolbarWasVisible;
    NSToolbar *_savedToolbar;
}

@property BOOL toolbarWasVisible; // @synthesize toolbarWasVisible=_toolbarWasVisible;
@property(retain) NSToolbar *savedToolbar; // @synthesize savedToolbar=_savedToolbar;
- (void)mouseDown:(id)arg1;
- (void)windowDidChangeOcclusionState:(id)arg1;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)toggleFullScreen:(id)arg1;
- (void)saveToolbarState;
- (BOOL)isFullScreen;
- (Class)restorationClass;
- (void)newWindowForTab:(id)arg1;
- (BOOL)canBecomeKeyWindow;
- (void)awakeFromNib;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

