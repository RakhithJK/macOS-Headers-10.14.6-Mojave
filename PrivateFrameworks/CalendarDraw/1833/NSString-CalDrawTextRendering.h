//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (CalDrawTextRendering)
- (void)drawInRect:(struct CGRect)arg1 usingMetrics:(id)arg2 fontRef:(struct __CTFont *)arg3 lineBreakMode:(long long)arg4 firstLineX:(double)arg5 colorRef:(struct CGColor *)arg6 shadowColorRef:(struct CGColor *)arg7 shadowOffset:(struct CGPoint)arg8 drawIcon:(BOOL)arg9 withRenderer:(id)arg10;
- (id)stringMetricsForDrawingInRect:(struct CGRect)arg1 usingFontRef:(struct __CTFont *)arg2 ellipsisStyle:(long long)arg3 flowingFromX:(double)arg4 lastLineEnd:(struct CGPoint *)arg5 startOnNextLineIfPossible:(BOOL)arg6 withRenderer:(id)arg7 didStartOnNextLine:(char *)arg8;
- (struct CGSize)drawAtPoint:(struct CGPoint)arg1 withAttributes:(id)arg2 lineSize:(struct CGSize)arg3 withinRect:(struct CGRect)arg4;
- (struct CGSize)sizeWithFontRef:(struct __CTFont *)arg1;
@end

