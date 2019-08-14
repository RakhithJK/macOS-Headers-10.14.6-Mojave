//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPersistentStoreCoordinator;

__attribute__((visibility("hidden")))
@interface CNPersistentStoreCoordinatorResult : NSObject
{
    NSPersistentStoreCoordinator *_coordinator;
    BOOL _pristineDatabase;
    BOOL _didMigrate;
}

+ (id)resultsWithCoordinator:(id)arg1 pristineDatabase:(BOOL)arg2 didMigrate:(BOOL)arg3;
+ (id)resultsWithCoordinator:(id)arg1 pristineDatabase:(BOOL)arg2;
@property(readonly) BOOL didMigrate; // @synthesize didMigrate=_didMigrate;
@property(readonly, getter=isPristineDatabase) BOOL pristineDatabase; // @synthesize pristineDatabase=_pristineDatabase;
@property(readonly, retain) NSPersistentStoreCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void)dealloc;
- (id)initWithCoordinator:(id)arg1 pristineDatabase:(BOOL)arg2 didMigrate:(BOOL)arg3;

@end

