//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface ICMMaskView : NSView
{
    BOOL _allowsMouseDownEvents;
}

@property(nonatomic) BOOL allowsMouseDownEvents; // @synthesize allowsMouseDownEvents=_allowsMouseDownEvents;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsTouchEvents;
- (BOOL)acceptsFirstMouse:(id)arg1;

@end

