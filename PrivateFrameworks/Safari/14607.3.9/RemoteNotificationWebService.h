//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface RemoteNotificationWebService : NSObject
{
}

+ (id)urlRequestLog:(id)arg1 websiteIdentifier:(id)arg2 messages:(id)arg3;
+ (id)urlRequestRemoveRegistration:(id)arg1 authorizationToken:(id)arg2 websiteIdentifier:(id)arg3 deviceToken:(id)arg4;
+ (id)urlRequestAddRegistration:(id)arg1 authorizationToken:(id)arg2 websiteIdentifier:(id)arg3 deviceToken:(id)arg4;
+ (id)urlRequestRegistration:(id)arg1 authorizationToken:(id)arg2 websiteIdentifier:(id)arg3 deviceToken:(id)arg4 method:(id)arg5;
+ (id)urlRequestForWebBundle:(id)arg1 websiteIdentifier:(id)arg2 queryParameters:(id)arg3;
+ (id)urlRequestForWebBundle:(id)arg1 bundleVersion:(long long)arg2 websiteIdentifier:(id)arg3 queryParameters:(id)arg4;

@end

