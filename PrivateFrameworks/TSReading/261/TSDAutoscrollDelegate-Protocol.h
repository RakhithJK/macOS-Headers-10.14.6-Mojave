//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class TSDAutoscroll, TSDInteractiveCanvasController;

@protocol TSDAutoscrollDelegate
@property(nonatomic) struct CGPoint autoscrollPoint;
@property(retain, nonatomic) TSDAutoscroll *autoscroll;
@property(readonly, nonatomic) TSDInteractiveCanvasController *icc;
- (void)autoscrollWillNotStart;
- (void)updateAfterAutoscroll:(TSDAutoscroll *)arg1;

@optional
- (BOOL)autoscrollWithDirection:(int)arg1 proposedContentOffset:(struct CGPoint)arg2 completionBlock:(void (^)(void))arg3;
- (int)allowedAutoscrollDirections;
- (unsigned long long)maximumAutoscrollDeltaForCount:(unsigned long long)arg1;
- (double)unscaledStartAutoscrollThreshold;
@end

