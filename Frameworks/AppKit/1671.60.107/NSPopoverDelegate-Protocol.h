//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class NSNotification, NSPopover, NSWindow;

@protocol NSPopoverDelegate <NSObject>

@optional
- (void)popoverDidClose:(NSNotification *)arg1;
- (void)popoverWillClose:(NSNotification *)arg1;
- (void)popoverDidShow:(NSNotification *)arg1;
- (void)popoverWillShow:(NSNotification *)arg1;
- (NSWindow *)detachableWindowForPopover:(NSPopover *)arg1;
- (void)popoverDidDetach:(NSPopover *)arg1;
- (BOOL)popoverShouldDetach:(NSPopover *)arg1;
- (BOOL)popoverShouldClose:(NSPopover *)arg1;
@end

