//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class AuthenticationSession, NSURL;

@protocol AuthenticationSessionDelegate <NSObject>

@optional
- (void)authenticationSessionWasCanceled:(AuthenticationSession *)arg1;
- (void)authenticationSession:(AuthenticationSession *)arg1 didFinishWithCallbackURL:(NSURL *)arg2;
@end

