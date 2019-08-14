//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSBox.h>

#import "NSDraggingDestination-Protocol.h"

@class NSCollectionView, NSString, TTagsPrefTableView;

@interface TFavoritesBox : NSBox <NSDraggingDestination>
{
    TTagsPrefTableView *_tagsTableView;
    NSCollectionView *_favoritesView;
    long long _currentProposedIndex;
}

@property(nonatomic) long long currentProposedIndex; // @synthesize currentProposedIndex=_currentProposedIndex;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)setFavoritesView:(id)arg1;
- (void)setTagsTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

