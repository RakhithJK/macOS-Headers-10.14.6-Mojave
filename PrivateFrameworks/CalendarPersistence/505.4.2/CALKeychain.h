//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CALKeychain : NSObject
{
}

+ (id)oldURLForKeychainWithScheme:(id)arg1 login:(id)arg2 host:(id)arg3 principalPath:(id)arg4 port:(int)arg5;
+ (id)urlForKeychainWithScheme:(id)arg1 login:(id)arg2 host:(id)arg3 path:(id)arg4 port:(int)arg5;
+ (id)sharedKeychain;
- (void)deleteKeychainItemForNSURLCredential:(id)arg1 protectionSpace:(id)arg2;
- (void)modifyOrCreateKeychainInformationsForURL:(id)arg1 andPassword:(id)arg2;
- (void)modifyOrCreateKeychainInformationsForURL:(id)arg1 realm:(id)arg2 andPassword:(id)arg3;
- (void)modifyKeychainInformationsForQuery:(struct __CFDictionary *)arg1 password:(id)arg2;
- (id)guessPasswordForURL:(id)arg1;
- (void)guessLoginPasswordForURL:(id)arg1 login:(id *)arg2 password:(id *)arg3;
- (id)loadOldKeychainForURL:(id)arg1;
- (id)loadKeychainInformationsForURL:(id)arg1;
- (id)loadKeychainInformationsForURL:(id)arg1 realm:(id)arg2;
- (id)loadKeychainInformationsForURL:(id)arg1 realm:(id)arg2 login:(id *)arg3 shouldDeleteEntry:(BOOL)arg4;
- (id)loadKeychainInformationsForURL:(id)arg1 realm:(id)arg2 login:(id *)arg3;
- (void)deleteKeychainInformationsForURL:(id)arg1;
- (void)saveKeychainInformationsForURL:(id)arg1 realm:(id)arg2 andPassword:(id)arg3;
- (struct __CFDictionary *)newDictionaryForInternetPasswordWithAccount:(id)arg1 protocol:(void *)arg2 server:(id)arg3 port:(id)arg4 path:(id)arg5;
- (struct __CFDictionary *)newDictionaryForGenericPasswordWithAccount:(id)arg1 service:(id)arg2;
- (id)_computeOtherPossibleLookupPathsForPath:(id)arg1;
- (struct __CFDictionary *)newDictionaryForURL:(id)arg1 realm:(id)arg2 backupDictionaries:(id *)arg3;
- (struct __CFDictionary *)newDictionaryForURL:(id)arg1 realm:(id)arg2;
- (void *)protocolForScheme:(id)arg1;
- (void)guessLoginPasswordForThisURL:(id)arg1 login:(id *)arg2 password:(id *)arg3;

@end

