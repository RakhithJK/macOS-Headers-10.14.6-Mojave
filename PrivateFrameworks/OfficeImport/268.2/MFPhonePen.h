//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/MFPen.h>

@interface MFPhonePen : MFPen
{
    float m_PixelSize;
}

+ (id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4 LPToDPTransform:(struct CGAffineTransform)arg5;
- (void)strokePath:(id)arg1 in_path:(id)arg2;
- (void)applyLineCapStyleToPath:(id)arg1;
- (void)applyLineJoinStyleToPath:(id)arg1 in_path:(id)arg2;
- (void)applyDashedLinesToPath:(id)arg1;
- (id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double *)arg4;

@end

