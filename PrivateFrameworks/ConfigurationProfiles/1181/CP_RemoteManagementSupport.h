//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ADMARDConfig;

__attribute__((visibility("hidden")))
@interface CP_RemoteManagementSupport : NSObject
{
    ADMARDConfig *_ardConfig;
}

- (void)dealloc;
- (id)init;
- (id)ardConfig;
- (BOOL)isAllUsers;
- (void)setCurrentAllUsersRMPrivs:(int)arg1;
- (int)getCurrentAllUsersRMPrivs;
- (BOOL)isScreenShareActive;
- (BOOL)isARDActive;
- (id)disableRemoteManagement;
- (id)enableRemoteManagement:(BOOL)arg1 withPrivileges:(int)arg2;
- (id)enableRemoteManagement;

@end

