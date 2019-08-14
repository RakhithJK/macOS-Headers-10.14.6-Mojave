//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, NSXPCInterface;

@interface MigrationHelper_Client : NSObject
{
    unsigned int uid;
    NSString *tracingUUID;
    NSXPCConnection *helperConnection;
    NSXPCInterface *helperInterface;
}

@property(retain) NSXPCInterface *helperInterface; // @synthesize helperInterface;
@property(retain) NSXPCConnection *helperConnection; // @synthesize helperConnection;
@property(retain) NSString *tracingUUID; // @synthesize tracingUUID;
@property unsigned int uid; // @synthesize uid;
- (void).cxx_destruct;
- (void)removeAllDeliveredNotifications;
- (void)showNotificationWithTitle:(id)arg1 informativeText:(id)arg2 actionButtonTitle:(id)arg3 action:(long long)arg4;
- (BOOL)encryptDiskWithiCloudUser:(id)arg1 iCloudPassword:(id)arg2 localUser:(id)arg3 localPassword:(id)arg4 andBag:(id)arg5 returningError:(id *)arg6;
- (BOOL)doImportWithParameters:(id)arg1 pathMap:(id)arg2 error:(id *)arg3;
- (void)setMigrationRequestUUID:(id)arg1;
- (void)connectToHelper;
- (void)dealloc;
- (id)initWithUID:(unsigned int)arg1 withMigrationEngineUUID:(id)arg2;

@end

