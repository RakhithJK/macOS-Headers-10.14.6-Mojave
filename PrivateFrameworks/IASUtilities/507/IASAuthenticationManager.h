//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IASAuthenticationManager : NSObject
{
    CDUnknownFunctionPointerType _ssoGetServiceTicketFunc;
    CDUnknownFunctionPointerType _ssoPostLoginFunc;
}

+ (id)usernameAndTicketBlobWithSSOData:(id)arg1 withUsername:(id)arg2;
+ (BOOL)ssoFrameworkAvailable;
+ (id)sharedManager;
@property CDUnknownFunctionPointerType ssoPostLoginFunc; // @synthesize ssoPostLoginFunc=_ssoPostLoginFunc;
@property CDUnknownFunctionPointerType ssoGetServiceTicketFunc; // @synthesize ssoGetServiceTicketFunc=_ssoGetServiceTicketFunc;
- (BOOL)_kinitWithKeytabIfSet;
- (id)getSSOServiceTicketWithUI:(BOOL)arg1 username:(id)arg2 password:(id)arg3 serviceID:(id)arg4 outUsername:(id *)arg5 error:(id *)arg6;
- (id)getSSOServiceTicketForUser:(id)arg1 password:(id)arg2 serviceID:(id)arg3 outUsername:(id *)arg4 error:(id *)arg5;
- (id)getSSOServiceTicketAsOnConsoleUserWithUI:(BOOL)arg1 serviceID:(id)arg2 outUsername:(id *)arg3 error:(id *)arg4;
- (id)getSSOServiceTicketWithUI:(BOOL)arg1 serviceID:(id)arg2 outUsername:(id *)arg3 error:(id *)arg4;
- (BOOL)_loadSSOFramework;
- (id)_locateSSOFramework;

@end

