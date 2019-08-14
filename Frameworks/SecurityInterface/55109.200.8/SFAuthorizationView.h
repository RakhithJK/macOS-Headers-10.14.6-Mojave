//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface SFAuthorizationView : NSView
{
    id _reserved_SFAuthorizationView;
}

+ (BOOL)containsPasswordOnlyItem:(CDStruct_166d2db6 *)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (int)authorizationState;
- (BOOL)updateStatus:(id)arg1;
- (id)authorization;
- (CDStruct_166d2db6 *)authorizationRights;
- (id)delegate;
- (void)initiallyLockedOrHidden;
- (BOOL)deauthorize:(id)arg1;
- (BOOL)authorize:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)setAuthorizationRights:(const CDStruct_166d2db6 *)arg1;
- (void)setString:(char *)arg1;
- (void)dealloc;
- (void)setAutoupdate:(BOOL)arg1 interval:(double)arg2;
- (void)setAutoupdate:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidEndSheet:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)awakeFromNib;
- (id)init;
- (BOOL)processRequest:(CDUnknownBlockType)arg1;
- (void)deauthorizeInteractively;
- (void)authorizeInteractively;
- (void)reenableButton;
- (void)setAuthorization:(id)arg1;
- (void)_destroyRights;
- (void)_createRef;
- (BOOL)_tryState:(int)arg1 interactive:(BOOL)arg2;
- (void)dispatchDelegateFromAsyncOperation:(BOOL)arg1 delegateBlock:(CDUnknownBlockType)arg2;
- (void)_reCalcTextButton;
- (id)getButtonTitleStringAttributes;
- (void)setButtonTitleStringAttributes:(id)arg1;
- (void)setTextButtonTitle:(id)arg1;
- (void)setAsyncOperation:(BOOL)arg1;
- (void)_freeRef:(BOOL)arg1;
- (id)_ivars;

@end

