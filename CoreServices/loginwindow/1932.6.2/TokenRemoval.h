//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TokenRemoval : NSObject
{
    BOOL cssmInitialized;
    struct cssm_subservice_uid mSubserviceUID;
    NSMutableDictionary *tokenMap;
}

+ (id)sharedTokenRemoval;
- (unsigned char)tokenRemoved:(id)arg1;
- (long long)readTokenRemovalActionPref:(id)arg1;
- (struct cssm_subservice_uid *)subserviceUID;
- (void)endWatch;
- (void)watch:(struct cssm_subservice_uid *)arg1;
- (_Bool)isTokenRegistered:(const char *)arg1;
- (void)registerToken:(struct AuthorizationOpaqueRef *)arg1 forUser:(char *)arg2;
- (id)copyTokenIdFromAuthRef:(struct AuthorizationOpaqueRef *)arg1;
- (void)dealloc;
- (id)init;

@end

