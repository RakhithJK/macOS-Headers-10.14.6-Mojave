//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABPersonEntriesList, NSDictionary, NSMutableArray;
@protocol ABPersonListControllerProtocol;

@interface ABPersonListUIReflector : NSObject
{
    NSDictionary *_notificationUserInfo;
    id <ABPersonListControllerProtocol> _personListController;
    ABPersonEntriesList *_personEntriesList;
    NSMutableArray *_touchedEntries;
    NSMutableArray *_newEntries;
    NSMutableArray *_emptyEntries;
    BOOL _needsRearranged;
    BOOL _touchedEntryNeedsRearranged;
}

@property(retain) ABPersonEntriesList *personEntriesList; // @synthesize personEntriesList=_personEntriesList;
@property(retain) id <ABPersonListControllerProtocol> personListController; // @synthesize personListController=_personListController;
@property(retain) NSDictionary *notificationUserInfo; // @synthesize notificationUserInfo=_notificationUserInfo;
- (void)updateUI;
- (void)processDeletedIdentifiers:(id)arg1;
- (void)processInsertedRecords:(id)arg1;
- (void)processUpdatedRecord:(id)arg1;
- (void)processLinkedUpdatedRecords:(id)arg1;
- (void)processNotLinkedUpdatedRecords:(id)arg1;
- (void)processUpdatedRecords:(id)arg1;
- (void)categorizeUpdatedRecords:(id)arg1 asLinked:(id)arg2 notLinked:(id)arg3;
- (id)tableEntryForLinkedRecordIdentifier:(id)arg1;
- (id)tableEntryForRecordIdentifier:(id)arg1;
- (void)replaceEntry:(id)arg1 withEntryForLinkedContacts:(id)arg2;
- (void)replaceEntry:(id)arg1 withEntryForRecord:(id)arg2;
- (void)removeEntry:(id)arg1;
- (void)addEntryForLinkedRecords:(id)arg1;
- (void)addEntryForRecord:(id)arg1;
- (id)recordsForIdentifiers:(id)arg1;
- (id)affectedStores;
- (id)contactPredicate;
- (void)reflectChangesInUI;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

