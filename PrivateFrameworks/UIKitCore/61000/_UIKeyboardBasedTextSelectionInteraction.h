//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/_UIKeyboardTextSelectionInteraction.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedTextSelectionInteraction : _UIKeyboardTextSelectionInteraction
{
}

- (void)oneFingerForcePress:(id)arg1;
- (void)oneFingerForcePan:(id)arg1;
- (void)endOneFingerSelectWithExecutionContext:(id)arg1;
- (void)updateOneFingerSelectWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)beginOneFingerSelectWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint)arg1 viaDrag:(BOOL)arg2;
- (BOOL)enclosingScrollViewIsScrolling;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)owner;

@end
