//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MOMediaViewDelegate-Protocol.h"

@class IPXCollectionsLayoutTrackingArea, IPXCollectionsView, NSArray, NSDraggingSession, NSEvent, NSImage, NSIndexPath, NSIndexSet, NSView;
@protocol IPXCollectionsViewContentObject, NSDraggingInfo, NSPasteboardWriting;

@protocol IPXCollectionsViewDelegate <MOMediaViewDelegate>

@optional
- (void)collectionsViewCanceledDragOperation:(IPXCollectionsView *)arg1;
- (void)collectionsView:(IPXCollectionsView *)arg1 concludeDragOperation:(id <NSDraggingInfo>)arg2 inView:(NSView *)arg3;
- (void)collectionsView:(IPXCollectionsView *)arg1 willConcludeDragOperation:(id <NSDraggingInfo>)arg2 inView:(NSView *)arg3;
- (BOOL)collectionsView:(IPXCollectionsView *)arg1 acceptDragOperation:(id <NSDraggingInfo>)arg2 inView:(NSView *)arg3;
- (BOOL)collectionsView:(IPXCollectionsView *)arg1 shouldAcceptDragOperation:(id <NSDraggingInfo>)arg2 inView:(NSView *)arg3;
- (void)collectionsView:(IPXCollectionsView *)arg1 drag:(id <NSDraggingInfo>)arg2 exitedView:(NSView *)arg3;
- (unsigned long long)collectionsView:(IPXCollectionsView *)arg1 drag:(id <NSDraggingInfo>)arg2 movedWithinView:(NSView *)arg3;
- (unsigned long long)collectionsView:(IPXCollectionsView *)arg1 drag:(id <NSDraggingInfo>)arg2 enteredView:(NSView *)arg3;
- (NSArray *)draggedTypesAcceptedByCollectionsView:(IPXCollectionsView *)arg1;
- (NSImage *)collectionsView:(IPXCollectionsView *)arg1 draggingImageForSection:(long long)arg2;
- (void)collectionsView:(IPXCollectionsView *)arg1 willStartDraggingSession:(NSDraggingSession *)arg2 forSections:(NSIndexSet *)arg3;
- (id <NSPasteboardWriting>)collectionsView:(IPXCollectionsView *)arg1 pasteboardObjectForSection:(long long)arg2;
- (BOOL)collectionsView:(IPXCollectionsView *)arg1 canDragSections:(NSIndexSet *)arg2;
- (void)collectionsView:(IPXCollectionsView *)arg1 endedDraggingSession:(NSDraggingSession *)arg2 forItemsAtIndexPaths:(NSArray *)arg3 operation:(unsigned long long)arg4;
- (NSImage *)collectionsView:(IPXCollectionsView *)arg1 draggingImageOfSize:(struct CGSize)arg2 forContentObject:(id <IPXCollectionsViewContentObject>)arg3 atIndexPath:(NSIndexPath *)arg4;
- (void)collectionsView:(IPXCollectionsView *)arg1 willStartDraggingSession:(NSDraggingSession *)arg2 forItemsAtIndexPaths:(NSArray *)arg3 event:(NSEvent *)arg4;
- (unsigned long long)collectionsView:(IPXCollectionsView *)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (id <NSPasteboardWriting>)collectionsView:(IPXCollectionsView *)arg1 pasteboardObjectForContentObject:(id <IPXCollectionsViewContentObject>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (BOOL)collectionsView:(IPXCollectionsView *)arg1 canDragItemsAtIndexPaths:(NSArray *)arg2;
- (void)collectionsView:(IPXCollectionsView *)arg1 mouseExitedLayoutTrackingArea:(IPXCollectionsLayoutTrackingArea *)arg2 withEvent:(NSEvent *)arg3;
- (void)collectionsView:(IPXCollectionsView *)arg1 mouseMovedInsideLayoutTrackingArea:(IPXCollectionsLayoutTrackingArea *)arg2 withEvent:(NSEvent *)arg3;
- (void)collectionsView:(IPXCollectionsView *)arg1 mouseEnteredLayoutTrackingArea:(IPXCollectionsLayoutTrackingArea *)arg2 withEvent:(NSEvent *)arg3;
@end

