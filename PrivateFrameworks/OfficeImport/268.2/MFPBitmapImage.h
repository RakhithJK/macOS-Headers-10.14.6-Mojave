//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/MFPImage.h>

@class NSData, OITSUImage;

@interface MFPBitmapImage : MFPImage
{
    NSData *mBitmapData;
    OITSUImage *mPhoneBitmapImage;
    struct CGSize mPixelSize;
    struct CGSize mPointSize;
}

- (void).cxx_destruct;
- (struct CGSize)pointSize;
- (struct CGSize)pixelSize;
- (id)phoneImage;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 unit:(int)arg3 effect:(id)arg4;
- (id)initWithBitmapData:(id)arg1;

@end

