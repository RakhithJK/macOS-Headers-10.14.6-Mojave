//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSProtocolUtilities : NSObject
{
}

+ (void)applyUserDefaultOverridesToResponse:(id)arg1;
+ (void)fetchMPSStateWithBaseAvailabilityURL:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)_urlSession;
+ (id)appleIDSession;
+ (id)retryAfterDateBasedOnRetryAfterHeaderString:(id)arg1;
+ (id)deviceInfoDictForPersonID:(id)arg1;
+ (id)Win32SHA1OfUDID:(id)arg1;

@end

