//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSTextViewDelegate-Protocol.h"

@class NSAttributedString, NSColor, NSString, NSUndoManager, PVIntrinsicSizingTextView;

@interface PVPDFPopupStickyNoteView : NSView <NSTextViewDelegate>
{
    PVIntrinsicSizingTextView *_textView;
    NSColor *_noteColor;
    NSAttributedString *_noteText;
    NSUndoManager *_textViewUndoManager;
}

@property(retain) NSUndoManager *textViewUndoManager; // @synthesize textViewUndoManager=_textViewUndoManager;
@property(retain, nonatomic) NSAttributedString *noteText; // @synthesize noteText=_noteText;
@property(retain, nonatomic) NSColor *noteColor; // @synthesize noteColor=_noteColor;
@property(retain) PVIntrinsicSizingTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)_createTextView;
- (void)_commonInit;
- (void)textDidEndEditing:(id)arg1;
- (id)undoManagerForTextView:(id)arg1;
- (BOOL)allowsVibrancy;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

