//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStore;

__attribute__((visibility("hidden")))
@interface CNCDMigrator : NSObject
{
    NSManagedObjectContext *_moc;
    NSPersistentStore *_store;
}

- (void)dealloc;
- (void)migrate;
- (id)_initWithStore:(id)arg1 context:(id)arg2;
- (id)initWithStore:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

