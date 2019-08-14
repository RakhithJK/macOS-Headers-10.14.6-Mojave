//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WBSCloudBookmarksRemoteMigrationInfo : NSObject
{
    long long _migrationState;
    NSString *_migratorDeviceIdentifier;
    NSDate *_serverModificationDate;
}

@property(readonly, nonatomic) NSDate *serverModificationDate; // @synthesize serverModificationDate=_serverModificationDate;
@property(readonly, copy, nonatomic) NSString *migratorDeviceIdentifier; // @synthesize migratorDeviceIdentifier=_migratorDeviceIdentifier;
@property(readonly, nonatomic) long long migrationState; // @synthesize migrationState=_migrationState;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMigrationState:(long long)arg1 migratorDeviceIdentifier:(id)arg2 serverModificationDate:(id)arg3;

@end

