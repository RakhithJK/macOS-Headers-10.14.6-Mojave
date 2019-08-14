//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXCloudKitHelper, CHManager, NSManagedObjectContext;

@interface RTTDatabaseHelper : NSObject
{
    struct sqlite3 *_database;
    CHManager *_callHistoryManager;
    AXCloudKitHelper *_cloudKitHelper;
    int _contentProtectionNotifyToken;
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)sharedHelper;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void).cxx_destruct;
- (id)ttyDatabaseFilePath;
- (id)ttyDirectoryPath;
- (BOOL)contactPathWasUsedForTTY:(id)arg1;
- (BOOL)contactIsTTYContact:(id)arg1;
- (BOOL)contactIDIsTTYContact:(id)arg1;
- (BOOL)deleteConversationWithCallUID:(id)arg1;
- (BOOL)deleteConversationsWithCallUIDs:(id)arg1;
- (BOOL)saveConversation:(id)arg1;
- (id)conversationForCallUID:(id)arg1;
- (BOOL)saveIfPossible;
- (BOOL)isProtectedDataAvailable;
- (void)contentDidUpdate:(id)arg1;
- (void)storesWillChange:(id)arg1;
- (void)callHistoryDBDidChange:(id)arg1;
- (void)setupDatabase;
- (void)dealloc;
- (id)init;

@end

