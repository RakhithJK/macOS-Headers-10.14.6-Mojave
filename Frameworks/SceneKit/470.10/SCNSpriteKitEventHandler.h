//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SKScene;

__attribute__((visibility("hidden")))
@interface SCNSpriteKitEventHandler : NSObject
{
    SKScene *_scene;
    NSMutableDictionary *_touchMap;
    BOOL _mouseIsDown;
    BOOL _rightMouseIsDown;
}

@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (BOOL)acceptsFirstResponder;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)rightMouseUp:(id)arg1;
- (BOOL)mouseUp:(id)arg1;
- (BOOL)rightMouseDragged:(id)arg1;
- (BOOL)mouseDragged:(id)arg1;
- (BOOL)mouseMoved:(id)arg1;
- (BOOL)rightMouseDown:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)dealloc;
- (id)init;

@end

