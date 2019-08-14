//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSException, NSManagedObjectContext, NSNumber, NSPersistentStoreRequest, NSQueryGenerationToken, NSSQLCore, NSSQLRowCache, NSSQLiteConnection;

__attribute__((visibility("hidden")))
@interface NSSQLStoreRequestContext : NSObject
{
    NSSQLCore *_sqlCore;
    NSPersistentStoreRequest *_persistentStoreRequest;
    NSSQLiteConnection *_connection;
    NSManagedObjectContext *_context;
    NSError *_error;
    NSException *_exception;
    id _result;
    BOOL _useColoredLogging;
    BOOL _useConcurrentFetching;
    BOOL _hasHistoryTracking;
    NSNumber *_transactionID;
    BOOL _storeIsInMemory;
}

@property(readonly, nonatomic) BOOL storeIsInMemory; // @synthesize storeIsInMemory=_storeIsInMemory;
@property(readonly, nonatomic) NSNumber *transactionID; // @synthesize transactionID=_transactionID;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(retain, nonatomic) id exception; // @synthesize exception=_exception;
@property(retain, nonatomic) NSError *localError; // @synthesize localError=_error;
@property(readonly, nonatomic) BOOL useConcurrentFetching; // @synthesize useConcurrentFetching=_useConcurrentFetching;
@property(readonly, nonatomic) BOOL useColoredLogging; // @synthesize useColoredLogging=_useColoredLogging;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSSQLiteConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest; // @synthesize persistentStoreRequest=_persistentStoreRequest;
@property(readonly, nonatomic) BOOL shouldRegisterQueryGeneration;
- (void)executeEpilogue;
- (BOOL)executeRequestUsingConnection:(id)arg1;
- (void)executeRequestCore:(id *)arg1;
- (void)executePrologue;
@property(readonly, nonatomic) NSQueryGenerationToken *queryGenerationToken;
@property(readonly, nonatomic) BOOL isWritingRequest;
- (void)setTransactionID:(id)arg1;
- (BOOL)hasHistoryTracking;
@property(readonly, nonatomic) int debugLogLevel;
- (BOOL)forConflictAnalysis;
@property(readonly, nonatomic) NSSQLRowCache *rowCache;
- (id)notificationSourceObject;
@property(readonly, nonatomic) unsigned long long requestType;
@property(readonly, nonatomic) NSSQLCore *sqlCore;
- (id)newStatementWithSQLString:(id)arg1;
- (id)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (id)createNestedObjectFaultContextForObjectWithID:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;

@end

