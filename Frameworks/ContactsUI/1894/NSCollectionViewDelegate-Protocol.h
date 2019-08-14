//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class NSArray, NSCollectionView, NSCollectionViewItem, NSCollectionViewLayout, NSCollectionViewTransitionLayout, NSDraggingSession, NSEvent, NSImage, NSIndexPath, NSIndexSet, NSPasteboard, NSSet, NSString, NSURL, NSView;
@protocol NSDraggingInfo, NSPasteboardWriting;

@protocol NSCollectionViewDelegate <NSObject>

@optional
- (NSCollectionViewTransitionLayout *)collectionView:(NSCollectionView *)arg1 transitionLayoutForOldLayout:(NSCollectionViewLayout *)arg2 newLayout:(NSCollectionViewLayout *)arg3;
- (void)collectionView:(NSCollectionView *)arg1 didEndDisplayingSupplementaryView:(NSView *)arg2 forElementOfKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)collectionView:(NSCollectionView *)arg1 didEndDisplayingItem:(NSCollectionViewItem *)arg2 forRepresentedObjectAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(NSCollectionView *)arg1 willDisplaySupplementaryView:(NSView *)arg2 forElementKind:(NSString *)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)collectionView:(NSCollectionView *)arg1 willDisplayItem:(NSCollectionViewItem *)arg2 forRepresentedObjectAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(NSCollectionView *)arg1 didDeselectItemsAtIndexPaths:(NSSet *)arg2;
- (void)collectionView:(NSCollectionView *)arg1 didSelectItemsAtIndexPaths:(NSSet *)arg2;
- (NSSet *)collectionView:(NSCollectionView *)arg1 shouldDeselectItemsAtIndexPaths:(NSSet *)arg2;
- (NSSet *)collectionView:(NSCollectionView *)arg1 shouldSelectItemsAtIndexPaths:(NSSet *)arg2;
- (void)collectionView:(NSCollectionView *)arg1 didChangeItemsAtIndexPaths:(NSSet *)arg2 toHighlightState:(long long)arg3;
- (NSSet *)collectionView:(NSCollectionView *)arg1 shouldChangeItemsAtIndexPaths:(NSSet *)arg2 toHighlightState:(long long)arg3;
- (void)collectionView:(NSCollectionView *)arg1 updateDraggingItemsForDrag:(id <NSDraggingInfo>)arg2;
- (void)collectionView:(NSCollectionView *)arg1 draggingSession:(NSDraggingSession *)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (void)collectionView:(NSCollectionView *)arg1 draggingSession:(NSDraggingSession *)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItemsAtIndexes:(NSIndexSet *)arg4;
- (void)collectionView:(NSCollectionView *)arg1 draggingSession:(NSDraggingSession *)arg2 willBeginAtPoint:(struct CGPoint)arg3 forItemsAtIndexPaths:(NSSet *)arg4;
- (id <NSPasteboardWriting>)collectionView:(NSCollectionView *)arg1 pasteboardWriterForItemAtIndex:(unsigned long long)arg2;
- (id <NSPasteboardWriting>)collectionView:(NSCollectionView *)arg1 pasteboardWriterForItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)collectionView:(NSCollectionView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 index:(long long)arg3 dropOperation:(long long)arg4;
- (BOOL)collectionView:(NSCollectionView *)arg1 acceptDrop:(id <NSDraggingInfo>)arg2 indexPath:(NSIndexPath *)arg3 dropOperation:(long long)arg4;
- (unsigned long long)collectionView:(NSCollectionView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 proposedIndex:(long long *)arg3 dropOperation:(long long *)arg4;
- (unsigned long long)collectionView:(NSCollectionView *)arg1 validateDrop:(id <NSDraggingInfo>)arg2 proposedIndexPath:(id *)arg3 dropOperation:(long long *)arg4;
- (NSImage *)collectionView:(NSCollectionView *)arg1 draggingImageForItemsAtIndexes:(NSIndexSet *)arg2 withEvent:(NSEvent *)arg3 offset:(struct CGPoint *)arg4;
- (NSImage *)collectionView:(NSCollectionView *)arg1 draggingImageForItemsAtIndexPaths:(NSSet *)arg2 withEvent:(NSEvent *)arg3 offset:(struct CGPoint *)arg4;
- (NSArray *)collectionView:(NSCollectionView *)arg1 namesOfPromisedFilesDroppedAtDestination:(NSURL *)arg2 forDraggedItemsAtIndexes:(NSIndexSet *)arg3;
- (NSArray *)collectionView:(NSCollectionView *)arg1 namesOfPromisedFilesDroppedAtDestination:(NSURL *)arg2 forDraggedItemsAtIndexPaths:(NSSet *)arg3;
- (BOOL)collectionView:(NSCollectionView *)arg1 writeItemsAtIndexes:(NSIndexSet *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (BOOL)collectionView:(NSCollectionView *)arg1 writeItemsAtIndexPaths:(NSSet *)arg2 toPasteboard:(NSPasteboard *)arg3;
- (BOOL)collectionView:(NSCollectionView *)arg1 canDragItemsAtIndexes:(NSIndexSet *)arg2 withEvent:(NSEvent *)arg3;
- (BOOL)collectionView:(NSCollectionView *)arg1 canDragItemsAtIndexPaths:(NSSet *)arg2 withEvent:(NSEvent *)arg3;
@end

