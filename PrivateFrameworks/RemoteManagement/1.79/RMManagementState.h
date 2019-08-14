//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface RMManagementState : NSObject
{
    BOOL _cachedShouldRequestMoreTime;
    BOOL _cachedIsRestrictionsPasscodeSet;
    NSXPCConnection *_connection;
}

@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property BOOL cachedIsRestrictionsPasscodeSet; // @synthesize cachedIsRestrictionsPasscodeSet=_cachedIsRestrictionsPasscodeSet;
@property BOOL cachedShouldRequestMoreTime; // @synthesize cachedShouldRequestMoreTime=_cachedShouldRequestMoreTime;
- (void).cxx_destruct;
- (void)screenTimeSyncStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setScreenTimeSyncingEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setScreenTimeEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)setScreenTimeEnabled:(BOOL)arg1 error:(id *)arg2;
- (void)screenTimeStateCompletionHandler:(CDUnknownBlockType)arg1;
- (void)screenTimeStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)isRestrictionsPasscodeSet:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL isRestrictionsPasscodeSet;
- (void)shouldRequestMoreTime:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL shouldRequestMoreTime;
- (id)init;
- (void)dealloc;

@end

