//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMigrationManager, NSString, NSURL;

@interface CoreThemeDefinitionMigrator : NSObject
{
    NSMigrationManager *_migrationManager;
    NSURL *_documentURL;
    long long _oldVersion;
    long long _newVersion;
    NSString *temporaryMigrationPath;
}

@property(copy) NSString *temporaryMigrationPath; // @synthesize temporaryMigrationPath;
- (BOOL)migrateWithError:(id *)arg1;
- (id)mappingModelForMigrationWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 oldVersion:(long long)arg2 newVersion:(long long)arg3;
- (BOOL)_updateMetadata:(id *)arg1;
- (BOOL)_checkDiskSpace:(id *)arg1;

@end

