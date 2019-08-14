//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABCardDelegateProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface ABCardController : NSObject <ABCardDelegateProtocol>
{
    NSMutableDictionary *_cardsByIdentifier;
    id _willSaveObservationToken;
    id _didSaveObservationToken;
    NSMutableArray *_dirtyCards;
}

+ (id)sharedController;
- (id)identifierForPerson:(id)arg1 showUnified:(BOOL)arg2;
- (void)_refreshDirtyCards:(id)arg1;
- (void)identifyDirtyCardsForChangesInContext:(id)arg1;
- (void)closeCardsForDeletesInContext:(id)arg1;
- (void)_updateCardsForChangesInNotification:(id)arg1;
- (void)personWindowDidClose:(id)arg1;
- (id)cards;
- (id)cardForPerson:(id)arg1 showUnified:(BOOL)arg2;
- (id)cardForPerson:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

