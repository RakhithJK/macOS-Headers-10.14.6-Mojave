//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarPersistence/EWSExchangeServiceBindingTaskDelegate-Protocol.h>

@class NSManagedObjectID, NSString;

@interface CalExchangeBasicAccountInfoProvider : NSObject <EWSExchangeServiceBindingTaskDelegate>
{
    NSString *_login;
    NSString *_password;
    NSManagedObjectID *_sessionID;
}

@property(retain, nonatomic) NSManagedObjectID *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *login; // @synthesize login=_login;
- (void).cxx_destruct;
- (void)exchangeServiceBinding:(id)arg1 didFailWithError:(id)arg2;
- (void)exchangeServiceBinding:(id)arg1 didFinishWithResponse:(id)arg2;
- (void)exchangeServiceBinding:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)exchangeServiceBinding:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (id)initWithLogin:(id)arg1 password:(id)arg2 sessionID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

