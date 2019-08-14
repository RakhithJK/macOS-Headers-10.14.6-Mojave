//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol HUStatusBarVisibilityHandling;

@interface HUApplicationManager : NSObject
{
    BOOL _wasStatusBarVisible;
    id <HUStatusBarVisibilityHandling> _statusBarVisibilityHandler;
    NSHashTable *_statusBarHidingRequesters;
    NSHashTable *_networkActivityIndicatorRequesters;
    NSHashTable *_idleTimerDisabledRequesters;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL wasStatusBarVisible; // @synthesize wasStatusBarVisible=_wasStatusBarVisible;
@property(retain, nonatomic) NSHashTable *idleTimerDisabledRequesters; // @synthesize idleTimerDisabledRequesters=_idleTimerDisabledRequesters;
@property(retain, nonatomic) NSHashTable *networkActivityIndicatorRequesters; // @synthesize networkActivityIndicatorRequesters=_networkActivityIndicatorRequesters;
@property(retain, nonatomic) NSHashTable *statusBarHidingRequesters; // @synthesize statusBarHidingRequesters=_statusBarHidingRequesters;
@property(retain, nonatomic) id <HUStatusBarVisibilityHandling> statusBarVisibilityHandler; // @synthesize statusBarVisibilityHandler=_statusBarVisibilityHandler;
- (void).cxx_destruct;
- (void)setIdleTimerDisabled:(BOOL)arg1 forRequester:(id)arg2;
- (BOOL)isIdleTimerDisabled;
- (void)setNetworkActivityIndicatorVisible:(BOOL)arg1 forRequester:(id)arg2;
- (BOOL)isNetworkActivityIndicatorVisible;
- (void)setStatusBarHidden:(BOOL)arg1 forRequester:(id)arg2 withAnimationSettings:(id)arg3;
- (void)setStatusBarHidden:(BOOL)arg1 forRequester:(id)arg2;
@property(readonly, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;
- (id)init;

@end

