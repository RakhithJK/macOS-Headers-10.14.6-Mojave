//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/ICNoteContext.h>

@interface ICNoteContext (LongRunningOperationUndoSupport)
- (void)postNotificationsForTrashingOrDeletingNoteIDs:(id)arg1;
- (void)postNotificationsForUntrashingOrUndeletingNoteIDs:(id)arg1;
- (void)undoablyMoveNotes:(id)arg1 toFolder:(id)arg2 actionName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)undoablyMoveNoteIDs:(id)arg1 toFolderIDs:(id)arg2 actionName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)undoablyUnmoveNoteIDs:(id)arg1 toFolderIDs:(id)arg2 originalToCopyNoteIDs:(id)arg3 actionName:(id)arg4 noteToFolderIDsForRedo:(id)arg5;
- (void)undoablyTrashOrDeleteNotes:(id)arg1 actionName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)undoablyTrashOrDeleteNoteIDs:(id)arg1 actionName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)undoablyUntrashOrUndeleteNoteIDs:(id)arg1 noteIDsToFolderIDs:(id)arg2 actionName:(id)arg3;
- (void)undoablyProcessNoteIDs:(id)arg1 progressFormatString:(id)arg2 processNoteBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)unmarkNoteAndAttachmentsForDeletion:(id)arg1;
- (void)markNoteAndAttachmentsForDeletion:(id)arg1;
@end

