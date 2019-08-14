//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSTextViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSScrollView, NSString, NSTextView, NVRAPPlaceholderTextField, NVRAPTextView, RAPCommentQuestion;

__attribute__((visibility("hidden")))
@interface NVRAPCommentsView : NSView <NSTextViewDelegate>
{
    NVRAPPlaceholderTextField *_placeholderTextField;
    NSTextView *_textView;
    RAPCommentQuestion *_commentQuestion;
    NSLayoutConstraint *_commentHeightConstraints;
    NVRAPTextView *_remainingCharactersLabel;
    NSScrollView *_scrollview;
    NSArray *_scrollViewConstraints;
}

@property(readonly, copy, nonatomic) NSArray *scrollViewConstraints; // @synthesize scrollViewConstraints=_scrollViewConstraints;
@property(retain, nonatomic) NSScrollView *scrollview; // @synthesize scrollview=_scrollview;
@property(retain, nonatomic) NVRAPTextView *remainingCharactersLabel; // @synthesize remainingCharactersLabel=_remainingCharactersLabel;
@property __weak NSLayoutConstraint *commentHeightConstraints; // @synthesize commentHeightConstraints=_commentHeightConstraints;
@property(retain, nonatomic) RAPCommentQuestion *commentQuestion; // @synthesize commentQuestion=_commentQuestion;
@property(readonly, nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NVRAPPlaceholderTextField *placeholderTextField; // @synthesize placeholderTextField=_placeholderTextField;
- (void).cxx_destruct;
- (void)updateRemainingCharactersNumber;
- (void)updatePlaceholderVisibility;
- (void)setPlaceHolderText:(id)arg1;
- (void)textDidChange;
- (void)setText:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textDidChange:(id)arg1;
@property(readonly, nonatomic) NSView *accessibleView;
- (void)openCommentsView:(BOOL)arg1 animated:(BOOL)arg2;
- (void)openCommentsView:(BOOL)arg1;
- (void)updateLayer;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

