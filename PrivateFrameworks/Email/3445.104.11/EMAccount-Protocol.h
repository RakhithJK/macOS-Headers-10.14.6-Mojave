//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Email/NSObject-Protocol.h>

@class ACAccount, NSString;

@protocol EMAccount <NSObject>
@property(copy, nonatomic) NSString *password;
@property(copy, nonatomic) NSString *hostname;
- (void)savePersistentAccount;
- (BOOL)hasPasswordCredential;
- (BOOL)canAuthenticateWithCurrentCredentials;
- (ACAccount *)systemAccount;
@end

