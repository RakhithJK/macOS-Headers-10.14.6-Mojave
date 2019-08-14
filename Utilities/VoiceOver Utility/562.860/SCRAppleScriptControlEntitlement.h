//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AdminAuthenticator, NSFileManager, SCRUserUtilities;

@interface SCRAppleScriptControlEntitlement : NSObject
{
    AdminAuthenticator *_authenticator;
    NSFileManager *_fileManager;
    SCRUserUtilities *_userUtility;
}

+ (id)entitlement;
@property(readonly, retain, nonatomic) SCRUserUtilities *userUtility; // @synthesize userUtility=_userUtility;
@property(readonly, retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, retain, nonatomic) AdminAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
- (void).cxx_destruct;
- (void)removeAppleScriptEnabledFileOnSuccess:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void)createAppleScriptEnabledFileOnSuccess:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (void)waitForAppleScriptEnabledFileExists:(BOOL)arg1 systemAuth:(id)arg2 adminAuth:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (void)checkAppleScriptEnabledFileExists:(id)arg1;
- (void)performBlockWithAdminAuthentication:(CDUnknownBlockType)arg1 onSuccess:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (BOOL)appleScriptEnabledFileExists;
- (void)setEnabled:(BOOL)arg1 onSuccess:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (BOOL)isEnabled;
- (id)initWithAuthenticator:(id)arg1 fileManager:(id)arg2 userUtility:(id)arg3;
- (id)init;

@end

