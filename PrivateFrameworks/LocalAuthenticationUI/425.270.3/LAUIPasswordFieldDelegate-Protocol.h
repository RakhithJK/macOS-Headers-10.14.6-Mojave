//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <LocalAuthenticationUI/NSObject-Protocol.h>

@class LAUIPasswordField;

@protocol LAUIPasswordFieldDelegate <NSObject>

@optional
- (void)cancelAuthentication;
- (BOOL)cmdEnterOrReturnPressed;
- (void)passwordFieldDidResignFirstResponder:(LAUIPasswordField *)arg1;
- (void)passwordFieldDidBecomeFirstResponder:(LAUIPasswordField *)arg1;
@end

