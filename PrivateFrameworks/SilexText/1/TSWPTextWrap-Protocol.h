//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, TSDLayout, TSWPColumn;
@protocol TSWPLayoutTarget;

@protocol TSWPTextWrap
- (double)nextUnobstructedSpanStartingAt:(struct CGRect)arg1 wrappableAttachments:(NSArray *)arg2 userInfo:(id)arg3;
- (unsigned int)splitLine:(struct CGRect)arg1 lineSegmentRects:(struct CGRect [128])arg2 wrappableAttachments:(NSArray *)arg3 ignoreFloatingGraphics:(BOOL)arg4 floatingCausedWrap:(char *)arg5 skipHint:(double *)arg6 userInfo:(id)arg7;
- (id)beginWrappingToColumn:(TSWPColumn *)arg1 target:(TSDLayout<TSWPLayoutTarget> *)arg2 hasWrapables:(char *)arg3;
@end

