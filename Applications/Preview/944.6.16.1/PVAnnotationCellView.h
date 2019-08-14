//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSColor, NSLayoutConstraint, NSTextField, NSView, PVPDFPopupStickyNoteView;

@interface PVAnnotationCellView : NSTableCellView
{
    NSView *_containerView;
    NSView *_contentColorLine;
    NSTextField *_authorText;
    NSTextField *_pageIndexText;
    NSTextField *_contentText;
    PVPDFPopupStickyNoteView *_noteView;
    NSColor *_noteColor;
    NSLayoutConstraint *_contextTextTopToPageIndexBottomConstraint;
    NSLayoutConstraint *_noteTopToContentTextBottomConstraint;
    NSLayoutConstraint *_noteTopToPageIndexTextBottomConstraint;
    NSLayoutConstraint *_viewBottomToNoteBottomConstraint;
    NSLayoutConstraint *_viewBottomToContentTextBottomConstraint;
}

+ (id)attributedNoteStringForStringValue:(id)arg1;
+ (id)attributedPageNumberStringForStringValue:(id)arg1;
+ (id)attributedContentStringForStringValue:(id)arg1;
+ (double)withNoteOnlyBaseHeight;
+ (double)withContentOnlyBaseHeight;
+ (double)withContentAndNoteBaseHeight;
@property(retain) NSLayoutConstraint *viewBottomToContentTextBottomConstraint; // @synthesize viewBottomToContentTextBottomConstraint=_viewBottomToContentTextBottomConstraint;
@property(retain) NSLayoutConstraint *viewBottomToNoteBottomConstraint; // @synthesize viewBottomToNoteBottomConstraint=_viewBottomToNoteBottomConstraint;
@property(retain) NSLayoutConstraint *noteTopToPageIndexTextBottomConstraint; // @synthesize noteTopToPageIndexTextBottomConstraint=_noteTopToPageIndexTextBottomConstraint;
@property(retain) NSLayoutConstraint *noteTopToContentTextBottomConstraint; // @synthesize noteTopToContentTextBottomConstraint=_noteTopToContentTextBottomConstraint;
@property(retain) NSLayoutConstraint *contextTextTopToPageIndexBottomConstraint; // @synthesize contextTextTopToPageIndexBottomConstraint=_contextTextTopToPageIndexBottomConstraint;
@property(retain, nonatomic) NSColor *noteColor; // @synthesize noteColor=_noteColor;
@property(retain) PVPDFPopupStickyNoteView *noteView; // @synthesize noteView=_noteView;
@property(retain) NSTextField *contentText; // @synthesize contentText=_contentText;
@property(retain) NSTextField *pageIndexText; // @synthesize pageIndexText=_pageIndexText;
@property(retain) NSTextField *authorText; // @synthesize authorText=_authorText;
@property(retain) NSView *contentColorLine; // @synthesize contentColorLine=_contentColorLine;
@property(retain) NSView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)select;
- (void)_setTextColorForBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)viewWillDraw;
- (void)resetChangeableConstraints;
- (void)setObjectValue:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

@end

