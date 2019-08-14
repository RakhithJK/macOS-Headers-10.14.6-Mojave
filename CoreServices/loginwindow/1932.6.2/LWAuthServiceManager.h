//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AuthenticationHintsDelegate-Protocol.h"
#import "LWClamshellStateDelegate-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class LWClamshellState, NSString, NSTimer;
@protocol LWAuthServiceManagerScreenLockDelegate;

@interface LWAuthServiceManager : NSObject <LWClamshellStateDelegate, AuthenticationHintsDelegate, NSSecureCoding>
{
    NSTimer *_autoUnlockCancelTimer;
    id <LWAuthServiceManagerScreenLockDelegate> _screenLockDelegate;
    LWClamshellState *_clamshellState;
}

+ (BOOL)supportsSecureCoding;
+ (id)sharedManager;
@property(retain) LWClamshellState *clamshellState; // @synthesize clamshellState=_clamshellState;
@property id <LWAuthServiceManagerScreenLockDelegate> screenLockDelegate; // @synthesize screenLockDelegate=_screenLockDelegate;
- (void)clamshellStateChanged:(BOOL)arg1;
- (void)checkFUSAuthOnThread:(id)arg1;
- (void)event:(long long)arg1 eventHints:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)statusStringForError:(id)arg1;
- (void)isLAServiceEnabled:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)activateUnlockedLASessionIfAppropriate;
- (BOOL)disableComputerUnlock:(id *)arg1;
- (BOOL)shouldActivateUnlockedLASession;
- (void)activateLAIfAppropriateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)activateContinuityIfAppropriateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)activateAppropriateServicesAllowingAutoUnlock:(BOOL)arg1 withTimeoutBlock:(CDUnknownBlockType)arg2;
- (void)activateAppropriateServicesAllowingAutoUnlock:(BOOL)arg1;
- (void)handleAutoUnlockCancelTimer:(id)arg1;
- (void)freeAutoUnlockCancelTimer;
- (void)_shouldDeactivateService:(id)arg1 withError:(id)arg2 context:(id)arg3;
- (void)shouldDeactivateService:(id)arg1 withError:(id)arg2 reason:(long long)arg3;
- (void)shouldDeactivateService:(id)arg1 withError:(id)arg2;
- (void)shouldDeactivateService:(id)arg1;
- (id)userODRecordForUserName:(id)arg1;
- (id)searchNode;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

