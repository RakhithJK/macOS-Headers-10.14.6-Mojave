//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@interface NSWindow (AMCocoaExtensions)
- (struct CGPoint)am_convertPointToScreen:(struct CGPoint)arg1;
- (struct CGPoint)am_convertPointFromScreen:(struct CGPoint)arg1;
- (void)am_constrainToScreen:(id)arg1 adjustWidth:(BOOL)arg2 adjustHeight:(BOOL)arg3;
@end

