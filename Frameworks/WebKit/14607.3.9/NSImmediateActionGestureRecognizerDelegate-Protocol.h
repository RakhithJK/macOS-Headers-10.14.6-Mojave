//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKit/NSGestureRecognizerDelegate-Protocol.h>

@class NSImmediateActionGestureRecognizer;

@protocol NSImmediateActionGestureRecognizerDelegate <NSGestureRecognizerDelegate>

@optional
- (void)immediateActionRecognizerDidCompleteAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)immediateActionRecognizerDidCancelAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)immediateActionRecognizerDidUpdateAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)immediateActionRecognizerWillBeginAnimation:(NSImmediateActionGestureRecognizer *)arg1;
- (void)immediateActionRecognizerWillPrepare:(NSImmediateActionGestureRecognizer *)arg1;
@end

