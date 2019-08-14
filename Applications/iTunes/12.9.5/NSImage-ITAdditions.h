//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSImage.h>

@interface NSImage (ITAdditions)
+ (id)imageWithITImage:(shared_ptr_c47a0a18)arg1;
- (id)tintedImageWithSize:(struct CGSize)arg1 fromRect:(struct CGRect)arg2 withTintColor:(id)arg3;
- (id)tintedImageWithTintColor:(id)arg1;
- (id)imageByApplyingTransform:(id)arg1;
- (id)mirrorImageIfNeeded;
- (id)imageColorizedWithColor:(id)arg1;
- (id)dimmedImage;
- (id)imageScaledProportionallyToFitInSize:(struct CGSize)arg1;
- (id)imageStretchedToSize:(struct CGSize)arg1;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 scaling:(int)arg3 placement:(int)arg4 respectFlipped:(BOOL)arg5 operation:(unsigned long long)arg6 fraction:(double)arg7;
- (id)_imageFromSourceRect:(struct CGRect)arg1 stretchedToSize:(struct CGSize)arg2;
@end

