//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSAlert, NSWindow, SidecarRequest, SidecarRunLoopCondition, SidecarRunLoopSource;

@interface SidecarAlertController : NSWindowController
{
    NSAlert *_alert;
    SidecarRunLoopCondition *_condition;
    SidecarRunLoopSource *_observer;
    NSWindow *_parentWindow;
    SidecarRequest *_request;
    // Error parsing type: AB, name: _modal
}

@property(readonly, nonatomic) SidecarRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (long long)runModal;
- (void)close;
- (void)showWindow:(id)arg1;
- (BOOL)showErrorOnFinished;
- (BOOL)autoDismissOnFinished;
- (void)_stopObserver;
- (void)_startObserver;
- (void)_prepareModelessPanel;
- (void)buttonPressed:(id)arg1;
- (void)_modalResponse:(long long)arg1;
- (void)loadWindow;
- (BOOL)isWindowLoaded;
@property(retain, nonatomic) NSAlert *alert;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 parentWindow:(id)arg2;

@end

