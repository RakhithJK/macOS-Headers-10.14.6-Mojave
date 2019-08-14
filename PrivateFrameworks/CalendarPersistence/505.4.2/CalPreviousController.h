//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CalPreviousController : NSObject
{
    NSDictionary *_previousLists;
    BOOL _hasUnsavedChanges;
}

+ (void)save;
+ (id)defaultController;
+ (id)itemWithAddress:(id)arg1 displayName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 login:(id)arg5 attendeeType:(int)arg6;
+ (id)stringVersionOfType:(int)arg1;
+ (id)itemWithAddress:(id)arg1 attendeeType:(int)arg2;
- (void)removeAddress:(id)arg1 key:(id)arg2;
- (id)itemsWithPrefix:(id)arg1 key:(id)arg2 locations:(BOOL)arg3;
- (void)clearAll;
- (void)addItemToList:(id)arg1 withKey:(id)arg2;
- (void)trimPrevious:(id)arg1;
- (void)saveAll;
- (id)filePath;
- (BOOL)checkPath:(id)arg1 createIfNecessary:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

