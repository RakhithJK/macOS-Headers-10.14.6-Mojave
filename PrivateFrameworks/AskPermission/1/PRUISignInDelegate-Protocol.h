//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSNumber, NSString;

@protocol PRUISignInDelegate
- (void)userDidCancelSignIn;
- (void)userDidSignInWithUsername:(NSString *)arg1 password:(NSString *)arg2 dsid:(NSNumber *)arg3 withResponseHandler:(void (^)(BOOL, NSString *))arg4;
@end

