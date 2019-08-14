//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ECEvent;

@protocol ECEventHandling <NSObject>

@optional
- (BOOL)dragSpring:(ECEvent *)arg1;
- (BOOL)dragDropped:(ECEvent *)arg1;
- (BOOL)dragMoved:(ECEvent *)arg1;
- (BOOL)dragExited:(ECEvent *)arg1;
- (BOOL)dragEntered:(ECEvent *)arg1;
- (void)lostKeyFocus:(ECEvent *)arg1;
- (BOOL)deepPress:(ECEvent *)arg1;
- (BOOL)gesture:(ECEvent *)arg1;
- (BOOL)flagsChanged:(ECEvent *)arg1;
- (BOOL)keyUp:(ECEvent *)arg1;
- (BOOL)keyDown:(ECEvent *)arg1;
- (BOOL)mouseExited:(ECEvent *)arg1;
- (BOOL)mouseMoved:(ECEvent *)arg1;
- (BOOL)mouseEntered:(ECEvent *)arg1;
- (BOOL)scrollWheel:(ECEvent *)arg1;
- (BOOL)rightMouseUp:(ECEvent *)arg1;
- (BOOL)rightMouseDragged:(ECEvent *)arg1;
- (BOOL)rightMouseDown:(ECEvent *)arg1;
- (BOOL)leftMouseDraggedExited:(ECEvent *)arg1;
- (BOOL)leftMouseDraggedEntered:(ECEvent *)arg1;
- (BOOL)leftMouseDragged:(ECEvent *)arg1;
- (BOOL)leftMouseUp:(ECEvent *)arg1;
- (BOOL)leftMouseDown:(ECEvent *)arg1;
@end

