//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/ICNote.h>

@class ICCollaborationColorManager, NSArray, PKInk, TTTextStorage;

@interface ICNote (UI)
- (void)updatePKDrawingsWithHandwritingRecognitionEnabled:(BOOL)arg1;
@property(nonatomic, getter=isHandwritingRecognitionEnabled) BOOL handwritingRecognitionEnabled;
@property(copy, nonatomic) PKInk *selectedInk;
- (id)checklistStyleAccessibilityDescriptionForRange:(struct _NSRange)arg1;
- (void)announceAccessibilitySelectionChangedByMerge;
- (void)announceAccessibilitySelectionChangedByMergeWithSavedSelections:(id)arg1 beforeMergeTimestamp:(id)arg2;
- (void)notifyTextViewsNoteDidMerge;
- (void)notifyTextViewsNoteWillMerge;
- (void)textStorageDidChange:(id)arg1;
- (void)textStorageWillChange:(id)arg1;
- (void)textStorageDidPerformUndo:(id)arg1;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)filterAttachmentsInTextStorage:(id)arg1 range:(struct _NSRange)arg2;
- (void)createMissingAttachmentsInTextStorage;
- (void)textStorageDidProcessEditing:(id)arg1;
- (void)textStorageWillProcessEditing:(id)arg1;
- (void)updateModificationDateAndChangeCountAndSaveImmediately;
- (void)updateModificationDateAndChangeCountAndSaveAfterDelay;
- (void)updateModificationDateAndChangeCount;
- (void)saveAfterDelay;
- (void)save;
- (struct NSImage *)thumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 imageScaling:(unsigned long long *)arg3 showAsFileIcon:(char *)arg4 isMovie:(char *)arg5 movieDuration:(CDStruct_1b6d18a9 *)arg6 attachment:(id *)arg7;
- (struct NSImage *)thumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 imageScaling:(unsigned long long *)arg3 showAsFileIcon:(char *)arg4 isMovie:(char *)arg5 movieDuration:(CDStruct_1b6d18a9 *)arg6;
- (id)attachmentFromRemoteFileWrapper:(id)arg1;
- (id)attachmentFromLegacyAttachmentFileWrapper:(id)arg1;
- (id)attachmentFromStandardFileWrapper:(id)arg1;
- (id)attachmentFromInlineDrawingAttachment:(id)arg1;
- (id)attachmentFromTableData:(id)arg1;
- (id)attachmentFromObject:(id)arg1 createIfNecessary:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *attachmentActivityItemsForSharing;
@property(readonly, nonatomic) long long primaryWritingDirection;
- (id)uiAttributedString;
@property(readonly, nonatomic) TTTextStorage *textStorageWithoutCreating;
@property(readonly, nonatomic) TTTextStorage *textStorage;
@property(readonly, retain, nonatomic) ICCollaborationColorManager *collaborationColorManager;
- (void)didMergeNoteDocument:(id)arg1 withUserInfo:(id)arg2;
- (void)willMergeNoteDocument:(id)arg1 withUserInfo:(id)arg2;
- (void)noteDidReplaceDocument;
- (void)noteDidSaveAndClearDecryptedData;
- (BOOL)shouldReleaseTextStorageWhenTurningIntoFault;
- (void)noteWillTurnIntoFault;
@end

