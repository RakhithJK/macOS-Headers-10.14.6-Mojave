//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABCardCollectionRowView.h>

#import <AddressBook/ABNoteTextViewDelegate-Protocol.h>
#import <AddressBook/NSTextViewDelegate-Protocol.h>

@class NSArray, NSString;

@interface ABCardCollectionNoteRowView : ABCardCollectionRowView <ABNoteTextViewDelegate, NSTextViewDelegate>
{
    NSArray *_noteConstraints;
}

+ (CDUnknownBlockType)rangeComparator;
- (void).cxx_destruct;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)textViewDidResignFirstResponder:(id)arg1;
- (void)textViewDidBecomeFirstResponder:(id)arg1;
- (void)highlightSearchTerms:(id)arg1;
- (id)unionedRangeValues:(id)arg1;
- (id)rangesMatchingSearchTerms:(id)arg1;
- (id)valueTextView;
- (double)textViewWidth;
- (double)textViewHeight;
- (struct CGSize)intrinsicContentSize;
- (void)setValueEditable:(BOOL)arg1;
- (void)setValueSelectable:(BOOL)arg1;
- (BOOL)hasValue;
- (unsigned long long)maxInsertionPoint;
@property(nonatomic) unsigned long long noteInsertionPoint;
- (BOOL)isValidRange:(struct _NSRange)arg1;
- (void)setSelectedRanges:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)mouseDown:(id)arg1;
- (void)generateConstraints;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)noteTextView;
- (void)applyValueTextColor:(id)arg1;
- (void)updateValueFontWithFont:(id)arg1;
- (void)setValueView:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

