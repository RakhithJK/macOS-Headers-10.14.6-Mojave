//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ViewBridge/NSSelfDestructingRemoteViewDelegate.h>

#import <ViewBridge/NSRendezvousWindowDelegate-Protocol.h>

@class NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface NSRendezvousWindowDelegate : NSSelfDestructingRemoteViewDelegate <NSRendezvousWindowDelegate>
{
    unsigned int _isSettingValue:1;
    NSWindow *_window;
    unsigned char _mostRecentWindowGeometryChanger;
}

- (id)initWithWindow:(id)arg1;
- (void)dealloc;
- (void)viewDidInvalidate:(id)arg1;
- (void)disengageFromWindow;
- (BOOL)view:(id)arg1 shouldResize:(struct CGSize)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(id)arg4;
- (void)_setValue:(id)arg1 forKey:(id)arg2 context:(id)arg3;
@property(readonly) BOOL isSettingValue;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowGeometryDidChange:(id)arg1;
- (void)windowGeometryDidChange:(id)arg1 atBehestOf:(unsigned char)arg2;
- (unsigned char)mostRecentWindowGeometryChanger;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

