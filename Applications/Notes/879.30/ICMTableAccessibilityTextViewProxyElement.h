//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

@class ICTableAccessibilityController;

@interface ICMTableAccessibilityTextViewProxyElement : NSAccessibilityElement
{
    ICTableAccessibilityController *_tableAXController;
}

@property(readonly, nonatomic) ICTableAccessibilityController *tableAXController; // @synthesize tableAXController=_tableAXController;
- (void).cxx_destruct;
- (struct _NSRange)rangeInTextViewFromRangeInSelectedCell:(struct _NSRange)arg1;
- (struct _NSRange)rangeInSelectedCellFromRangeInTextView:(struct _NSRange)arg1;
- (id)tableColumnTextView;
- (struct _NSRange)cellTextRangeInTextView;
- (id)accessibilityAttributedStringForRange:(struct _NSRange)arg1;
- (id)accessibilityStringForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityStyleRangeForIndex:(long long)arg1;
- (id)accessibilityRTFForRange:(struct _NSRange)arg1;
- (struct CGRect)accessibilityFrameForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRangeForIndex:(long long)arg1;
- (struct _NSRange)accessibilityRangeForPosition:(struct CGPoint)arg1;
- (id)accessibilitySelectedTextRanges;
- (struct _NSRange)accessibilitySelectedTextRange;
- (long long)accessibilityNumberOfCharacters;
- (struct _NSRange)accessibilityVisibleCharacterRange;
- (id)accessibilityAttributeValue:(id)arg1 forParameter:(id)arg2;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityAttributeNames;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityParent;
- (BOOL)isAccessibilityElement;
- (id)initWithTableAccessibilityController:(id)arg1;

@end

