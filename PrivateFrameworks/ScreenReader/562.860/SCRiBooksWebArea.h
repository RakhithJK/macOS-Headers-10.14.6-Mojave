//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRWebText.h>

@class SCRTextMarker;

__attribute__((visibility("hidden")))
@interface SCRiBooksWebArea : SCRWebText
{
    struct CGRect _iBooksCachedBounds;
    SCRTextMarker *_iBooksCachedFirstPositionTextMarker;
    SCRTextMarker *_iBooksCachedLastPositionTextMarker;
    SCRTextMarker *_iBooksCachedWebAreaFirstPositionTextMarker;
    SCRTextMarker *_iBooksCachedWebAreaLastPositionTextMarker;
}

- (void).cxx_destruct;
- (id)valueDescription;
- (void)addTextBoundryToRequest:(id)arg1 edge:(int)arg2;
- (void)echoAttributedString:(id)arg1 variants:(id)arg2 request:(id)arg3;
- (BOOL)performBrailleWrapRightWithOutputRequest:(id)arg1;
- (BOOL)_performBrailleWrapRightWithOutputRequest:(id)arg1;
- (BOOL)performBrailleWrapLeftWithOutputRequest:(id)arg1;
- (BOOL)_performBrailleWrapLeftWithOutputRequest:(id)arg1 skipCurrentLine:(struct __CFBoolean *)arg2;
- (void)moveVOCToSelectionRange;
- (BOOL)handleReadContentsCallbackForEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)interactPageDownCommandWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageUpCommandWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactPageUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (unsigned long long)groupBehavior;
- (BOOL)iBooksPerformBlockCheckingForScrolling:(CDUnknownBlockType)arg1 withEvent:(id)arg2 request:(id)arg3;
- (void)iBooksReadAllWithEvent:(id)arg1 request:(id)arg2;
- (id)iBooksInteractWithoutBoundaryCheckWithEvent:(id)arg1 request:(id)arg2 direction:(long long)arg3;
- (BOOL)iBooksHasReachedEndOfTextElement;
- (BOOL)iBooksHasReachedBeginningOfTextElement;
- (id)nextContentUISibling;
- (id)previousContentUISibling;
- (id)iBooksUIElementForAttributeSearchingParentChain:(CDUnknownBlockType)arg1 withChecker:(CDUnknownBlockType)arg2;
- (id)lastPositionTextMarkerForReadAll:(id)arg1;
- (id)lastPositionTextMarkerForReadFromCurrentPosition:(id)arg1;
- (id)webAreaLastPosition;
- (id)webAreaFirstPosition;
- (id)lastPosition;
- (id)firstPosition;
- (void)iBooksInvalidateCachedMarkersIfNeeded;
- (id)iBooksTextMarkerForAttributeWithUIElement:(id)arg1 textMarker:(CDUnknownBlockType)arg2 supportsTextMarkerForBounds:(CDUnknownBlockType)arg3 textMarkerForBounds:(CDUnknownBlockType)arg4 constrainingBounds:(struct CGRect)arg5 direction:(unsigned char)arg6;
- (struct __AXTextMarker *)iBooksMarkerSearchWithUIElement:(id)arg1 marker:(struct __AXTextMarker *)arg2 constrainingBounds:(struct CGRect)arg3 direction:(unsigned char)arg4 orientation:(unsigned char)arg5 depth:(unsigned long long)arg6;
- (struct __AXTextMarker *)iBooksMarkerForDirectionWithUIElement:(id)arg1 marker:(struct __AXTextMarker *)arg2 direction:(unsigned char)arg3 granularity:(unsigned char)arg4;
- (long long)iBooksCompareMarker:(struct __AXTextMarker *)arg1 toMarker:(struct __AXTextMarker *)arg2 forUIElement:(id)arg3;
- (struct CGRect)iBooksMarkerBoundsWithUIElement:(id)arg1 marker:(struct __AXTextMarker *)arg2;
- (BOOL)supportsScrollToVisible;
- (id)axDescription;

@end

