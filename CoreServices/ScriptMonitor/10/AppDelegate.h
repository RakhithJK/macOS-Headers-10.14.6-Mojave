//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSApplicationDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class NSArray, NSMenu, NSMutableArray, NSStatusItem, NSString, NSTimer;

@interface AppDelegate : NSObject <NSApplicationDelegate, NSMenuDelegate>
{
    BOOL _isStatusItemOpen;
    NSMenu *_menu;
    NSArray *_selectedImages;
    NSArray *_unselectedImages;
    NSMutableArray *_progressItems;
    id _subscriber;
    NSStatusItem *_statusItem;
    NSTimer *_animationTimer;
    double _frameRate;
    double _rotationPosition;
}

@property double rotationPosition; // @synthesize rotationPosition=_rotationPosition;
@property double frameRate; // @synthesize frameRate=_frameRate;
@property(retain) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(setter=setStatusItemOpen:) BOOL isStatusItemOpen; // @synthesize isStatusItemOpen=_isStatusItemOpen;
@property(retain) NSStatusItem *statusItem; // @synthesize statusItem=_statusItem;
@property(retain) id subscriber; // @synthesize subscriber=_subscriber;
@property(retain) NSMutableArray *progressItems; // @synthesize progressItems=_progressItems;
- (void).cxx_destruct;
- (void)animationTimerDidFire:(id)arg1;
- (void)stopAnimation;
- (void)startAnimation;
@property(readonly, nonatomic) NSArray *unselectedImages; // @synthesize unselectedImages=_unselectedImages;
@property(readonly, nonatomic) NSArray *selectedImages; // @synthesize selectedImages=_selectedImages;
- (void)buildImages;
- (void)stop:(id)arg1;
- (void)progressWasUnpublished:(id)arg1;
- (void)progressWasPublished:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
@property(readonly, nonatomic) NSMenu *menu; // @synthesize menu=_menu;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeFinishedProgressItems;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)displayStatusItem;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

