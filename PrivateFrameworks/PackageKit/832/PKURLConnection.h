//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKURLConnection : NSObject
{
}

+ (void)sendAsynchronousRequest:(id)arg1 notifyOn:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id *)arg2 error:(id *)arg3;
+ (void)finishAuthenticationChallenge:(id)arg1 usingCredential:(id)arg2;
+ (void)finishAuthenticationChallenge:(id)arg1 usingCredential:(id)arg2 shouldContinue:(BOOL)arg3;
+ (void)didReceiveAuthenticationChallenge:(id)arg1;
+ (void)setUserAgent:(id)arg1;
+ (id)userAgent;
+ (void)setSharedAuthenticationHandler:(id)arg1;

@end

