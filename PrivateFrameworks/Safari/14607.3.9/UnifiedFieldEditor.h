//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/TextFieldEditor.h>

#import <Safari/NSTextInputClient_IncrementalSearch-Protocol.h>
#import <Safari/UnifiedFieldLayoutManagerDelegate-Protocol.h>

@class NSString;
@protocol UnifiedFieldEditorDelegate;

__attribute__((visibility("hidden")))
@interface UnifiedFieldEditor : TextFieldEditor <NSTextInputClient_IncrementalSearch, UnifiedFieldLayoutManagerDelegate>
{
    NSString *_previousMarkedText;
    BOOL _selectionWasAutocompleted;
    BOOL _isAdjustingAutocompleteSelection;
    id <UnifiedFieldEditorDelegate> _unifiedFieldEditorDelegate;
}

@property(nonatomic) __weak id <UnifiedFieldEditorDelegate> unifiedFieldEditorDelegate; // @synthesize unifiedFieldEditorDelegate=_unifiedFieldEditorDelegate;
@property(nonatomic, getter=isAdjustingAutocompleteSelection) BOOL adjustingAutocompleteSelection; // @synthesize adjustingAutocompleteSelection=_isAdjustingAutocompleteSelection;
@property(nonatomic) BOOL selectionWasAutocompleted; // @synthesize selectionWasAutocompleted=_selectionWasAutocompleted;
- (void).cxx_destruct;
- (BOOL)wouldHandleEvent:(id)arg1;
- (unsigned long long)incrementalSearchClientGeometry;
- (id)menuForEvent:(id)arg1;
- (id)selectedTextAttributes;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (id)writablePasteboardTypes;
- (BOOL)_shouldWriteSearchTermsToPasteboardAsLink;
- (BOOL)_allTextSelected;
- (id)_replacementStringforWritingToPasteboard;
- (void)smartInsertForString:(id)arg1 replacingRange:(struct _NSRange)arg2 beforeString:(id *)arg3 afterString:(id *)arg4;
- (BOOL)shouldDrawInsertionPoint;
- (void)setSelectedRanges:(id)arg1 affinity:(unsigned long long)arg2 stillSelecting:(BOOL)arg3;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (BOOL)pasteReplacesTabsWithSpaces;
- (void)insertText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)didChangeText;
- (void)_notifyFieldIfMarkedTextDidChange;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)acceptableDragTypes;
- (BOOL)canSmoothFontsInLayer;
- (void)mouseDown:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (double)extraTrailingPaddingForSelectionRectInUnifiedFieldLayoutManager:(id)arg1;
- (id)init;

@end
