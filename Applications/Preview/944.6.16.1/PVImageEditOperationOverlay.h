//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PVImageEditOperation.h"

@class CIImage, NSData;

@interface PVImageEditOperationOverlay : PVImageEditOperation
{
    NSData *_PNGData;
    struct CGSize _imgSize;
    struct CGSize _origSize;
    struct CGRect _rect;
    long long _orientation;
    CIImage *_pasted_CIImage;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSData *PNGData; // @synthesize PNGData=_PNGData;
- (void).cxx_destruct;
- (id)filterChainForSourceImage:(id)arg1;
@property(readonly) __weak CIImage *pasted_CIImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 rect:(struct CGRect)arg2 orientation:(long long)arg3 originalSize:(struct CGSize)arg4;
- (id)initWithCGImage:(struct CGImage *)arg1 rect:(struct CGRect)arg2 originalSize:(struct CGSize)arg3;

@end

