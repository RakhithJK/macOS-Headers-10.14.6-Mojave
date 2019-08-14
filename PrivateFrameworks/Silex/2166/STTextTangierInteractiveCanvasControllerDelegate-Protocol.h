//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/TSWPInteractiveCanvasControllerDelegate-Protocol.h>

@class STTextTangierFlowInfo, STTextTangierInteractiveCanvasController, TSDInteractiveCanvasController, TSWPHyperlinkField, UIScrollView, UITextInteraction;

@protocol STTextTangierInteractiveCanvasControllerDelegate <TSWPInteractiveCanvasControllerDelegate>

@optional
- (BOOL)interactiveCanvasController:(STTextTangierInteractiveCanvasController *)arg1 shouldBeginInteraction:(UITextInteraction *)arg2 atPoint:(struct CGPoint)arg3;
- (void)interactiveCanvasControllerWillStartInteraction:(STTextTangierInteractiveCanvasController *)arg1;
- (void)interactiveCanvasController:(TSDInteractiveCanvasController *)arg1 scrollViewDidEndDragging:(UIScrollView *)arg2 willDecelerate:(BOOL)arg3;
- (void)interactiveCanvasController:(STTextTangierInteractiveCanvasController *)arg1 interactedWithHyperlink:(TSWPHyperlinkField *)arg2 info:(STTextTangierFlowInfo *)arg3 range:(struct _NSRange)arg4 touchPoint:(struct CGPoint)arg5 touchAndHold:(BOOL)arg6;
@end

