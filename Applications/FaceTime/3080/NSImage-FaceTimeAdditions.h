//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSImage.h>

@interface NSImage (FaceTimeAdditions)
+ (id)imageNamed:(id)arg1 size:(struct CGSize)arg2;
- (id)tintedImageWithColor:(id)arg1;
- (void)drawNicelyScaledInRect:(struct CGRect)arg1 inView:(id)arg2 operation:(unsigned long long)arg3 fraction:(float)arg4;
- (void)drawNicelyScaledInRect:(struct CGRect)arg1 operation:(unsigned long long)arg2 fraction:(float)arg3;
- (struct CGSize)largestRepPixelSize;
- (struct CGSize)largestRepSize;
@end

