//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSApplicationDelegate-Protocol.h"

@class LocationAppManager, NSStatusItem, NSString;

@interface AppController : NSObject <NSApplicationDelegate>
{
    NSStatusItem *_statusItem;
    LocationAppManager *_locationAppManager;
}

+ (id)sharedController;
@property(retain) LocationAppManager *locationAppManager; // @synthesize locationAppManager=_locationAppManager;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)openPrefs:(id)arg1;
- (void)checkAppsOrQuit;
- (void)updateMenuWithApps:(id)arg1;
- (id)_disabledMenuItemWithTitle:(id)arg1;
- (void)dealloc;
- (void)setup;
- (void)applicationDidFinishLaunching:(id)arg1;
- (id)initWithLocationManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

