//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VSSubscriptionRegistrationCenter;

@interface PSSSSubscriptionManagerInternal : NSObject
{
    VSSubscriptionRegistrationCenter *_registrationCenter;
}

@property(retain, nonatomic) VSSubscriptionRegistrationCenter *registrationCenter; // @synthesize registrationCenter=_registrationCenter;
- (void).cxx_destruct;
- (void)removeWebSubscriptionServicesCreatedAfterDate:(id)arg1;
- (void)removeSubscriptionServiceForURL:(id)arg1;
- (void)registerSubscriptionServiceForURL:(id)arg1 withSubscriptionInfo:(id)arg2 expirationDate:(id)arg3;
- (void)getActiveSubscriptionServicesMatchingBundleIdentifiers:(id)arg1 domainIdentifiers:(id)arg2 maximumExpirationLimit:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;

@end

