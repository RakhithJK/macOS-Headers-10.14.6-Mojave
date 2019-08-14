//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTextView;

@interface ABSuggestedValueViewControllerSnippetHelper : NSObject
{
    NSString *_snippet;
    NSTextView *_textView;
    struct _NSRange _range;
}

+ (struct _NSRange)rangeOfTrimmedString:(id)arg1;
+ (struct _NSRange)rangeOfTrimmedString:(id)arg1 atSubstringRange:(struct _NSRange)arg2;
+ (void)enumerateLinesInSnippet:(id)arg1 range:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (id)selectionAttributes;
@property(readonly) NSTextView *textView; // @synthesize textView=_textView;
@property(readonly) struct _NSRange range; // @synthesize range=_range;
@property(readonly, copy) NSString *snippet; // @synthesize snippet=_snippet;
- (void).cxx_destruct;
- (void)scrollSelectionToVisible;
- (void)enumerateLinesUsingBlock:(CDUnknownBlockType)arg1;
- (id)selectedRanges;
- (void)applyHighlighting;
- (void)applySelection;
- (void)applyStringValue;
- (void)applyNonEmptySnippet;
- (void)applyEmptySnippet;
- (void)updateTextView;
- (id)initWithSnippet:(id)arg1 selectedRange:(struct _NSRange)arg2 textView:(id)arg3;

@end

