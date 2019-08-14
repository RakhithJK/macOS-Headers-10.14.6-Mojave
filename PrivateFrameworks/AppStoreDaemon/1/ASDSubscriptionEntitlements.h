//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASDServiceBroker;

@interface ASDSubscriptionEntitlements : NSObject
{
    ASDServiceBroker *_serviceBroker;
    int _cacheUpdatedNotificationToken;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 forActiveAccountWithResultAndExpiryHandler:(CDUnknownBlockType)arg2;
- (void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 forActiveAccountWithResultHandler:(CDUnknownBlockType)arg2;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultAndExpiryHandler:(CDUnknownBlockType)arg1;
- (void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:(CDUnknownBlockType)arg1;
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2;
- (id)_initWithServiceBroker:(id)arg1;
- (void)dealloc;
- (id)init;

@end

