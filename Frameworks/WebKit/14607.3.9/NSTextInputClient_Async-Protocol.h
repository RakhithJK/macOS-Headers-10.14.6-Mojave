//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@protocol NSTextInputClient_Async
- (void)characterIndexForPoint:(struct CGPoint)arg1 completionHandler:(void (^)(unsigned long long))arg2;
- (void)firstRectForCharacterRange:(struct _NSRange)arg1 completionHandler:(void (^)(struct CGRect, struct _NSRange))arg2;
- (void)attributedSubstringForProposedRange:(struct _NSRange)arg1 completionHandler:(void (^)(NSAttributedString *, struct _NSRange))arg2;
- (void)hasMarkedTextWithCompletionHandler:(void (^)(BOOL))arg1;
- (void)markedRangeWithCompletionHandler:(void (^)(struct _NSRange))arg1;
- (void)selectedRangeWithCompletionHandler:(void (^)(struct _NSRange))arg1;

@optional
- (void)drawsVerticallyForCharacterAtIndex:(unsigned long long)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)baselineDeltaForCharacterAtIndex:(unsigned long long)arg1 completionHandler:(void (^)(double))arg2;
- (void)fractionOfDistanceThroughGlyphForPoint:(struct CGPoint)arg1 completionHandler:(void (^)(double))arg2;
- (void)attributedStringWithCompletionHandler:(void (^)(NSAttributedString *))arg1;
@end

