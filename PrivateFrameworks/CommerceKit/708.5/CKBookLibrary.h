//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/CKStoreDAAPLibraryObserver-Protocol.h>

@class CKStoreDAAPLibrary, NSArray, NSMutableDictionary, NSPredicate, NSString;
@protocol CKBookLibraryDelegate;

@interface CKBookLibrary : NSObject <CKStoreDAAPLibraryObserver>
{
    long long _libraryType;
    NSArray *_sortDescriptors;
    NSPredicate *_searchPredicate;
    id <CKBookLibraryDelegate> _delegate;
    CKStoreDAAPLibrary *_library;
    NSMutableDictionary *_observers;
    id _token;
}

+ (BOOL)hasSampleWithItemIdentifier:(id)arg1 returningMetadata:(id *)arg2;
+ (id)shelfSortDescriptors;
+ (id)categorySortDescriptors;
+ (id)authorSortDescriptors;
+ (id)titleSortDescriptors;
+ (id)_sharedDAAPLibrary;
@property(retain) id token; // @synthesize token=_token;
@property(retain) NSMutableDictionary *observers; // @synthesize observers=_observers;
@property(readonly) CKStoreDAAPLibrary *library; // @synthesize library=_library;
@property(nonatomic) __weak id <CKBookLibraryDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) NSPredicate *searchPredicate; // @synthesize searchPredicate=_searchPredicate;
@property(copy) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly) long long libraryType; // @synthesize libraryType=_libraryType;
- (void).cxx_destruct;
- (void)pollForPurchasedBooks;
- (id)_bookFromDAAPItem:(id)arg1;
- (void)storeDAAPLibrary:(id)arg1 addedItems:(id)arg2 removedItems:(id)arg3;
- (void)removeObserver:(id)arg1;
- (id)addObserver:(id)arg1;
- (id)_localBooks;
- (id)bookWithItemIdentifier:(unsigned long long)arg1;
- (id)_filteredAndSortedLocalItems;
- (id)_filteredAndSortedPurchasedItems;
- (id)objectInBooksAtIndex:(unsigned long long)arg1;
- (id)booksAtIndexes:(id)arg1;
- (unsigned long long)countOfBooks;
- (id)initWithLibraryType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

