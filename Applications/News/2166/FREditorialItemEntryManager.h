//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FREditorialItemEntryManager-Protocol.h"

@class FCKeyValueStore, NSArray, NSMutableDictionary;

@interface FREditorialItemEntryManager : NSObject <FREditorialItemEntryManager>
{
    NSMutableDictionary *_editorialItemsByID;
    NSArray *_orderedEditorialItemIDs;
    FCKeyValueStore *_localStore;
}

@property(readonly, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(retain, nonatomic) NSArray *orderedEditorialItemIDs; // @synthesize orderedEditorialItemIDs=_orderedEditorialItemIDs;
@property(retain, nonatomic) NSMutableDictionary *editorialItemsByID; // @synthesize editorialItemsByID=_editorialItemsByID;
- (void).cxx_destruct;
- (id)cachedArticleIDs;
- (id)_editorialEntryIDForIdentifier:(id)arg1;
- (void)addOrderedEditorialItemIDs:(id)arg1;
- (void)removeItemWithIdentifier:(id)arg1;
- (void)addEditorialItem:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)initWithLocalStore:(id)arg1;

@end

