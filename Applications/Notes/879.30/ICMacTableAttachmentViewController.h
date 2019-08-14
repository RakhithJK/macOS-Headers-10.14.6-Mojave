//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICTableAttachmentViewController.h"

#import "ICMTableAttachmentTouchBarControllerDelegate-Protocol.h"
#import "NSGestureRecognizerDelegate-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"

@class ICMNoteEditorController, ICMTableAttachmentTouchBarController, ICTableColumnTextView, NSIndexSet, NSString;

@interface ICMacTableAttachmentViewController : ICTableAttachmentViewController <NSTextViewDelegate, NSGestureRecognizerDelegate, ICMTableAttachmentTouchBarControllerDelegate>
{
    BOOL _isSelectingTextWithMouse;
    BOOL _isChangingFont;
    BOOL _isChangingTypingAttributeFontByFontPanel;
    ICTableColumnTextView *_activeTextView;
    ICMTableAttachmentTouchBarController *_tableTouchBarController;
    ICMTableAttachmentTouchBarController *_textViewTouchBarController;
    unsigned long long _textSelectionAnchorIndex;
    unsigned long long _menuTemporarySelectedBIUS;
    NSIndexSet *_menuTemporarySelectedStyles;
    struct CGPoint _previousViewOrigin;
}

+ (id)keyPathsForValuesAffectingDfrBIUEnabled;
+ (id)keyPathsForValuesAffectingTouchBar;
+ (id)keyPathsForValuesAffectingNoteEditorController;
@property(nonatomic) BOOL isChangingTypingAttributeFontByFontPanel; // @synthesize isChangingTypingAttributeFontByFontPanel=_isChangingTypingAttributeFontByFontPanel;
@property(nonatomic) BOOL isChangingFont; // @synthesize isChangingFont=_isChangingFont;
@property(retain, nonatomic) NSIndexSet *menuTemporarySelectedStyles; // @synthesize menuTemporarySelectedStyles=_menuTemporarySelectedStyles;
@property(nonatomic) unsigned long long menuTemporarySelectedBIUS; // @synthesize menuTemporarySelectedBIUS=_menuTemporarySelectedBIUS;
@property(nonatomic) struct CGPoint previousViewOrigin; // @synthesize previousViewOrigin=_previousViewOrigin;
@property(nonatomic) BOOL isSelectingTextWithMouse; // @synthesize isSelectingTextWithMouse=_isSelectingTextWithMouse;
@property(nonatomic) unsigned long long textSelectionAnchorIndex; // @synthesize textSelectionAnchorIndex=_textSelectionAnchorIndex;
@property(retain, nonatomic) ICMTableAttachmentTouchBarController *textViewTouchBarController; // @synthesize textViewTouchBarController=_textViewTouchBarController;
@property(retain, nonatomic) ICMTableAttachmentTouchBarController *tableTouchBarController; // @synthesize tableTouchBarController=_tableTouchBarController;
@property(retain, nonatomic) ICTableColumnTextView *activeTextView; // @synthesize activeTextView=_activeTextView;
- (void).cxx_destruct;
- (void)selectCurrentRowForAccessibility;
- (void)selectCurrentColumnForAccessibility;
- (void)setupColumnRowButtonsAccessibility;
- (void)applyUndoGroup:(id)arg1;
- (void)endCellEditingSessionWithTextView:(id)arg1;
- (void)willBeginEditingWithTextView:(id)arg1;
- (id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4;
- (id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3;
- (void)scrollToCaretIfNeededForTextView:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (id)textView:(id)arg1 willChangeSelectionFromCharacterRanges:(id)arg2 toCharacterRanges:(id)arg3;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)textShouldBeginEditing:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2;
- (void)dragCellRange:(id)arg1;
- (void)shiftSelectCellRange:(id)arg1;
- (void)mouseUpOnTextView:(id)arg1;
- (id)textView:(id)arg1 selectedRanges:(id)arg2 withLocation:(struct CGPoint)arg3 stillSelecting:(BOOL)arg4;
- (void)textView:(id)arg1 mouseDown:(id)arg2;
- (unsigned long long)beginEditingAtLocation:(struct CGPoint)arg1;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1 columnID:(id *)arg2 rowID:(id *)arg3;
- (id)beginEditingForSelectionView:(id)arg1;
- (void)deleteSelection:(id)arg1;
- (void)copySelection:(id)arg1;
- (id)notesDataFromPasteboard;
- (id)soloPlainTextStringFromPasteboard;
- (id)icTableDataFromPasteboard;
- (void)draggedColumnOrRow:(id)arg1;
- (void)columnRowDisclosurePressed:(id)arg1;
- (void)rowButtonPressed:(id)arg1;
- (void)columnButtonPressed:(id)arg1;
- (void)updateChrome;
- (void)setupColumnRowButtonsEventHandling;
- (void)setupColumnRowButtons;
- (void)didUpdateContentSize;
- (void)unselectColumnRow;
- (void)showButtonsAtColumn:(id)arg1 row:(id)arg2;
- (unsigned long long)preferredNavigationSelection;
- (BOOL)cursorPrefersWordBoundary;
- (void)makeDelegateOfTextView:(id)arg1;
- (void)ic_resignFirstResponder:(struct NSView *)arg1;
- (void)ic_makeFirstResponder:(struct NSView *)arg1;
- (void)didClickEmptyTable:(id)arg1;
- (void)setupTableTextView:(id)arg1;
- (void)setupEventHandling;
- (struct NSView *)dragSnapshotFromRect:(struct CGRect)arg1 afterScreenUpdates:(BOOL)arg2;
- (void)beginEditingNoteAtRange:(struct _NSRange)arg1;
- (void)scrollToRect:(struct CGRect)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)adjustScrollPositionByOffset:(struct CGPoint)arg1;
- (void)updateAccentColor;
- (void)accentColorDidChange:(id)arg1;
- (void)viewFrameChanged:(id)arg1;
- (double)scrollerOutset;
- (void)tableDidScroll:(id)arg1;
- (void)fontPanelDidChangeFont:(id)arg1;
- (void)fontPanelWillChangeFont:(id)arg1;
- (void)makeBaseWritingDirectionNatural:(id)arg1;
- (void)makeBaseWritingDirectionRightToLeft:(id)arg1;
- (void)makeBaseWritingDirectionLeftToRight:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)alignLeft:(id)arg1;
- (void)alignCenter:(id)arg1;
@property(readonly, nonatomic) BOOL dfrBIUEnabled;
- (void)setTextStyle:(id)arg1;
- (void)handleFontChangeWithBlock:(CDUnknownBlockType)arg1;
- (void)changeColor:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)addFontTrait:(id)arg1;
- (void)strikethrough:(id)arg1;
- (void)underline:(id)arg1;
- (id)currentStylesAndBIUS:(unsigned long long *)arg1 forTouchBarController:(id)arg2;
- (void)touchBarController:(id)arg1 biuButtonPressedWithStyle:(unsigned long long)arg2 toggleOn:(BOOL)arg3;
- (BOOL)validateMenuItem:(id)arg1;
- (void)splitViewDidResize:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)preferredScrollerStyleChanged:(id)arg1;
- (void)viewDidLayout;
- (void)viewWillLayout;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;
- (void)updateTableTouchBarControllerIfNecessary;
- (id)touchBar;
- (id)auxiliaryTextViewHost;
@property(readonly, nonatomic) ICMNoteEditorController *noteEditorController;
- (struct NSScrollView *)noteScrollView;
- (struct CGRect)editingViewport;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

