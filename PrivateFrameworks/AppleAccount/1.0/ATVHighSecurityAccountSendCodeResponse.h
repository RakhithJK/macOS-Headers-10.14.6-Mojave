//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface ATVHighSecurityAccountSendCodeResponse : AAResponse
{
}

@property(readonly, nonatomic) long long errorCode;
@property(readonly, nonatomic) NSString *errorMessage;
@property(readonly, nonatomic) NSString *errorTitle;
@property(readonly, nonatomic) NSDictionary *userDisplayStrings;
@property(readonly, nonatomic) BOOL success;

@end

